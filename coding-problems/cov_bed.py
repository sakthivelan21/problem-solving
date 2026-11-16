'''
class city
city_id,state_name,city_name,covid_beds,avlblcovbeds,ventilbeds,avlblventilbeds
'''

class City:

	def __init__(self,city_id,state_name,city_name,covid_beds,avlblcovbeds,ventilbeds,avlblventilbeds):

		self.city_id=city_id
		self.state_name=state_name
		self.covid_beds=covid_beds
		self.avlblcovbeds=avlblcovbeds
		self.ventilbeds=ventilbeds
		self.avlblventilbeds=avlblventilbeds
		self.city_name=city_name

'''
class CovBedsAnalysis

analysis_name,city_list
'''


class CovBedsAnalysis:
	
	city_holder=[]
	def __init__(self,analysis_name,city_list):
		self.analysis_name=analysis_name
		self.city_list=city_list
		
		for city in self.city_list:

			flag=-1
			for j in range(len(self.city_holder)):
				if  city.state_name==self.city_holder[j][0]:
					flag=j
					break
			if flag==-1:
				self.city_holder.append([city.state_name,city.avlblcovbeds,city.avlblventilbeds,city.covid_beds,city.ventilbeds,1])
			else:
				self.city_holder[flag][1]+=city.avlblcovbeds
				self.city_holder[flag][2]+=city.avlblventilbeds
				self.city_holder[flag][3]+=city.covid_beds
				self.city_holder[flag][4]+=city.ventilbeds
				self.city_holder[flag][5]+=1

	def get_StateWiseAvlblBedStats(self):
		state_holder=[[city[0],city[1],city[2]] for city in self.city_holder]
		for i in range(len(state_holder)):
			temp=i
			for j in range(i+1,len(state_holder)):
				if state_holder[temp][0]>state_holder[j][0]:
					temp=j
			state_holder[temp],state_holder[i]=state_holder[i],state_holder[temp]

		return state_holder

	def  get_CitesWithMoreThanAvgOccupiedbeds(self):
		flag=-1 
		for i in range(len(self.city_holder)):
			if self.city_holder[i][0]==self.analysis_name:
				flag=i 
		if flag==-1:
			return "No state available"
		else:
			state_details=self.city_holder[flag]
			
			average_occupied_cov_beds= (state_details[3]-state_details[1])/state_details[5]
			
			average_ventilator_occupied_cov_beds=(state_details[4]-state_details[2])/state_details[5]
			
			f=-1 
			
			city_details=None
			
			
			
			for city in self.city_list:
				
				if city.state_name==self.analysis_name:
					
					city_occupied_cov_beds=city.covid_beds-city.avlblcovbeds
					city_ventilator_cov_beds=city.ventilbeds-city.avlblventilbeds
					
					if city_occupied_cov_beds >= average_occupied_cov_beds and city_ventilator_cov_beds >= average_ventilator_occupied_cov_beds:
					
						if city_details==None:
							city_details=city
						elif (city_details.covid_beds - city_details.avlblcovbeds) > city_occupied_cov_beds and (city_details.ventilbeds-city_details.avlblventilbeds)> city_ventilator_cov_beds:
							city_details=city
			return [city_details.city_name,city_details.covid_beds - city_details.avlblcovbeds,city_details.ventilbeds-city_details.avlblventilbeds]
							
						
cities_length=int(input())

city_list=[]
for i in range(cities_length):
	city_id=int(input())
	state_name=input().strip()
	city_name=input().strip()
	covid_beds=int(input())
	avlblcovbeds=int(input())
	ventilbeds=int(input())
	avlblventilbeds=int(input())

	city_list.append(City(city_id,state_name,city_name,covid_beds,avlblcovbeds,ventilbeds,avlblventilbeds))

state_name=input().strip()

print(city_list)

covBedsAnalysis= CovBedsAnalysis(state_name,city_list)

print( covBedsAnalysis.get_StateWiseAvlblBedStats())

print( covBedsAnalysis.get_CitesWithMoreThanAvgOccupiedbeds())

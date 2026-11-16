using System;

using System.Collections.Generic;
/*
    Input 
        
        4
        252
        Ashwa
        Triplex
        26000
        6
        21
        Susila
        triplex
        17000
        9
        28
        Lakshmi
        single-storey
        5000
        5
        215
        Aswa
        Triplex
        29000
        15
        Triplex

    output
        
        21$Susila$triplex$17850$9
        215$Aswa$Triplex$30450$15
    
*/
namespace Hello
{
    public class Colony
    {
        private int flatNo;
        private String ownerName;
        private String flatType;
        private double rent;
        private int inmatesCount;
        
        public Colony(int flatNo,String ownerName,String flatType,double rent,int inmatesCount){
            this.flatNo=flatNo;
            this.ownerName=ownerName;
            this.flatType=flatType;
            this.rent=rent;
            this.inmatesCount=inmatesCount;
        }
        
        public int FlatNo{
            get{ return this.flatNo;}
            set{ this.flatNo=value;}
        }
        
        public String OwnerName{
            get{ return this.ownerName;}
            set{ this.ownerName=value;}
        }
        
        public String FlatType
        {
            get{return this.flatType;}
            set{this.flatType=value;}
        }
        
        public double Rent{
            get{return this.rent;}
            set{this.rent=value;}
        }
        
        public int InmatesCount{
            get{return this.inmatesCount;}
            set{this.inmatesCount=value;}
        }
        
        public String getDetails()
        {
            return String.Format("{0}${1}${2}${3}${4}",this.flatNo,this.ownerName,this.flatType,this.rent,this.inmatesCount);
        }
    }
    
    public class ColonyManagement{
        private List<Colony> colonyList;
        
        public ColonyManagement(List<Colony> colonyList)
        {
            this.colonyList=colonyList;
        }
        
        public List<Colony> getFlatType(String flatType)
        {
            List<Colony> filteredColonyList=new List<Colony>();
            
            for(int i=0;i<colonyList.Count;i++)
            {
                if (flatType.ToLower()==colonyList[i].FlatType.ToLower() && colonyList[i].InmatesCount>8)
                {
                    colonyList[i].Rent+=(colonyList[i].Rent*5)/100;
                    filteredColonyList.Add(colonyList[i]);
                }
            }
            
            return filteredColonyList;
        }
    }
    
    public class Hello 
    {
       
		public static void Main(String[] args)
		{
		    List<Colony> colonyList=new List<Colony>();
		    int n=Convert.ToInt32(Console.ReadLine());
		    for(int i=0;i<n;i++)
		    {
		        int flatNo=Convert.ToInt32(Console.ReadLine());
		        String ownerName=Console.ReadLine();
		        String flatType=Console.ReadLine();
		        int rent=Convert.ToInt32(Console.ReadLine());
		        int inmatesCount=Convert.ToInt32(Console.ReadLine());
		        colonyList.Add(
		             new Colony(flatNo,ownerName,flatType,rent,inmatesCount)
		            );
		    }
		    String flatTypeCheck=Console.ReadLine();
		    ColonyManagement colonyManagement = new ColonyManagement(colonyList);
		    List<Colony> filteredColonyList=colonyManagement.getFlatType(flatTypeCheck);
		    
		    if(filteredColonyList.Count==0)
		        Console.WriteLine("No Colony found with the given flat type");   
		    else
		    {
		        foreach(Colony colony in filteredColonyList)
		            Console.WriteLine(colony.getDetails());
		    }
		}
	}
}


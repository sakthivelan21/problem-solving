using System;
using System.Collections.Generic;

namespace MyClass
{
	public class Consumer
	{
		public String name;
		public int consumerId;
		public int units;
		public double bill;
		public String branch;

		public Consumer()
		{
		}

		public Consumer(String name,int consumerId,int units,double bill,String branch){
			this.name=name;
			this.consumerId=consumerId;
			this.bill=bill;
			this.branch=branch;
	    this.units=units;
		}

		
	}
    public class Bill_Management
    {
        public List<Consumer> consumerList;
        
        public Bill_Management()
        {
            this.consumerList=new List<Consumer>();
        }

        public Consumer FindConsumerWithLowBill(String branch)
        {
            Consumer consumerFound=null;

            foreach(Consumer consumer in consumerList)
            {   
                if(consumer.branch.Equals(branch))
                {
                    if(consumerFound == null)
                        consumerFound = consumer;
                    else
                    {
                        if(consumer.bill < consumerFound.bill)
                            consumerFound = consumer;
                    }
                }
            }

            return consumerFound;
        }

    }
	public class MyClass
	{
		public static void Main(String[] args)
		{
			int n=Convert.ToInt32(Console.ReadLine());

            Bill_Management bill_Management = new Bill_Management();

            for(int i=0;i<n;i++)
            {
                String name = Console.ReadLine();

                int consumerId = Convert.ToInt32(Console.ReadLine());

                int units = Convert.ToInt32( Console.ReadLine());

                double bill = Convert.ToDouble(Console.ReadLine());

                String branch = Console.ReadLine();

                Consumer consumer = new Consumer (name,consumerId,units,bill,branch);

                bill_Management.consumerList.Add(consumer);

            }

            String searchBranch = Console.ReadLine();

            Consumer consumerFound  = bill_Management.FindConsumerWithLowBill(searchBranch);

            if(consumerFound==null)
                Console.WriteLine("No Consumer is available");

            else
                Console.WriteLine(String.Format("{0}-{1}-{2}-{3}",consumerFound.name,consumerFound.consumerId,consumerFound.bill,consumerFound.branch));
		}
	}
}

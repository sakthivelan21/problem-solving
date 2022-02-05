using System;
 
namespace Hello
{
    public class User
    {
        // data members
        private int age;
        private String name;
        private double height;
        public static String status;
        
        //constructor
        public User(String name,int age,double height)
        {
            Console.WriteLine("Constructor of User Called");
            this.name=name;
            this.age=age;
            this.height=height;
        }
        
        //getters and setters
        
        public string Name   // property
        {
            get { return this.name; }   // get method
            set { this.name = value; }  // set method
        }
        
        public int Age   // property
        {
            get { return this.age; }   // get method
            set { this.age = value; }  // set method
        }
        
        public String ShorHandMethodValue
        {
            get;set;
        }
        
        public void setHeight(double height)
        {
            this.height=height;
        }
        
        public double getHeight()
        {
            return this.height;
        }
        
        public override String ToString()
        {
            return $"{this.name} {this.age} {this.height}";
        }
        //Destructor 
        ~User()
        {
            Console.WriteLine("Destructor of User Called !!!");
        }
    }
	public class Hello
	{
	    /*
	        C# class oops
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
		       User.status="Learning !!";
		       User user=new User("Sakthi",21,174.24F);
		       user.ShorHandMethodValue="always single";
		       Console.WriteLine(user.Name+" "+user.Age+" "+user.ShorHandMethodValue);
		       Console.WriteLine(user);
		       
		}
	}
}

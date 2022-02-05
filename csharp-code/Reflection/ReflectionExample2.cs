using System;
using System.Reflection;
 
namespace Hello
{
    /*
        Reflection --to obtain the data about loaded assemblies and elements withing classes, methods and values
        it is in System.Reflection
        
        Subclasses inside Reflection
        
            * Assembly
            * AssemblyName
            * ConstructorInfo
            * MethodInfo
            * PropertyInfo
            * MemberInfo 
            * ParameterInfo
            * Type -- got get metadata of the related program
    */
    
    /*
        output
        
        ClassName : Student
        -->Method : getRollNo
        -->Method : Equals
        ---->Paramter : obj type: System.Object
        -->Method : GetHashCode
        -->Method : GetType
        -->Method : ToString
        ClassName : Hello
        -->Method : Main
        ---->Paramter : args type: System.String[]
        -->Method : Equals
        ---->Paramter : obj type: System.Object
        -->Method : GetHashCode
        -->Method : GetType
        -->Method : ToString
    */
    public class Student
    {
        private int rollNo;
        public Student(int rollNo)
        {
            this.rollNo=rollNo;
        }
        public int getRollNo()
        {
            return this.rollNo;
        }
    }
    public class Hello
    {
		public static void Main (string[] args)
		{
		    Assembly executingAssembly=Assembly.GetExecutingAssembly();
		    Type[] types=executingAssembly.GetTypes();
		    foreach(Type type in types)
		    {
		        Console.WriteLine($"ClassName : {type.Name}");
		        MethodInfo[] methodInfos=type.GetMethods();
		        
		        foreach(var method in methodInfos)
		        {
		            Console.WriteLine($"-->Method : {method.Name}");
		            
		            ParameterInfo[] parameterInfos=method.GetParameters();
		            
		            foreach(var parameter in parameterInfos)
		            {
		                Console.WriteLine($"---->Paramter : {parameter.Name} type: {parameter.ParameterType}");
		            }
		        }
		    }
		}
	}
}


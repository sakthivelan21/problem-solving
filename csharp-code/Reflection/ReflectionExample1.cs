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
        
        String
        System.String
        System
        System.Object
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    Type type=typeof(String);
		    Console.WriteLine(type.Name);
		    Console.WriteLine(type.FullName);
		    Console.WriteLine(type.Namespace);
		    Console.WriteLine(type.BaseType);
		}
	}
}


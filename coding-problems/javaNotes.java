JAVA SETUP
 
JAVA PATH
set path=C:\Program Files\Java\jdk1.6.0_23\bin
JAVA_HOME
setx JAVA_HOME "C:\Program Files\Java\jdk1.8.0"
-------------------------------------------------------------------------------------
DATA TYPES IN JAVA 

byte - 8 bit - 1 byte 
short - 16 bit - 2 bytes
int - 32 bit - 4 bytes
long - 64 bit - 8 bytes 
------------------------------------------------------------------------------------- 
fileReader.java
import java.util.*;
import java.io.*; 
public class fileReader{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String fileName=sc.nextLine(); 
        try{
            // Scanner can be used to read the file.
            Scanner scan=new Scanner(new File(fileName));
            int s=0; 
            while(scan.hasNext())
            {
                s+=scan.nextInt();
            }
            System.out.print(s);
        }
        catch(Exception e)
        {
            System.out.print("FileNotFound");
        }
        }
}

public class Hello{
 public static void main(String[] args){
     int total=0; 
     Scanner sc=new Scanner(System.in);
     try{
         FileReader fr=new FileReader(sc.nextLine().trim());
         BufferedReader br=new BufferedReader(fr);
         String line;
         while((line=br.readLine())!=null)
         {
            total+=Integer.parseInt(line);
            }
        System.out.println(total);
        fr.close();
     }
     catch(Exception e)
     {
        System.out.println("FileNotFound");
    }
 }
}
----------------------------------------------------------------------------
exception example
class PropagatedException {

    void example() throws Exception{
        throw new Exception("This exception will always be thrown.");
    }
    
    public static void main(String[] args) {
        PropagatedException p = new PropagatedException();
        try{
            p.example();
        }
        catch(Exception e){
            System.err.println( e.getClass().getSimpleName() + ": " + e.getMessage() );
        }
    }
}

------------------------------------------------------------------------------
Comparable for java
import java.util.*;

class javaComparable implements Comparable<javaComparable>
{
    String title; int registrationFee,duration;
    public Event(String title, int registrationFee,int duration)
    {
        this.title=title;
        this.registrationFee=registrationFee;
        this.duration = duration;
    }
    @Override 
    public int compareTo(javaComparable other)
    {
        if(this.registrationFee > other.registrationFee)
            return 1;
        else if(this.registrationFee == other.registrationFee)
        {
            if(this.duration > other.duration)
                return 1; 
            else if(this.duration == other.duration)
                return this.title.compareTo(other.title);   // to compare the two strings and get the sorting of the title
            else 
                return -1;
        }
        return -1;
    }
    @Override
    public String toString()
    {
        return this.title+" "+this.registrationFee+" "+this.duration;
    }
}

/*
multiple line input are 
 to sort the values based on the registration fee , duration and title
*/
public class Hello
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<Event> events=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            String currEvent[]=sc.nextLine().trim().split("\\s+");
            String title=currEvent[0];
            int registrationFee= Integer.parseInt(currentEvent[1]);
            int duration =Integer.parstInt(currentEvent[2]);
            events.add(new Event(title,registrationFee,duration));
        
        }
        Collections.sort(events);
        for(Event event: events)
        {
            System.out.ptintln(event);
        }
}
-----------------------------------------------------------------------------
Using static to fetch the values in runtime 

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

static Scanner scan = new Scanner(System.in);
static int B = scan.nextInt();
static int H = scan.nextInt();
static boolean flag = true;
static{
    try{
        if(B <= 0 || H <= 0){
            flag = false;
            throw new Exception("Breadth and height must be positive");
        }
    }catch(Exception e){
        System.out.println(e);
    }

}
public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class
--------------------------------------------------------------------
// A Class that represents use-defined expception
class MyException extends Exception
{
	public MyException(String s)
	{
		// Call constructor of parent Exception
		super(s);
	}
}

// A Class that uses above MyException
public class Main
{
	// Driver Program
	public static void main(String args[])
	{
		try
		{
			// Throw an object of user defined exception
			throw new MyException("GeeksGeeks");
		}
		catch (MyException ex)
		{
			System.out.println("Caught");

			// Print the message from MyException object
			System.out.println(ex.getMessage());
		}
	}
}
--------------------------------------------------------------------
ArrayList in java and sorting arraylist

import java.util.*;

class Folder
{
	ArrayList<String> fileExtensions;
	ArrayList<ArrayList<String>> fileExplorer;
	public Folder()
	{
		fileExtensions=new ArrayList<String>();
		fileExplorer=new ArrayList<ArrayList<String>>();
	}
	public void addFile(String fileName)
	{
		String[] fileSplit=fileName.split("\\.");
		int flag=-1;
		for(int i=0;i< fileExtensions.size();i++)
		{
			if(fileExtensions.get(i).equals(fileSplit[1]))
			{
				flag=i;
				break;
			}
			
		}
		
		if(flag==-1)
		{
			
			fileExtensions.add(fileSplit[1]);
			fileExplorer.add(new ArrayList<String>(Arrays.asList(fileSplit[0])));
		}
		else
		{
			fileExplorer.get(flag).add(fileExplorer.get(flag).size(),fileSplit[0]);
		}
	}
	public void printStatus()
	{
		
		for(int i=0;i<fileExtensions.size();i++)
		{
			int temp=i;
			for(int j=i+1;j<fileExtensions.size();j++)
			{
				if( fileExtensions.get(temp).compareTo(fileExtensions.get(j)) >0)
					temp=j;
			}
			String tempString=fileExtensions.get(i);
			fileExtensions.set(i,fileExtensions.get(temp));
			fileExtensions.set(temp,tempString);
			
			ArrayList<String>  tempExplorer= fileExplorer.get(i);
			fileExplorer.set(i,fileExplorer.get(temp));
			fileExplorer.set(temp,tempExplorer);
			System.out.println(fileExtensions.get(i)+" "+fileExplorer.get(i));
		}
	}
}
public class test
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int totalFiles=Integer.parseInt(sc.nextLine());
		Folder folder=new Folder();
		for(int i=0;i< totalFiles;i++)
		{
			folder.addFile(sc.nextLine().trim());
		}
		System.out.println("Folder:");
		folder.printStatus();
	}
}

------------------------------------------------------------------------------------------------



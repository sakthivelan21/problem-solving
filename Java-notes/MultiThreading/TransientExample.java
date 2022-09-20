// Java program to demonstrate transient keyword
import java.io.*;

/*

*** output *** 

i = 10
j = 20
k = 0
l = 40
m = 50

*/
public class TransientExample implements Serializable
{
	// Normal variables
	int i = 10, j = 20;

	// Transient variables
	transient int k = 30;

	// Use of transient has no impact here
	transient static int l = 40;
	transient final int m = 50;

	public static void main(String[] args) throws Exception
	{
		TransientExample transientExample = new TransientExample();

		// serialization
		FileOutputStream fileOutputStream = new FileOutputStream("abc.txt");
		ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutputStream);
		objectOutputStream.writeObject(transientExample);

		// de-serialization
		FileInputStream fileInputStream = new FileInputStream("abc.txt");
		ObjectInputStream objectInputStream = new ObjectInputStream(fileInputStream);
		TransientExample output = (TransientExample)objectInputStream.readObject();

		System.out.println("i = " + output.i);
		System.out.println("j = " + output.j);
		System.out.println("k = " + output.k);
		System.out.println("l = " + output.l);
		System.out.println("m = " + output.m);
	}
}

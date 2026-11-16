/*
    String Buffer && String Builder have same methods nearly. 

    *** output *** 

    Length of the string 21
    capacity of the string 37
    Increased capacity of the string 80
    character at position 2 is i
    new String is HI you look beautiful
    new String is HI pallavi  you look beautiful
    new String is pallavi  you look beautiful
    new String is pallavi
    pallavi I love  You 2

*/
public class OtherStringClassManipulation
{
    public static void main(String[] args)
    {
        StringBuffer str1 = new StringBuffer("Hi you look beautiful");

        System.out.println("Length of the string "+str1.length());

        System.out.println("capacity of the string "+str1.capacity());

        str1.ensureCapacity(80);

        System.out.println("Increased capacity of the string "+str1.capacity());

        char ch = str1.charAt(1);

        System.out.println("character at position 2 is "+ch);

        str1.setCharAt(1,'I');

        System.out.println(" new String is "+str1);

        // str.insert(index,string)
        str1.insert(2," pallavi ");

        System.out.println(" new String is "+str1);
        
        // to delete a single character
        str1.deleteCharAt(0);

        // to delete a range of strings 
        str1.delete(0,2);

        System.out.println("new String is "+str1);

        // setting new length
        str1.setLength(7);

        System.out.println("new String is "+str1);

        str1.append(" I love ").append(" You ").append(2);

        System.out.println(str1);
    }
}
/* 
 User Defined Exception 
 
  *** output *** 
  MyException: performing Integer Division
*/

class MyException extends Exception{
    public MyException(String message)
    {
        super(message);
    }
}

public class UserDefinedException{
    public static void main(String[] args)
    {
        int a=6,b=3;
        try{
            if(a%b==0)
                throw new MyException("performing Integer Division");   
        }
        catch(MyException e)
        {
            System.out.println(e);
        }
    }
}
public class AssertionExample{
    public static void main(String[] args)
    {
        int age = 16;

        assert age>=18; 

        age = 12;
        // throw an error as age is 12
        assert age>=18: "The minimum age should be 18";
    }
}
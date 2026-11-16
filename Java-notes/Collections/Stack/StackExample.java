
import java.util.Stack;

/*
    Stack collection methods 

    *** output *** 

    Element in stack [Hi, Pallavi, I love you]
    Peek element of stack I love you    
    poping an element from stack        
    Element in stack [Hi, Pallavi]      
    Searching for element 'Hi' in stack 
    Element found at position 2
    Is  stack is empty false
*/

public class StackExample
{
    public static void main(String[] args)
    {
        Stack<String> stack = new Stack<String>();

        stack.push("Hi");

        stack.push("Pallavi");

        stack.push("I love you");

        System.out.println("Element in stack "+stack);

        System.out.println("Peek element of stack "+stack.peek());

        System.out.println("poping an element from stack");

        stack.pop();

        System.out.println("Element in stack "+stack);

        Integer searchIndex = stack.search("Hi");

        System.out.println("Searching for element 'Hi' in stack ");

        if(searchIndex==-1)
            System.out.println("Element Not found");
        else 
            System.out.println("Element found at position "+searchIndex);

        System.out.println("Is  stack is empty "+stack.isEmpty());

        // to clear the stack
        stack.clear();
    }
}
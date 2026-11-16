/*
*/
import java.util.ArrayList;
import java.util.Scanner;

class Data<T>
{
   private ArrayList<T> arrayList;

    public Data()
    {
        this.arrayList  = new ArrayList<T>();
    }

    public void insertData(T data)
    {
        this.arrayList.add(data);
    }

    public void display(){
        for(T data : this.arrayList)
        {
            System.out.print(data+" ");
        }
    }

    public void remove(T data){
        if(this.arrayList.contains(data))
        {
            this.arrayList.remove(data);
            System.out.print("\n The element "+data +" removed successfully");
        }
        else 
            System.out.print("\n Element not found");
    }


}

public class ArrayListExample{

    Data<Integer> data= new Data<Integer>(); 
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        ArrayListExample arrayListExample = new ArrayListExample();
        Integer choice ,num;
        do
        {
            System.out.print("\n the choice list are \n1.insert \n2.display \n3.delete\n4.exit");
            System.out.print("\nEnter your choice:");
            choice = scanner.nextInt();
            switch(choice)
            {
                case 1:
                        System.out.print("\nTo insert a value into array\n Enter the number to be inserted: ");
                         num = scanner.nextInt();		
                        arrayListExample.data.insertData(num);
                        break;
                case 2:
                        System.out.print("\n the values in the array are:");
                        arrayListExample.data.display();break;
                case 3:
                        System.out.print("\n to remove the element in the array.\n Enter the element : ");
                         num = scanner.nextInt();
                        arrayListExample.data.remove(num);
                        break;
                case 4: 
                    System.exit(0);break;
                default:
                    System.out.printf("\nPlease enter a valid choice(1,2,3,4)");
                    
            }
        }while(true);
    }
}
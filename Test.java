import java.util.*; 

public class Test{
 
    public static void main(String[] args){
        String[] array={ "Sakthi","Abinaya","Velan","Kiara advani","Kiara adwani","Abinay"};
        
        for (int i=0;i<array.length;i++)
        {
            int index=i;
            for(int j=i+1;j<array.length;j++)
            {
                int val=array[index].compareTo(array[j]);
                if(val>0)
                {
                    index=j;
                }
            }
            String str=array[i]; 
            array[i]=array[index]; 
            array[index]=str;
        }
        for(int i=0;i<array.length;i++)
            System.out.println(array[i]);
    }
}



import java.util.Hashtable;
import java.util.Map;

/*
*** output *** 

Elements in hashTable {3=Nazriya, 2=Pallavi, 1=Sakthi}
3:Nazriya
2:Pallavi
1:Sakthi
Getting value by key 1 Sakthi
Getting only the keys [3, 2, 1]
Getting only the values[Dia, Pallavi, Sakthi]
Checking if key 4 exists in hashTablefalse
Checking if value 'Pallavi' exists in hashTabletrue
Elements in hashTable {2=Pallavi, 1=Sakthi}
Getting the size of the hashTable 2
*/

public class HashTableExample{
    public static void main(String[] args)
    {
        // Creating an empty hashTable
        Map<Integer,String> hashTable
            = new Hashtable<Integer,String>();
        hashTable.put(1,"Sakthi");
        hashTable.put(2,"Pallavi");
        hashTable.put(3,"Nazriya");

        System.out.println("Elements in hashTable "+hashTable);

        // Traversing through Map using for-each loop
        for (Map.Entry<Integer,String> me :
             hashTable.entrySet()) {
  
            // Printing keys
            System.out.print(me.getKey() + ":");
            System.out.println(me.getValue());
        }

        System.out.println("Getting value by key 1 "+hashTable.get(1));

        hashTable.replace(3,"Dia");

        System.out.println("Getting only the keys "+hashTable.keySet());

        System.out.println("Getting only the values"+hashTable.values());

        System.out.println("Checking if key 4 exists in hashTable"+hashTable.containsKey(4));

        System.out.println("Checking if value 'Pallavi' exists in hashTable"
        + hashTable.containsValue("Pallavi"));

        hashTable.remove(3);

        System.out.println("Elements in hashTable "+hashTable);

        System.out.println("Getting the size of the hashTable "+hashTable.size());
    }
}
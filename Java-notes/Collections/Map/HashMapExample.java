

import java.util.HashMap;
import java.util.Map;

/*
/* output 
Elements in hashmap {1=Sakthi, 2=Pallavi, 3=Nazriya}
1:Sakthi
2:Pallavi
3:Nazriya
Getting value by key 1 Sakthi
Checking if key 4 exists in hashMapfalse
Checking if value 'Pallavi' exists in hashMaptrue
Elements in hashmap {1=Sakthi, 2=Pallavi}
Getting the size of the hashMap 2
*/

public class HashMapExample{
    public static void main(String[] args)
    {
        // Creating an empty HashMap
        Map<Integer,String> hashMap
            = new HashMap<Integer,String>();
        hashMap.put(1,"Sakthi");
        hashMap.put(2,"Pallavi");
        hashMap.put(3,"Nazriya");
        System.out.println("Elements in hashmap "+hashMap);

        // Traversing through Map using for-each loop
        for (Map.Entry<Integer,String> me :
             hashMap.entrySet()) {
  
            // Printing keys
            System.out.print(me.getKey() + ":");
            System.out.println(me.getValue());
        }

        System.out.println("Getting value by key 1 "+hashMap.get(1));

        System.out.println("Checking if key 4 exists in hashMap"+hashMap.containsKey(4));

        System.out.println("Checking if value 'Pallavi' exists in hashMap"
        + hashMap.containsValue("Pallavi"));

        hashMap.remove(3);

        System.out.println("Elements in hashmap "+hashMap);

        System.out.println("Getting the size of the hashMap "+hashMap.size());
    }
}
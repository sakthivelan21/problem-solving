/*

*** output ***
Modified value 1
Incremented Shared Variable value1
Modified value 1
Incremented Shared Variable value2
Modified value 2
Incremented Shared Variable value3
Modified value 3
Incremented Shared Variable value4
Modified value 5
Incremented Shared Variable value5

*** without output *** 

*/

public class VolatileExample{
    public static volatile int sharedVariable =0;

   public static void main(String[] args)
   {
        Thread thread1 = new Thread(){
            public void run(){
                
                    try{
                        for(int i=0;i<5;i++)
                        {
                            System.out.println("Modified value "+sharedVariable);
                            Thread.sleep(200);
                        }
                    }
                    catch(InterruptedException e)
                    {
                        System.out.println(e);
                    }

            }
        };

        Thread thread2 = new Thread(()->{
            
                try{
                    for(int i=0;i<5;i++)
                    {
                        sharedVariable++;
                        System.out.println("Incremented Shared Variable value"+sharedVariable);
                        Thread.sleep(200);
                    }
                }
                catch(InterruptedException e)
                {
                    System.out.println(e);
                }
            
        });

        
        thread2.start();

        thread1.start();
    }
}
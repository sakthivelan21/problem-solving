/*
    InterThread Communication 

*** output *** 
    going to withdraw...
    Less balance; waiting for deposit...
    going to deposit...
    deposit completed...
    Calling notify method
    getting back from wait state
    withdraw completed...
*/
class Customer{    
    int amount=10000;    
        
    synchronized void withdraw(int amount){    
        System.out.println("going to withdraw...");    
        boolean goneWaiting=false;
        if(this.amount<amount){    
            System.out.println("Less balance; waiting for deposit...");    
            try{
                // calling the wait method for thread to go to wait state and releasing the resource 
                wait();
                goneWaiting=true;
            }
            catch(InterruptedException e){
                System.out.println(e);
            }    
        }    

        // once the thread which was kept in wait state notified will come back and complete the execution
        if(goneWaiting)
            System.out.println("getting back from wait state");
        this.amount-=amount;    
        System.out.println("withdraw completed...");    
    }    
        
    synchronized void deposit(int amount){    
        System.out.println("going to deposit...");    
        this.amount+=amount;    
        System.out.println("deposit completed... ");    
        //calling the notify method to call back the thread from wait state 
        System.out.println("Calling notify method");
        notify();    

    }    
}    
    
class InterThreadCommunication{    
    public static void main(String args[]){    
        Customer c=new Customer();    
       
       Thread thread1 =  new Thread(){    
            public void run(){
                c.withdraw(15000);
            }    
        };
       
       Thread thread2 =  new Thread(()->    
        {
            c.deposit(10000);
        });  

        thread1.start();
        thread2.start();
    
    }
}    
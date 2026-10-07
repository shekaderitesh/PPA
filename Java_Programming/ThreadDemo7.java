class Demo extends Thread  // cteating class thread 
{
   public void run()
   {
      System.out.println(" Inside Thread is Running...."+Thread.currentThread().getName());
   }
}


public class ThreadDemo7
{
     public static void main(String A[]) throws Exception
     {
         System.out.println("Inside main thread");

         Demo dobj1 =  new Demo();        // created new thread
         Demo dobj2 =  new Demo();        // created new thread

         dobj1.setName("First Thread");
         dobj2.setName("Second Thread");

         dobj1.start();
         dobj2.start();

         dobj1.join();
         dobj2.join();

         System.out.println("End of main Thread");        // Error
     }
     
}
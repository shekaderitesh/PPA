class Demo implements Runnable
{
   public void run()
   {
      System.out.println("Thread is Running....");
   }
}


class ThreadDemo6
{
     public static void main(String A[]) throws Exception
     {
         System.out.println("Inside main thread");

         Thread dobj1 =  new Thread(new Demo());
         Thread dobj2 = new Thread(new Demo());

         dobj1.start();
         dobj2.start();

         dobj1.join();
         dobj2.join();

         System.out.println("End of main Thread");        // Error
     }
     
}
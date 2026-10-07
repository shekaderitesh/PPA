class Demo extends Thread   // creating class thread 
{
   public void run()
   {  
      try
   {
      int i = 0;
    for(i = 1; i <10; i ++)   
         {
            System.out.println("Thread"+Thread.currentThread().getName()+" "+i);
            Thread.sleep(3000);
         }
      }
      catch(Exception eobj)
      {

      }
   }
}

class ThreadDemo9
{
     public static void main(String A[]) throws Exception
     {
         System.out.println("Inside main thread");

         Demo dobj1 =  new Demo();      // created new thread
         Demo dobj2 =  new Demo();      // created new thread

         dobj1.setName("First_Thread");
         dobj2.setName("Second_Thread");

         dobj1.start();
         dobj2.start();

         dobj1.join();
         dobj2.join();

         System.out.println("End of main Thread");        // Issue
     }
     
}
/*
Inside main thread

ThreadFirst_Thread 1
ThreadSecond_Thread 1                   he print jhal tr zopl 
ThreadSecond_Thread 2                   mg he print mg parat he zopl
ThreadFirst_Thread 2
ThreadSecond_Thread 3                    same for all
ThreadFirst_Thread 3
ThreadFirst_Thread 4
ThreadSecond_Thread 4
ThreadFirst_Thread 5
ThreadSecond_Thread 5
ThreadFirst_Thread 6
ThreadSecond_Thread 6
ThreadSecond_Thread 7
ThreadFirst_Thread 7
ThreadFirst_Thread 8
ThreadSecond_Thread 8
ThreadSecond_Thread 9
ThreadFirst_Thread 9
End of main Thread

demon thread:
*/
class Demo extends Thread      // creating class thread
{
   public void run()
   {  

      int i = 0;
    for(i = 1; i <=10; i ++)   
   {
      System.out.println("Thread"+Thread.currentThread().getName()+" "+i);
   }
}
}

public class ThreadDemo8
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

         System.out.println("End of main Thread");        // Error
     }
     
}

/*
Inside main thread
ThreadSecond_Thread 1
ThreadFirst_Thread 1
ThreadFirst_Thread 2
ThreadSecond_Thread 2
ThreadSecond_Thread 3
ThreadSecond_Thread 4
ThreadSecond_Thread 5
ThreadFirst_Thread 3
ThreadFirst_Thread 4
ThreadSecond_Thread 6
ThreadSecond_Thread 7                                    loop mule as hote..
ThreadFirst_Thread 5
ThreadSecond_Thread 8
ThreadSecond_Thread 9
ThreadSecond_Thread 10
ThreadFirst_Thread 6
ThreadFirst_Thread 7
ThreadFirst_Thread 8
ThreadFirst_Thread 9
ThreadFirst_Thread 10
End of main Thread

flow and order


depend on jvm .. pratek veles same output yet nahi vegl yet....
 */

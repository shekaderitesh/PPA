class ThreadDemo1
{
     public static void main(String A[])
     {
        System.out.println("Inside main");

        Thread t = Thread.currentThread();

        System.out.println("Current thread is : "+t.getName());

        System.out.println("Current thread TID is : "+t.getId());

        System.out.println("Thread is alive or Not : "+t.getPriority());

        System.out.println("Thread priority is : "+t.getPriority());
     }
}
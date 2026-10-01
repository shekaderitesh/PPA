import java.util.Scanner;

class ExceptionDemo1X
{
    public static void main(String A[])
      {
        Scanner sobj = new Scanner(System.in);

        int No1=0  , No2=0, Ans =0;

        try
        {

        System.out.println("Enter first number:");
        No1 = sobj.nextInt();

        System.out.println("Enter second number:");
        No2 = sobj.nextInt();

        Ans = No1 / No2;       // Exception Prone code
        }
        catch(ArithmeticException aobj)
        {
          System.out.println("Exception occured:"+aobj);
        }
        finally
        {
          System.out.println("Inside finally block");
        }

        System.out.println("Division is: "+Ans);
      }
}
import java.util.Scanner;
class substraction
{
    public static void main(String[] args)
     {
        Scanner sobj= new Scanner (System.in);

        int no1, no2 , Sub;

        System.out.println("Enter first number :");
        no1=sobj.nextInt();

        System.out.println("Enter Second number :");
        no2=sobj.nextInt();

        Sub=no1-no2;

        System.out.println("The substraction is :"+Sub);

        
        
    }
}
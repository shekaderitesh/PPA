import java.util.*;
class Selection2
{
    public static void main(String[] args) {
        int no1 , no2 , ans;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        no1 = sobj.nextInt();

        System.out.println("Enter Second number");
        no2 = sobj.nextInt();

        ans = no1 + no2;

        if (ans>100)
        {
            System.out.println("Sum of these two number is Greater then 100");
        }
        else
        {
            System.out.println("Sum of these two number is less then 100");
        }




    }
}
//import bag.hat rumal.white =means white colour's hath rumal
//import bag.hat rumal.*=means whole bag of hath rumal


import java.util.*;//*means import all
class Selection1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;

        System.out.println("Enter number :");
        no=sobj.nextInt();

        if ((no%2)==0)
        {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }
    }
}
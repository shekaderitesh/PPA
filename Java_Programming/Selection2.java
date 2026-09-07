import java.util.*;//*means import all
class Selection2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;

        System.out.println("Enter You Age:");
        no=sobj.nextInt();

        if (no>=18)
        {
            System.out.println("You are allowed to watch movie");
        }
        else
        {
            System.out.println("You are not allowed to watch movie");
        }
    }
}
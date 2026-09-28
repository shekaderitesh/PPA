public class Modifier {
    public static void main(String[] args) {

        short a = 10;
        long b = 100000L;
        int c = -20;
        int d = 50;  // Java does not have unsigned int in the same way as C++

        System.out.println("short = " + a);
        System.out.println("long = " + b);
        System.out.println("signed = " + c);
        System.out.println("unsigned = " + d);
    }
}

class Student
{
    int id;
    String name;
    float marks;
}

public class Struct {
    public static void main(String[] args) {
        Student s = new Student();

        s.id = 101;
        s.name = "Rahul";
        s.marks = 85.5f;

        System.out.println("ID: " + s.id);
        System.out.println("Name: " + s.name);
        System.out.println("Marks: " + s.marks);
    }
}
class A
{
  String color="pink";  
}
class B extends A
{
    String color="blue";
    public void display()
    {
        System.out.println("color is:"+color);
         System.out.println("color is:"+super.color);
    }
}
public class Main
{
    public static void main(String[]args)
    {
        B b=new B();
        b.display();
    }
}

class parent
{
    void show()
    {
        System.out.println("show method");
    }
    void display()
    {
        System.out.println("display method");
    }
}
 class child extends parent
 {
     void show()
     {
         System.out.println("show1 method");
     }
     void print()
     {
         System.out.println("print method");
     }
 }
 class Main{
     public static void main(String[]args)
     {
        child p=new parent();
        p.show();
        p.display();
     }
 }
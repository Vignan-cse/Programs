class A
{
	int i;
	int j;
}
class B extends A
{
  int i;
   public void display()
	  {
		  i=25;
		  super.i=32;
		  j=45;
		  System.out.println("value of i in subclass is:"+i);
		  System.out.println("value of i in superclass is:"+super.i);
		  System.out.println("value of j in subclass is:"+j);
	  }
  }
public class Main {
   public static void main(String[]args)
   {
	   B s=new B();
	   s.display();
   }
}
	
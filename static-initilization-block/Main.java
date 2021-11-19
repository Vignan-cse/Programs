import java.util.*;
class Main
{
   public  static int b,h;
   public  static boolean flag;
   static 
   {
       Scanner sc=new Scanner(System.in);
       b=sc.nextInt();
       h=sc.nextInt();
       sc.close();
      if(b<0||h<0)
      {
          System.out.println("java.lang.exception in : breadth and height");
          flag=false;
      }
      else{
          flag= true;
      }
   }
   public static void main(String[]args)
   {
       if(flag)
      {
          int area=b*h;
          System.out.print(area);
      }
   }
}
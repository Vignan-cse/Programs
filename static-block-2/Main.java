 class demo
 {
     static int i,j;
     static{
         i=10;
         System.out.println("static bolck");
     }
 }
 class Main
 {
     public static void main(String[]args)
     {
         System.out.println(demo.i);
     }
 }
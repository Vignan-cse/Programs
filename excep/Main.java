class Main
{
    public static void main(String[]args)
    {
       System.out.println("helklo world");
       try {
           int a=10;
           int b=0;
          int c=a/b;
          System.out.println(a);
         System.out.println(b);
          System.out.println(c);
          System.out.println("welcome to my world");
       }
        catch(ArithmeticException ae)
       {
          // ae.printStackTrace();
         // System.out.println(ae.toString());
          System.out.println(ae.getMessage());
       }//we can create no of catch blocks for try but only one will or related one will be excetued..
       finally
       {
           System.out.println("from finally block");//we must create only one finally block for try block
       }
       System.out.println("wecome to my world");
    }
}
    


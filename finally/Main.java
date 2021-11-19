import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        try
        {
        int a=10;
       Scanner sc=new Scanner(System.in);
       int b=sc.nextInt();
       int c=a/b;
       System.out.println(c);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            System.out.println("finally excutes if any  exception occours also");
        }
    }
}

import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int num=1;
        for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=i;j++)
           {
               num=num+1;
               System.out.print(num+" ");
             
           }
           System.out.println(" ");
        }
    }
}
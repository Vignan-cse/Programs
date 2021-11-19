import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if((i+j)%2==0)
                {
                    System.out.print(" vignan");
                }
                else
                {
                    System.out.print(" guntur");
                }
            }
            System.out.println("  ");
        }
    }
}
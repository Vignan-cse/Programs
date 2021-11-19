//input 7
//o/p:2 3  5 7
import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n==0||n==1||n<0)
        {
            System.out.println("invalid range");
        }
    else
    {
        int i,j;
        for(i=2;i<=n;i++)
        {
            int c=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==0)
            {
                System.out.print(i+" ");
            }
        }
    }
    }
}
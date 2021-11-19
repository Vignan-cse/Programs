import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int inc;
        int t=0;
        int avg;
        int x=0;
        while(x<10)
        {
            x++;
            System.out.println("enter ur income of day"+x+":");
            inc=sc.nextInt();
            t=t+inc;
        }
        avg=t/10;
        System.out.println("daily avg of income is:"+avg);
    }
}
        
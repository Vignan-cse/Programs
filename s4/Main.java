import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int b=sc.nextInt();
        int h=sc.nextInt();
        if(b>0&&h>0)
        {
            int area=b*h;
            System.out.print(area);
        }
        else
        {
            System.out.println("not availabel");
        }
    }
}
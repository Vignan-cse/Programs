//Write a Java program to find the sum of even numbers upto 100
//import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        int sum=0;
        for(int i=0;i<=100;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
     System.out.println("sum: "+sum);
    }
}
            
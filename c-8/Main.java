import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int i,n;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int key=sc.nextInt();
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                System.out.println("sxc"+(i+1));
                break;
            }
        }
        if(i==n)
        {
            System.out.println("cjd");
        }
    }
}
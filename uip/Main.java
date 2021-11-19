import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int i,j,temp;
        int arr[]=new int[100];
        for( i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }
        for( i=0;i<arr.length;i++)
        {
            for( j=i+1;j<arr.length;j++)
            {
                if(arr[i]>arr[j])
                {
                temp=arr[j];
                arr[i]=arr[j];
                arr[j]=temp;
                }
            }
        }
        for( i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
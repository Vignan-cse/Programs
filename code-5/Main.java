import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String ss=s.trim();
        System.out.println(s);
        StringTokenizer st=new StringTokenizer(s,"_");
        int arr[]=new int[st.countTokens()];
        int i=0,sum=0;
        while(st.hasMoreTokens())
        {
           arr[i]=Integer.parseInt(st.nextToken());
           sum=sum+arr[i];
           i++;
        }
        for(int k:arr)
        {
            System.out.println(k);
        }
        System.out.println(sum);
    }
}
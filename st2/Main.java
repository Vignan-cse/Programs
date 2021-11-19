import java.util.*;
public class Main
    {
      public static void main (String[] args) { 
          Scanner sc=new Scanner(System.in);
          String s=sc.nextLine();
          String s1=s.trim();
          System.out.println(s1);
          StringTokenizer st=new StringTokenizer(s1,"_");
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
         System.out.println("Sum of numbers :"+sum);
      }
    }
    
import java.util.*;
import java.io.*;
import java.lang.*;
class account
{
   int bal;
   long acc;
   account(int bal,long acc)
   {
       this.bal=bal;
       this.acc=acc;
   }
   account()
   {
        bal=0;
        acc=0;
   }
   void print()
   {
       System.out.println("acc:"+acc);
       System.out.println("bal:"+bal);
       System.out.println();
   }
}
class sav extends account
{
    sav(int bal,long acc)
    {
        super( bal, acc);
    }
    void print(int intrest)
    {
        System.out.println("acc:"+acc);
        System.out.println("bal:"+bal);
        System.out.println();
    }
}
class curr extends account
{
    curr(int bal,long acc)
    {
        super(bal,acc);
    }
    void print(int draft)
    {
        System.out.println("acc:"+acc);
        System.out.println("bal:"+bal);
        if(bal<draft)
        System.out.println("limit  exceeded");
    }
}
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n,m,i;
        n=sc.nextInt();
        m=sc.nextInt();
        for( i=0;i<n;i++)
        {
        long sa=sc.nextLong();
        int sb=sc.nextInt();
        int intr=sc.nextInt();
        sav s=new sav( sb,sa);
        s.print(intr);
        }
        for( i=0;i<m;i++)
        {
            long ca=sc.nextLong();
            int cb=sc.nextInt();
            int draft=sc.nextInt();
            curr c=new curr( cb,ca);
            c.print(draft);
        }
    }
}
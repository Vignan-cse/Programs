import java.util.*;
import java.io.*;
import java.lang.*;
class Account
{
    int balance;
    long Acc_no;
    Account(long Acc_no,int balance)
    {
        this.balance=balance;
        this.Acc_no=Acc_no;
    }
    Account()
    {
        balance=0;
        Acc_no=0;
    }
    void print()
    {
       System.out.println("Account number : "+Acc_no);
       System.out.println("Account Balance: "+balance);
       System.out.println();
    }
}
class Savings extends Account
{
    Savings(long Acc_no,int balance)
    
{
    super(Acc_no,balance);
}
    
    void print(int intrest)
    {
        System.out.println("Account number : "+Acc_no);
        System.out.println("Current Balance: "+(balance+(balance*intrest)/100));
       System.out.println();

    }
}
class current extends Account
{
        current(long Acc_no,int balance)
    {
        super(Acc_no,balance);
    }
    void print(int draft)
    {
         System.out.println("Account number : "+Acc_no);
       System.out.println("Current Balance: "+balance);
                     // System.out.println();

        if(balance<draft)
            System.out.println("Limit exceeded");
    }
 
}
class Bank
{
    public static void main(String abc[])
    {
        int n,m,i;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        for(i=0;i<n;i++)
        {
            int sav_bal=sc.nextInt();
            long sav_acc=sc.nextLong();
            int intr=sc.nextInt();
            Savings a=new Savings(sav_acc,sav_bal);
            //Savings b=new Savings(intr);
            a.print(intr);
        }
        for(i=0;i<m;i++)
        {
            int cur_bal=sc.nextInt();
                        long cur_acc=sc.nextLong();

            int draft=sc.nextInt();
            current a1=new current(cur_acc,cur_bal);
           // current a2=new current(draft);
            a1.print(draft);
            //a2.hi();
        }
    }
}
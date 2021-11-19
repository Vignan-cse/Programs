import java.util.*;
class Main
{
    public static void main(String[]args)
    {
         int yr,anntuo,annsales;
         Scanner sc=new Scanner(System.in);
        yr=sc.nextInt();
            anntuo=sc.nextInt();
             annsales=sc.nextInt();
               int r;
         System.out.println("Year of establishment:"+yr);
        System.out.println("Annual turnover of the company:"+anntuo);
        System.out.println("Annual sales of the company:"+annsales);
        r=anntuo/annsales;
          if(r>1)
        System.out.println("profitability:high");
          else if(r>0.5&&r<1)
        System.out.println("profitability:medium");
        else
          System.out.println("profitability:low");
    }
}
      


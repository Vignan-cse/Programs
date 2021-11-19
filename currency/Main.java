import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        double pay=sc.nextDouble();
        sc.close();
        NumberFormat us=NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat in=NumberFormat.getCurrencyInstance(new Locale("en","in"));
        NumberFormat ch=NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat fr=NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String u=us.format(payment);
         String i=in.format(payment);
          String c=ch.format(payment);
           String f=fr.format(payment);
           System.out.println("US:"+u);
           System.out.println("INDIA:"+i);
           System.out.println("CHINA:"+c);
           System.out.println("FRANCE:"+f);
           
    }
}
import java.io.BufferedReader;
import java.io.InputStreamReader;
class rectangle
{
   private double l;
   private double b;
   public void setLen(double l)
   {
       this.l=l;
   }
   public double getLen()
   {
       return l;
   }
   public void setBre(double b)
   {
       this.b=b;
   }
   public double getBre()
   {
       return b;
   }
   public void area(double l,double b)
   {
       System.out.println("area is:"+(l*b));
   }
   public void perimeter(double l,double b)
   {
       System.out.println("perimeter is:"+(2*(l+b)));
   }
}
 class Main
{
    public static void main(String[]args)throws Exception
    {
        InputStreamReader ir=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(ir);
         double l=Double.parseDouble(br.readLine());
        double b=Double.parseDouble(br.readLine());
        rectangle r=new rectangle();
        r.area(l,b);
        r.perimeter(l,b);
    }
}
   

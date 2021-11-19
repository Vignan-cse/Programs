
import java.util.*;
import java.io.*;
class Rect
{
    private double l,b;
    //double area,per;
    Rect(double l,double b)
    {
        this.l=l;
        this.b=b;
    }
    public void area()
    {
        System.out.println("Area of rectangle = "+l*b);
    }
    public void per()
    {
        System.out.println("Perimeter of rectangle = "+2*(l+b));
    }
}
class Main
{
    public static void main(String args[])throws IOException
    {
        double a,b;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        a=Double.parseDouble(br.readLine());
        b=Double.parseDouble(br.readLine());
        Rect ob=new Rect(a,b);
        ob.area();
        ob.per();
    }
}
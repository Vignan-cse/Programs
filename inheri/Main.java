import java.util.*;
class shape
{
    double l,b,area;
    protected void calarea()
    {
        
    }
    protected void prinarea()
    {
        
    }
}
class triangle extends shape
{
    triangle(double l,double b)
    {
        this.l=l;
        this.b=b;
    }
    public void calarea()
    {
        area=(l*b)/2;
    }
    public void prinarea()
    {
        System.out.println("area"+area);
    }
}
class rectangle extends shape
{
   rectangle (int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    public void calarea()
    {
        area=l*b;
    }
    public void prinarea()
    {
        System.out.println("area"+area);
    }
}

class square extends shape
{
    square(int l)
    {
        this.l=l;
    }
    public void calarea()
    {
        area=l*l;
    }
    public void prinarea()
    {
        System.out.println("area"+area);
    }
}

class circle extends shape
{
    circle(int l)
    {
        this.l=l;
    }
    public void calarea()
    {
        area=3.14*l*l;
    }
    public void prinarea()
    {
        System.out.println("area"+area);
    }
}
public class Main
{
  public static void main(String[]args)
  {
     shape ob1=new triangle(1,2);
      shape ob2=new rectangle(1,2);
       shape ob3=new square(1);
        shape ob4=new circle(1);
        ob1.calarea();
        ob1.prinarea();
        ob2.calarea();
        ob2.prinarea();
        ob3.calarea();
        ob3.prinarea();
        ob4.calarea();
        ob4.prinarea();
        
  }
}

class box
{
    double l;
    double b;
    double h;
    box(double l,double b,double h)
    {
        this.l=l;
        this.b=b;
        this.h=h;
    }
}
class boxwet extends box
{
    double w;
    boxwet(double l,double b,double h,double w)
    {
        super(l,b,h);
        this.w=w;
    }
    public void volume()
    {
        double vol;
        vol=l*b*h;
        System.out.println("volume is:"+vol);
        System.out.println("weight is:"+w);
    }
}
public class Main
{
    public static void main(String[]args)
    {
        boxwet bx=new boxwet(12,13,14,23.5);
        bx.volume();
    }
}
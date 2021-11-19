import java.util.*;
class Rect
{
    int l,b;
    Rect(int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    void area()
    {
        System.out.println("Area "+l*b);
    }
    void perimeter()
    {
        System.out.println("perimeter"+2*(l+b));
    }
}
class Square extends Rect
{
    Square(int s)
    {
        super(s,s);
    }
}

class Main
{
    public static void main(String args[])
    {
        Rect obj1=new Rect(1,2);
        obj1.area();
        Square st=new Square(2);
        st.perimeter();
    }
}
        
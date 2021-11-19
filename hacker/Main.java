public class Main
{
    static int a[]=new int[10];
    static 
    {
        for(int i=0;i<a.length;i++)
        {
            a[i]=(int)(100*(Math.random());
        }
    }
    void print()
    {
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]+" ");
        }
    }
public static void main(String[]args)
{
    Main m1=new Main();
    m1.print();
    Main m2=new Main();
    m2.print();
}
}
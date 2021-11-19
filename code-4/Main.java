import java.util.*;
class pp
{
    void add(int a,int b)
    {
        System.out.println(+(a+b));
    }
    void add(int a,int b,int c)
    {
        System.out.println(+(a+b+c));
    }
    void add(String x,String y)
    {
        System.out.println((x+y));
    }
}
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        pp p=new pp();
        p.add(sc.nextInt(),sc.nextInt());
        p.add(sc.nextInt(),sc.nextInt(),sc.nextInt());
        sc.nextLine();
        String arr[]=sc.nextLine().split(" ");
        p.add(arr[0],arr[1]);
    }
}
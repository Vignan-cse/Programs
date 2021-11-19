class Morning extends Thread
{
    synchronized public void run()
    {
        try
        {
            int i=0;
            while(i<1)
            {
                sleep(1000);
                System.out.println("Good Morning");
                i++;
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Hello extends Thread
{
    synchronized public void run()
    {
        try{
            int i=0;
            while(i<1)
            {
                sleep(2000);
                System.out.println("hello");
                i++;
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Welcome extends Thread
{
    synchronized public void run()
    {
        try{
            int i=0;
            while(i<1)
            {
                sleep(3000);
                System.out.println("welcome");
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
 class Main
{
    public static void main(String[]args)
    {
        Morning m=new Morning();
        Hello h=new Hello();
        Welcome w=new Welcome();
        m.start();
        h.start();
        w.start();
    }
}
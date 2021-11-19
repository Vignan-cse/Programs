package threadappl;
class mythread extends Thread
{
    public void run()
    {
        System.out.println("hello from child thread");
    }
    public class threadappl{
        public static void main(String[]args)
        {
            System.out.println("hello from main thread");
            mythread m=new mythread();
            m.start();
        }
    }
}
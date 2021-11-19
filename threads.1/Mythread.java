package Threadappl;
class MyThread extends Thread
{
    public void run()
    {
        System.out.println("hello from child thread");
    }
    public class Threadappl{
        public static void main(String[]args)
        {
            System.out.println("hello from main thread");
            Mythread m=new Mythread();
            m.start();
        }
    }
}
class mythread implements Runnable
{
   public void run()
    {
        System.out.println("hellow orld");
    }
}
    public class Main
    {
        public static void main(String[]args)
        {
            System.out.println("how re u");
            mythread m=new mythread();
            Thread t=new Thread(m);
            t.start();
        }
        
    }
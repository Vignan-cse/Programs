class mythread implements Runnable
{
    public void run()
    {
        try
        {
            for(int i=0;i<5;i++)
            {
                System.out.println("thread is:"+i);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
    }
}
    public class Main
    {
        public static void main(String[]args)
        {
            try
            {
                for(int i=0;i<5;i++)
                {
                    System.out.println("thread is:"+i);
                  Thread.sleep(1000);
                }
            }
             catch(InterruptedException e)
             {
            System.out.println(e);
            }
             mythread m=new mythread();
             Thread t=new Thread(m);
              t.start();
        }
    }
    
        
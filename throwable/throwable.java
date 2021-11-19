public class throwable
{
    public void eligible(int age)
    {
    if(age>18)
    {
        System.out.println("we can vote");
    }
    else
    {
    throw new ArithmeticException("we cannot vote");
    }
    }
public static void main(String[]args)
  {
        throwable t=new throwable();
        try
        {
        t.eligible(13);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
  }
}

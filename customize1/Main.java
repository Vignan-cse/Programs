class InsufficientFundsException extends Exception
{
    InsufficientFundsException(String s)
    {
        super(s);
    }
}
public class customer
{
    public static void withdraw(int amount)throws InsufficientFundsException
    {
        int accb=16000;
         accb=accb-amount;
    }
    if(accb<amount)
    {
        throw new InsufficientFundsException("not enough enough funds");
    }
    else
    {
        System.out.println("check the money credited ");
    }
}
public static void main(String[]args)
{
    try
    {
       withdraw(2000); 
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
}


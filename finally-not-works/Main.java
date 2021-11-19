class Main
{
    public static void main(String[]args)
    {
        try
        {
            System.out.println("hello");
            System.exit(0);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            System.out.println("finally doesnot work when we call system.exit(0) is calleed in try block");
        }
    }
}
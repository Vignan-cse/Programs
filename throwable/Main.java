class Main
{
    void eligible(int age)
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
    Main n=new Main();
    n.eligible(13);
}

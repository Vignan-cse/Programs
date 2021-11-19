class Main
{
    public void dostuff()
    {
        int a=24/0;
    }
   public void domorestuff()
    {
        dostuff();
    }
   public void doextrastuff()
    {
        try{
            domorestuff();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    public static void main(String[]args)
    {
        Main m=new Main();
        doextrastuff();
    }
}

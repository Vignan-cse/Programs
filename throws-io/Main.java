import java.io.*;
class Main
{
    public void m1()throws IOException 
    {
        throw new IOException("misssion not ready");
    }
    public void m2()throws IOException//incase of checked exception we use throes io exception to overcome errors
    {
        m1();
    }
    public void m3()
    {
        try{
            m2();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    public static void main(String[]args)
    {
        Main m =new Main();
        m.m3();
    }
}
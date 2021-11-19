import java.io.*;
class Main
{
    void tym(int num)throws IOException,ClassNotFoundException
    {
        if(num==1)
        {
            throw new IOException("io occured");
        }
        else
        {
            throw ClassNotFoundException("not occured");
        }
    }
    public static void main(String[]args)
    {
        Main m=new Main();
        try{
        m.tym(10);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
    
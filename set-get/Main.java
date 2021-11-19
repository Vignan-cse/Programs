class person
{
    private int len;
    private int bre;
    public void setLen(int len)
    {
        this.len=len;
    }
    public int getLen(int len)
    {
        return len;
    }
     public void setBre(int bre)
    {
        this.bre=bre;
    }
    public int getBre(int bre)
    {
        return bre;
    }
}
class Main
{
    public static void main(String[]args)
    {
        person p=new person();
        p.setLen(10);
        p.setBre(20);
        System.out.println("length is:"+p.getLen());
        System.out.println("breadth is:"+p.getBre());
    }
}
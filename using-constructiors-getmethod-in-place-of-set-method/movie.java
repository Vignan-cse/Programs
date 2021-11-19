public class movie
{
    private String fname;
    public movie (String x)
    {
        fname=x;
    }
    public String getMovie()
    {
        return fname;
    }
    public void ret()
    {
        System.out.printf("my fav mv is : %s\n",getMovie());
    }
}
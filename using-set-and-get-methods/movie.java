public class movie
{
    private String fname;
    public void setMovie(String mvname)
    {
        fname=mvname;
    }
    public String getMovie()
    {
        return fname;
    }
    public void ret()
    {
        System.out.printf("my fav name is :%s",getMovie());
    }
}

import java.io.*;
class company
{
    int yr_est,ann_tuo,ann_sales;
    company(int yr_est,int ann_tuo,int ann_sales)
    {
    this.yr_est=yr_est;
    this.ann_tuo=ann_tuo;
    this.ann_sales=ann_sales;
    }
}
public void display(
    )
{
    int r=ann_tuo/ann_sales;
    if(r>1)
        System.out.println("profitability:high");
    else if(r>0.5&&r<1)
        System.out.println("profitabilit:medium");
    else
    System.out.println("profitability is:low");
}
public class Main
{
    public static void main(String[]args)throws IOException
    {
        InputStreamReader ir=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(ir);
        int a=Integer.parseInt(br.readLine());
        int b=Integer.parseInt(br.readLine());
        int c=Integer.parseInt(br.readLine());
        Driver d=new Driver();
        d.display(yr_est,ann_tuo,ann_sales);
        System.out.println("Year of establishment:"+yr_est);
        System.out.println("Annual turnover of the company:"+ann_tuo);
        System.out.println("Annual sales of the company:"+ann_sales);
    }
}
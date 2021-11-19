import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    
    {
        double am;
        double prin=50000;
        double rate=1.2;
        double int=prin*rate;
        for(int mon=1;mon<=12;mon++)
        {
            am=prin*Math.pow(1+rate,mon);
            System.out.println(mon+":"+am);
        }
    }
}
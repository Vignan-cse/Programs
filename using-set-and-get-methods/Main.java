import java.util.Scanner;
class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        movie m=new movie();

        System.out.println("enter mv name");
         String st=sc.nextLine();
        m.setMovie(st);
        m.ret();
        
        
    }
}
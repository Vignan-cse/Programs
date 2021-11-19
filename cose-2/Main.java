import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        ArrayList<String>list=new ArrayList<String>();
        Scanner sc=new Scanner(System.in);
        while(sc.hasNextLine())
        {
           list.add(sc.nextLine()); 
        }
        Collections.sort(list);
        System.out.println(list);
    }
}
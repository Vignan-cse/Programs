import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        LinkedList<String> s=new LinkedList<String>();
        s.add("asd");
        s.add("azs");
        s.add("asd");
        s.add("azs");
        System.out.println(s);
        Iterator<String>it=s.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        
    }
}
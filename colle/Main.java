import java.util.ArrayList;
import java.util.Iterator;
class Main
{
    public static void main(String[]args)
    {
        ArrayList<String>s=new ArrayList<String>();
        s.add("efferef");
        s.add("jwwc");
        s.add("efferef");
        s.add("jwwc");
        System.out.println(s);
        Iterator it=s.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        
    }
}

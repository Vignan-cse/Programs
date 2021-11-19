//adding built in funs to class
import java.util.ArrayList;
import java.util.Iterator;
class Main{
    public static void main(String[]args)
    {
        ArrayList<String>a=new ArrayList<String>();
        a.add("pp");
        a.add("bb");
        a.add("cc");
        System.out.println(a);
        for(String s:a)
        {
            System.out.println(s);
        }
        Iterator it=a.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        ArrayList<Integer>b=new ArrayList<Integer>();
        b.add(12);
        b.add(13);
        b.add(14);
        System.out.println(b);
        Iterator it2=b.iterator();
        while(it2.hasNext())
        {
            System.out.println(it2.next());
        }
        for(Integer i:b)
        {
            System.out.println(i);
        }
    }
}
import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        List<String>al=new ArrayList<>();
        al.add("sdcxj");
        al.add("wjdwd");
        al.add("wdjdcwc");
        for(int i=0;i<al.size();i++)
        {
        System.out.println(al.get(i));
        System.out.println(i);
        }
        ListIterator<String>ss=al.listIterator();
        while(ss.hasNext())
        {
            System.out.println(ss.next());
        }
        while(ss.hasPrevious())
        {
            System.out.println(ss.previous());
        }
    }
}
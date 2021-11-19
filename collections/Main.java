import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        List<String>a=new ArrayList<>();
        a.add("asd");
        a.add("qwe");
        a.add("wer");
        a.add("yui");
       // a.forEach(as->{
          //  System.out.println(as);
       // });
      // Iterator<String>it=a.iterator();
       Iterator it=a.iterator();
       it.forEachRemaining(s->{
           System.out.println(s);
           });
    }
}
       // for(String s:a)
       //for(int i=0;i<a.size();i++)
       //System.out.println(a.get(i));
       // System.out.println(i);
      // ListIterator<String>it=a.listIterator();
     // Iterator it=a.iterator();
      // while(it.hasNext())
       //{
        //   System.out.println(it.next());
       
import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        List<String> s=new ArrayList<>();
       // s.add("qwe");
       // s.add("ert");
       // s.add("jkl");
        //s.add("bnm");
       // s.add(2,"pp");
        List<String>ss=new ArrayList<>();
        ss.add("qwe");
        ss.add("ert");
        ss.add("bnm");
         ss.add("jkl");
         ss.add("Jkl");
         //ss.remove(0);
        // ss.remove("jkl");
         //ss.set(4,"priya");
        // ss.sort(String.CASE_INSENSITIVE_ORDER);
        ss.sort(Comparator.naturalOrder());
         
       // ss.addAll(1,s);
       // ss.clear();
       // for(String st:s)
        //System.out.println(st);
       // for(String w:ss)
        //System.out.println(s.equals(ss));
        //System.out.println(s.isEmpty());
        //System.out.println(ss.lastIndexOf("jkl"));
        //System.out.println(ss.contains("bnm"));
         //System.out.println(ss.indexOf("amma"));
         //System.out.println(ss);
         System.out.println(ss.subList(2,5));
        
    }
}

import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        List<String>st=new ArrayList<String>();
        st.add("ppp");
        st.add("ppp");
        st.add("pppp");
        st.add(2,"cherry");
        List<String>st2=new ArrayList<String>();
        st.add("vv");
        st.add("vvv");
        st2.clear();
        st.add("vvvvvv");
        st.add(2,"cp");
        st.addAll(1,st);
        for(String s:st)
        {
            System.out.println(s);
        }
        for(String x:st)
        {
            System.out.println(x);
        }
        System.out.println(st.equals(st2));
        System.out.println(st.isEmpty());
        
    }
}
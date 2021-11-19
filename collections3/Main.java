import java.util.*;
class stud
    {
        int rn;
        String name;
        String ar;
        stud(int rn,String name,String ar)
        {
            this.rn=rn;
            this.name=name;
            this.ar=ar;
        }
    }
    class Main
    {
        public static void main(String[]args)
        {
            List<stud>l=new ArrayList<>();
            stud s1=new stud(1,"qwe","hyd");
            stud s2= new stud(2,"asd","elr");
            stud s3=new stud(3,"bnm","ndd");
            l.add(s1);
             l.add(s2);
             l.add(s3);
             for(stud s:l)
             {
                 System.out.println(s.rn+" "+s.name+" "+s.ar);
             }
        }
    }
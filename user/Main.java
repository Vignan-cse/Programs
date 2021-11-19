import java.util.ArrayList;
class student
{
    public int rollno;
    public String name;
    public double mks;
    public student(int rollno,String name,double mks)
    {
        this.rollno=rollno;
        this.name=name;
        this.mks=mks;
    }
    public int getRollno()
    {
        return rollno;
    }
    public String getName()
    {
        return name;
    }
    public double getMks()
    {
        return mks;
    }
}
public static void main(String[]args)
{
    ArrayList<student>s=new ArrayList<student>();
   student s1=new student(1,"wer",78.45);
    student s2=new student(2,"lakshmi",98.4);
    student s3=new student(3,"wersd",78.56);
    student s4=new student(1,"wpoir",744.2);
    s.add(s1);
     s.add(s2);
      s.add(s3);
       s.add(s4);
       Iterator it=s.iterator();
       while(it.hasNext())
       {
           student s=(student)it.next();
           System.out.println(s.getRollno);
           System.out.println(s.getName);
           System.out.println(s.getMks);
       }
}


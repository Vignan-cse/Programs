class stu
{
    stu(int rno,String name)
    {
        this.rno=rno;
        this.name=name;
    }
}
public class Main
{
    public static void main(String[]args)
    {
        //declares array of integers
        stu[]arr;
        //allocating memory for 5 students
        arr=new stu[5];
        arr[0]=new stu(1,"abc");
        arr[1]=new stu(2,"def");
        arr[2]=new stu(3,"ass");
        arr[3]=new stu(4,"qwe");
        arr[4]=new stu(5,"bnm");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println("element at:" +i+ +arr[i].rno+ +arr[i].name);
        }
    }
}
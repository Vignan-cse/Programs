class dog
{
    String breed;
    String name;
    int age;
 public String getinfo()
 {
     return("the breed is:"+breed+ "the name is:"+name+ "the age is:"+age);
 }
}
 public static void main(String[]args)
 {
     dog lab=new dog();
     lab.breed="white";
     lab.name="pinky";
     lab.age=4;
     String details=lab.getinfo();
     System.out.println("the details of my dog are"+details);
 }
 

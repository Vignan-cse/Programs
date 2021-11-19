class one
  {
      int i;
      public void display(int i)
      {
          this.i=i;
          System.out.println("value of i is:"+i);
      }
  }  
  class two extends one{
      int j;
      public void display(int j)
      {
          super.display(25);
          this.j=j;
          System.out.println("value of j is:"+j);
      }
  }
  public class Main
      {
           public static void main (String[] args) {
               two t=new two();
               t.display(33);
      }
  }
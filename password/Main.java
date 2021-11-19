import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String user=sc.nextLine();
		String pass=sc.nextLine();
		if(user.equals("ppp")&&pass.equals("darlinmg"))
		{
			System.out.println("welcome ");
		}
		else
		{
			System.out.println("enter correct user and pass");
		}
	}
}
		


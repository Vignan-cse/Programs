import java.util.Scanner;
 class numeric {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);	
    int r=sc.nextInt();
    int cou=0;
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=i;i++)
			{
				cou=cou+1;
				System.out.print(cou+ " ");
			}
			System.out.println();
		}
	}
}
		
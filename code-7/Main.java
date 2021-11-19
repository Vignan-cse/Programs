import java.util.*;
class mul
{
    public static void main(String[]args)
    {
        int a,b,n,m,i=0,j=0,k=0;
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        m=sc.nextInt();
        n=sc.nextInt();
        int [][]m2=new int[m][n];
        int [][]m1=new int[a][b];
        int [][]m3=new int[a][n];
        if(b==m)
        {
            for(i=0;i<a;i++)
            {
                for(j=0;j<b;j++)
                {
                    m1[i][j]=sc.nextInt();
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    m2[i][j]=sc.nextInt();
                }
            }
            System.out.println("product of two matrices");
            for(i=0;i<a;i++)
            {
                for(j=0;j<n;j++)
                {
                    m3[i][j]=0;
                    for(k=0;k<b;k++)
                    {
                        m3[i][j]=m3[i][j]+m1[i][k]*m2[j][k];
                    }
                    System.out.print(m3[i][j]+" ");
                }
                System.out.println();
                
            }
        }
        else
        {
            System.out.println("max not possible");
        }
    }
}
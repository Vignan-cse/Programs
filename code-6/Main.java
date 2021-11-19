class Main
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        float anno,anns,yr;
        yr=sc.nextFloat();
        anno=sc.nextFloat();
        anns=sc.nextFloat();
        System.out.printf("yr of: %.0f\n",yr);
        System.out.printf("anno of: %.0f\n",anno);
        System.out.printf("anns of: %.0f\n",anns);
        float r;
        r=sc.nextFloat();
        r=anno/anns;
        if(r>1)
        {
            System.out.println("profi is high");
        }
        else if(r<1)
        {
            System.out.println("prog scc");
        }
        else
        {
            System.out.println("ajhcwdcwc");
        }
        
    }
}
class Main
{
    static int arr[]={23,45,12,89};
    public static void main(String[]args)
    {
        try
        {
         arr[7]=11;
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        for(int i:arr)
        {
            System.out.println(arr[i-1]);
        }
    }
}
    
       
import java.util.Calendar;
class main
{
    public static String findday(int month,int day,int year)
    {
        String []dayofweek={"SUNDAY","MONDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
        Calendar cal=Calendar.getInstance();
        cal.set(year,month-1,day);
        int p=cal.get(Calendar.DAY_OF_WEEK);
        return dayofweek[p-1];
        
    }
    public class Main
    {
        public static void main(String[]args)throws IOException
        {
            BufferedReader bf=new BufferedReader(new InputStreamReader(System.in()));
            BufferedWriter bw=new BufferedWriter(new FileWriter(System.getenv("OUTPATH")));
            String[] firstMultipleInput=bf.readLine().replaceAll("\\s+$", "").split(" ");
             int month = Integer.parseInt(firstMultipleInput[0]);

        int day = Integer.parseInt(firstMultipleInput[1]);

        int year = Integer.parseInt(firstMultipleInput[2]);

        String res = Result.findDay(month, day, year);

        bufferedWriter.write(res);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
        }
    }
}
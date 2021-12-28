class leap_common_year {
public static void main(String arg[]){
    int x = 1700;
    if(x%4==0)
    {
        if (x%100==0) 
        {
            if(x%400==0)
            {
               System.out.println("Year is leap year."); 
            }
            else
            {
               System.out.println("Year is common year.");
            }
        }
        else
        {
            System.out.println("Year is leap year.");
        }
    }
    else
    {
       System.out.println("Year is common year.");
    }
   }
}
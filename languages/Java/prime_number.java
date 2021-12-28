public class prime_number {
    public static void main(String arg[]){
        int n=10;
        int count = 0;
        if(n==0||n==1)
        {
            System.out.println(n+" is not a prime number.");
        }
        else
        {
            for(int i = 2;i<n;i++)
            {
                if(n%i==0)
                {
                    System.out.println(n+" is not a prime number.");
                    count = 1;
                    break;
                }
            }
        }
        if (count==0)
        {
            System.out.println(n+" is a prime number.");
        }

       }
    }


class factorial{
public static void main(String arg[]){
    int n = 3;
    int fact=1;
    for(int i = 1 ; i <= n; i++)
    {
        fact *= i;
    }
    System.out.println(fact);
   }
}
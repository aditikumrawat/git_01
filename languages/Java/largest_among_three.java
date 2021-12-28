class largest_among_three {
public static void main(String arg[]){
    int x = 10;
    int y = 20;
    int z = 30;
    if(z>x && z>y)
    {
        System.out.println("Z is greatest.");
    }
    else if(y>x && y>z)
    {
        System.out.println("Y is greatest.");
    }
    else
    {
        System.out.println("X is greatest.");
    }
   }
}
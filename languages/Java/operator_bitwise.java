class operator_bitwise{
public static void main(String arg[]){
    int a = 20;
    int b = 10;
    int c = 5;
    System.out.println(a<b & a++<c);//false + true = false;
    //a++ while checking the condition
    System.out.println(a);
   }
}
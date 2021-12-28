class swap_two_number{
public static void main(String arg[]){
    int num1=5,num2=6;
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    System.out.println(num1);
    System.out.println(num2);
   }
}
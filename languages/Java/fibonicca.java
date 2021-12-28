class Fibonacci{  
    public static void main(String args[])  
    {    
     int num=10,n1=0,n2=1,n3=0;    
     System.out.print(n1);
     System.out.print(n2);    
     int i;
     for(i=2;i<num;++i) 
     {    
      n3=n1+n2;    
      System.out.println(" "+n3);    
      n1=n2;    
      n2=n3;    
     }    
    }
}  
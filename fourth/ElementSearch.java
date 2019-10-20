
@ Alen George

\\ Code

package experiment2;
import java.util.Scanner;
public class Program1 {
    public static void main(String[] args) {     
         Scanner sc=new Scanner(System.in);   
        int[] ar=new int[10];        
        int count=0,item,s;
        System.out.println("Enter the Size :");
        s=sc.nextInt();
        System.out.println("Enter the number");
           for(int i=0;i<s;i++)    
            {         
                    ar[i]=sc.nextInt();      
            }
        System.out.println("Enter the element to be searched");       
        item=sc.nextInt();
            for(int i=0;i<s;i++)      
            {  
                if(ar[i]==item)   
                {  
                    count++;
                    System.out.println("Element found at pos : "+i);
                }
            }    
            if(count==0)
            {
                System.out.println("No Element found ");
            }
            else
            {
                System.out.println("Number of Occurences of requested element is "+count);
            }
    }
    
}

@ Judith Kurian

// CODE


import java.util.Scanner;
public class Palindrome {
    public static void pfun(int n)
    {
        int temp=0;
        int b=n;
        while(b>0)
        {
            int a= b%10;
            temp= temp*10+a;
            b=b/10;
        }
        if(temp==n)
            System.out.println("The number is a palindrome");
        else
            System.out.println("The number is not a palindrome.");
    }
    
    public static void main(String[] args)
    {
        Scanner pal= new Scanner(System.in);
        System.out.println("Enter the number");
        int n= pal.nextInt();
        pfun(n);
    }
}

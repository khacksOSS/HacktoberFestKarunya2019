@ Judith Kurian
// code

import java.util.Scanner;
public class BinaryNumber {
    public static void convert(int n)
    {
        int a[]= new int[20];
        int i=0;
        while(n>0)
        {
         int r=n%2;
         a[i]=r;
         n=n/2;
         i++;
        }
        System.out.println("The binary form is:");
        for(int j=i-1;j>=0;j--)
        {
            System.out.print(a[j]);
        }
    }
    public static void main(String[] args)
    {
        Scanner bin= new Scanner(System.in);
        System.out.println("Enter the number:");
        int a= bin.nextInt();
        convert(a); 
        System.out.println();
    }
}

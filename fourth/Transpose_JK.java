@ Judith Kurian

// CODE


package experiment.pkg2;
import java.util.Scanner;
 class Transpose {
    public static void main(String[] args)
    {
        Scanner trans= new Scanner(System.in);
        int array[][]= new int[3][3];  
        System.out.println("Enter the elemenets:");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                array[i][j]= trans.nextInt();
            }
        }
        System.out.println("The matrix is:");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.print(array[i][j]);
                System.out.print("  ");
            }
            System.out.println();
        }
        System.out.println("The transpose of the mateix is:");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               System.out.print(array[j][i]);
               System.out.print("  ");
            }
            System.out.println();
        }
    }
}

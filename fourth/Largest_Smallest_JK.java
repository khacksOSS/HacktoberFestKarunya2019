@ Judith Kurian

// CODE


package experiment.pkg2;
import java.util.Scanner;
public class LargestandSmallest {
    public static void main(String[] args)
    {
        Scanner ls= new Scanner(System.in);
        int array[][]=new int[4][4];
        System.out.println("Enter the elements");
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                array[i][j]= ls.nextInt();
            }
        }
      int smallest=array[0][0];
      int largest=array[0][0];
      for(int i=0;i<4;i++)
      {
          for(int j=0;j<4;j++)
          {
            if(array[i][j]<smallest)
                smallest=array[i][j];
            if(array[i][j]>largest)
                largest=array[i][j];
          }
      }
      for(int i=0;i<4;i++)
      {
          for(int j=0;j<4;j++)
          {
              System.out.print(array[i][j]);
              System.out.print("  ");
          }
          System.out.println();
      }
      System.out.println("The smallest element in the array is "+smallest);
      System.out.println("The largest element in the array is "+largest);
    }
}

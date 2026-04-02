import java.util.Scanner;

public class test2 extends Kapitel5 {
    public static void main(String[] args) {
        
    Scanner scanner = new Scanner(System.in);
     test2 ex = new test2();

   int[] numbers ={1,2,3,4,5,6};
   int size = 6;
    max(10,20);
    ex.sort(numbers,size);
     
    System.out.print("Enter the symbol to use: ");
    char user = scanner.nextLine().charAt(0);
    String x = " ";

    System.out.print("Enter the height of the tree: ");
    int height = scanner.nextInt();

    for(int i = 0; i <= height; i ++){
        
        for (int j = 0; j < (2 * i - 1); j++){
          System.out.print(user);
        }
        System.out.println();
    }




    scanner.close();
    }


  public static int max(int a, int b){
      if(a >= b){
        return a;
      }
      else if(b >= a){
        return b;
      }
      return 0;
  }

   
}

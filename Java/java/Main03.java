import java.util.Scanner;

public class Main03 {
    public static void main(String[] args){
       
      Scanner scanner = new Scanner(System.in);
      int choice;
      do {
      System.out.println("Choose between the following: ");
      System.out.println("1.Print even numbers");
      System.out.println("2.Print odd numbers");
      System.out.println("3.Prime numbers");
      System.out.println("4.Quit");
      choice = scanner.nextInt();
      int limit;

      switch (choice) {
        case 1: System.out.print("Enter the limit: ");
                 limit = scanner.nextInt();
                 System.out.print("Even numbers upto " + limit +  " are: ");
                 for(int i = 0;i<=limit;i++){
                    if(i % 2 == 0){
                        System.out.print(i +" ");
                    }
                 }
                 System.out.println();
            break;
        case 2: System.out.print("Enter the limit: ");
                 limit = scanner.nextInt();
                 System.out.print("Odd numbers upto " + limit +  " are: ");
                 for(int i = 0;i<=limit;i++){
                    if(i % 2 != 0){
                        System.out.print(i +" ");
                    }
                 }
                 System.out.println();
            break;
        case 3: System.out.print("Enter the limit: ");
                 limit = scanner.nextInt();
                System.out.print("Prime numbers upto " + limit +  " are: ");
                for (int num = 2; num <= limit; num++) {
                 int count = 0;

               // Count how many numbers divide 'num' exactly
               for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    count++;
                  }
              }
              // Prime numbers have exactly 2 divisors
              if (count == 2) {
                System.out.print(num + " ");
              }
          }
            System.out.println();
            break;
        case 4: System.out.println("Good bye !");
            break;
      
        default: System.out.println("Invalid Input !");
            break;
      }
      } while (choice != 4);

      System.out.print("Enter a limit: ");
      int lim = scanner.nextInt();
      
      System.out.print("Prime numbers upto " + lim + " are: ");
      for(int i = 0;i<=lim;i++){
        if(isEven(i)){
            System.out.print(i + " ");
        }
      }
      
      scanner.close();

    }
    static boolean isEven(int num){
        return num % 2 == 0;
    }
    
}

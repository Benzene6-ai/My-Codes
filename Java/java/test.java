import java.util.Scanner;

public class test {
    public static void main(String[] args){
       Scanner scanner = new Scanner(System.in);
       boolean running = true;

       while(running){
       System.out.print("What will you like to do ?\n");
       System.out.print("1.List Even numbers\n");
       System.out.print("2.List Odd numbers\n");
       System.out.print("3.List Prime numbers\n");
       System.out.print("4.Exit ");
       
       int choice = scanner.nextInt();
       int limit;
       switch(choice){
         case 1: System.out.print("Enter the limit: ");
                  limit = scanner.nextInt();
                 System.out.println("Even numbers upto " + limit + " are: ");
                 IsEven(limit);
                 break;
         case 2: System.out.print("Enter the limit: ");
                  limit = scanner.nextInt();
                 System.out.println("Odd numbers upto " + limit + " are: ");
                 IsOdd(limit);
                 break;
         case 3: System.out.print("Enter the limit: ");
                  limit = scanner.nextInt();
                 System.out.println("Prime numbers upto " + limit + " are: ");
                 IsPrime(limit);
                 break;
         case 4: System.out.println("Goodbye");
                 running = false;
                 break;
         case 5: System.out.println("Invalid input!!");
       }
       }
      
       scanner.close();
    }

    public static void IsEven(int lim){
      for(int i = 0; i <= lim; i++){
        if(i % 2 == 0){
         System.out.print(i + " ");
        }
      }
      System.out.println();
    }

    public static void IsOdd(int lim){
      for(int i = 0; i <= lim; i++){
        if(i % 2 != 0){
         System.out.print(i + " ");
        }
      }
      System.out.println();
    }

    public static void IsPrime(int lim){
      
      for(int num = 2; num <= lim; num++){
         int count = 0;
         for(int i = 1; i<=num; i ++){
            if(num % i == 0){
            count++;
        }
         }
        if(count == 2){
         System.out.print(num + " ");
        }
      }
    }
    
}

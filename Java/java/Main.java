import java.util.Scanner; //for user input

public class Main {// The class name must be the same as the file name(Main = Main)
    public static void main(String[] args){
        System.out.println("Hello world");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            System.out.print("*");
         }
         System.out.println();
        }
        Scanner scanner = new Scanner(System.in);//Create an object that will take care of user input
        System.out.println("What's your name ?");// "println" adds a new line character after printing. "print" does not
        String name = scanner.nextLine();//sacanner method to read input string. ".next" can also be used but it does read wide spaces
        System.out.println("Hello " + name);
        
        if(name.equals("Michel")){//.equals("Object"), is used to compare strings.
         System.out.println("You are 119 years Old");
        } else {
            System.out.println("How old are you ?");
            int age = scanner.nextInt();
            System.out.println("You are " + age + " years old");
        }
         System.out.println();
         System.out.println("*****Welcome to the Mini Calculator*****");
         boolean bool = false;
         do {
             System.out.println("What would you like to do ?\n 1.Add numbers?\n 2.Subtract numbers?\n 3.Multiply numbers ?\n 4.Divide numbers?\n 5.Exit?\n");
          int choice = scanner.nextInt();//".nextInt()" is used to read input integers. similary boolean or floating variables and characters will have a similar structure
          if(choice == 1){
            System.out.println("Enter the first number: ");
             int num1 = scanner.nextInt();
            System.out.println("Enter the second number: ");
            int num2 = scanner.nextInt();
            int Sum = num1 + num2;
            System.out.println("The sum of the two numbers is: " + Sum);
          } else if(choice == 2){
            System.out.println("Enter the first number: ");
             int num1 = scanner.nextInt();
            System.out.println("Enter the second number: ");
            int num2 = scanner.nextInt();
            int difference = num1 - num2;
            System.out.println("The difference of the two numbers is: " + difference);
          } else if(choice == 3){
            System.out.println("Enter the first number: ");
             int num1 = scanner.nextInt();
            System.out.println("Enter the second number: ");
            int num2 = scanner.nextInt();
            int product = num1 * num2;
            System.out.println("The product of the two numbers is: " + product);
          } else if(choice == 4){
            System.out.println("Enter the first number: ");
             int num1 = scanner.nextInt();
            System.out.println("Enter the second number: ");
            int num2 = scanner.nextInt();
            int division = num1 / num2;
            System.out.println("The division of the two numbers is: " + division);
          }else if(choice == 5){
            bool = true;
            System.out.println("Goodbye"); 
          }else{
            System.out.println("Invalid input");
          }
         } while (bool == false);
        scanner.close();//always close the scanner at the end of your code
    }
}
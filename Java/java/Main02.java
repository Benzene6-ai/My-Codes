import java.util.Scanner;

public class Main02{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double A;
        double B;
        double C;
        System.out.print("Enter the side B: ");
        B = scanner.nextDouble();
        System.out.print("Enter the side C: ");
        C = scanner.nextDouble();
        
        A = Math.sqrt(Math.pow(B,2) + Math.pow(C,2));//Math class. Its methods can be accessed with "."
        System.out.printf("The Hypotheneus is: %.2f cm^2",A);//printf for doubles. Helps to precise the answer(%.2f for two significant figures)
        
        char op;
        int num1;
        int num2;
        int total;

        System.out.println("***Welcome to the Mini Calculator***");
        System.out.println();
        System.out.print("Choose between the following operations: '+','-','*', or '/': ");
        op = scanner.next().charAt(0);//.next() is used to read single characters and .next().charAt() for charaters like a plus sign
        System.out.print("Enter the first number: ");
        num1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        num2 = scanner.nextInt();

        switch(op){// a switch is used to replace many if statements
            case '+':  total = num1 + num2;
                       System.out.println("The sum is: " + total);
                       break;

            case '-': total = num1 - num2;
                       System.out.println("The difference is: " + total);
                       break;

            case '*': total = num1 * num2;
                       System.out.println("The product is: " + total);
                       break;

            case '/':  if(num2 == 0){
                       System.out.println("Can't be zero!");
                    }else{
                       total = num1 / num2;
                       System.out.println("The division is: " + total);}
                       break;

            default: System.out.println("Invalid Input");
                     break;

        }

        scanner.close();

    }
}
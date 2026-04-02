import java.util.Scanner;

public class Main04 {
    static double balance = 0;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        System.out.println("*****WELCOME TO THE COMMERZ BANK*****");
        do {
        System.out.println("What would you like to do ?");
        System.out.println("1.Deposit Money");
        System.out.println("2.Withdraw Money");
        System.out.println("3.Show Balance");
        System.out.println("4.Exit");
         choice = scanner.nextInt();
        double amount;

        switch (choice) {
            case 1: System.out.print("Enter Amount to be deposited: ");
                     amount = scanner.nextDouble();
                    makeDeposit(amount);
                

                break;
            
            case 2: System.out.print("Enter Amount to be withdrwed: ");
                     amount = scanner.nextDouble();
                    withdrawMoney(amount);
                    
                break;
            case 3: System.out.println(" Your Balance is: " + showBalance() + "$");

                break;
            case 4: System.out.println();
                    System.out.println("*****GoodBye. Thanks for visiting*****");
                    break;
            default: System.out.println("Invalid Input");
                break;
        }
        } while (choice != 4);

        scanner.close();
        
    }
    static double showBalance(){
        return balance;

    }
    static void makeDeposit(double amount){
        if(amount < 0){
            System.out.println("You can not deposit a negatif Amount");
            System.out.println("Your Balance is: " + showBalance() + "$");
        }else{
            balance += amount;
            System.out.println("Successful Deposit of " + amount + "$. Your new balance is: " + showBalance() + "$");
        }
    }
    static void withdrawMoney(double amount){
        if(amount < 0){
           System.out.println("You can not withdraw a negatif Amount"); 
           System.out.println("Your Balance is: " + showBalance() + "$");
        }
        else if(amount > balance){
            System.out.println("Insufficient funds");
            System.out.println("Your Balance is: " + showBalance() + "$");
        } 
        else{
           balance -= amount;
           System.out.println("Successful withdrawal of " + amount + "$. Your new balance is: " + showBalance() + "$");
                
        }
       
    }
    
}

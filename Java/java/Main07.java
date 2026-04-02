import java.util.Random;
import java.util.Scanner;

public class Main07 {
     static  Scanner scanner = new Scanner(System.in);
     static char computer;
     static char Userchoice;
     static boolean isRunning = true;
     static int count = 0;
     static boolean UserisValid;
    public static void main(String[] args) {
      
     System.out.println("*************************************");
     System.out.println("*     ROCK,PAPER,SCISCORS GAME      *");
     System.out.println("*************************************");
     System.out.println();
       while(isRunning){
        getUserchoice();
        getComputerchoice();
        showWinner();
       }

    System.out.println("You won after: " + count + " trials");
    }

    static void getUserchoice(){
        System.out.println("Choose between the following: ");
        System.out.print("'R' for Rock,'P' for Paper or S' for Sciscors: " );
         Userchoice = scanner.nextLine().charAt(0);
         if(Userchoice == 'R' || Userchoice == 'r'){
            UserisValid = true;
            Userchoice = 'R';
            System.out.print("\nYou choosed: " + Userchoice);
         }
         else if(Userchoice == 'P' || Userchoice == 'p'){
           UserisValid = true;
            Userchoice = 'P';
            System.out.print("\nYou choosed: " + Userchoice);
         }
         else if(Userchoice == 'S' || Userchoice == 's'){
            UserisValid = true;
            Userchoice = 'S';
            System.out.print("\nYou choosed: " + Userchoice);
         }
        else{
            UserisValid = false;
            System.out.println("Invalid input !!");
            System.out.println();
        }
        
    }
    static void getComputerchoice(){
        Random random = new Random();
    
        if(UserisValid){
           int number = random.nextInt(1,4);
        switch (number) {
            case 1: computer = 'R';
                    System.out.println("\nThe computer choosed: " + computer);
                
                break;
            case 2: computer = 'P';
                    System.out.println("\nThe computer choosed: " + computer);
                
                break;
            case 3: computer = 'S';
                    System.out.println("\nThe computer choosed: " + computer);
                
                break;
            default:
                break;
        }
        }
       
    }
    static void showWinner(){
         
        if((computer == 'R' && Userchoice == 'R')){
            count ++;
            System.out.println("It's a tie !!");
            System.out.println();
        }
        else if((computer == 'R' && Userchoice == 'P')){
            isRunning = false;
            System.out.println("Paper takes Rock, you win !!");
            System.out.println();
        }
        else if((computer == 'R' && Userchoice == 'S')){
            count++;
            System.out.println("Rock takes sciscors. You loose !!");
            System.out.println();
        }

        else if((computer == 'P' && Userchoice == 'R')){
            count ++;
            System.out.println("Paper takes Rock, you loose !!");
            System.out.println();
        }
        else if((computer == 'P' && Userchoice == 'P')){
            count ++;
            System.out.println("It's a tie !!");
            System.out.println();
        }
        else if((computer == 'P' && Userchoice == 'S')){
            isRunning = false;
            System.out.println("Sciscors takes Paper. You win !!");
            System.out.println();
        }

        else if(computer == 'S' && Userchoice == 'R' ){
            isRunning = false;
            System.out.println("Rock takes sciscors. You win !!");
            System.out.println();
        }
        else if(computer == 'S' && Userchoice == 'P'){
            count ++;
            System.out.println("Sciscors takes Paper. You loose !!");
            System.out.println();
        }
        else if(computer == 'S' && Userchoice == 'S'){
            count ++;
            System.out.println("It's a tie !!");
            System.out.println();
        }

    }
  
}
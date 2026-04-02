import java.util.Random;//libary for random nummbers
import java.util.Scanner;
public class Main01 {//class name must be the same as the file name
    public static void main(String[] args){
        Random random = new Random();//creating the random object
        Scanner scanner = new Scanner(System.in);
        int number = 1;
        number = number *2;
        number = random.nextInt(1,101);//the numbers within the brases are the bounds. the first number is inclusive and the second number is exclusive
        int choice;                                 //if no bound are entered, the numbers genreted will be too large 
        int tries = 0;                                                                                
        //System.out.println("****Welcome to the number guessing Game****");
        //System.out.println();
        
        long k = 17;
        double n = 48.3;
        System.out.println(k>=n);

        do {
        System.out.print("Guess a number between 1 and 100: ");
         choice = scanner.nextInt();
         tries++;

        if(choice > 100 | choice < 1){
            System.out.println("You are out of bounds !");
        } else if(choice < number){
            System.out.println("You are too low !");
        } else if(choice > number){
            System.out.println("You are too high !"); 
        } else{
            System.out.println("Congrats, you got the number !!");
            System.out.println("Number of trials: " + tries);
        }
        } while (choice != number);
        
       scanner.close();
 }
}

import java.util.Arrays;// import methods for arrays
import java.util.Scanner;
public class Main05 {

    static void Isprime(){
        Scanner scanner = new Scanner(System.in);

        System.out.print("How many prime numbers do you want ?: ");
        int n = scanner.nextInt();

        System.out.print("Give the starting limit: ");
        int threshold = scanner.nextInt();
 
        int num = threshold;
        int countIt = 0;
        System.out.println();
        
        System.out.print(n + " prime numbers from " + threshold + " are: " );
        while (countIt < n){
            int divisors = 0;
            
            for(int i = 1; i <= num; i++){
                if(num % i == 0){
                    divisors ++;
                }
                
            }
            if(divisors == 2){
                    System.out.print(num + " ");
                    countIt++;
                }
            num++;
        } 
        System.out.println();

    }
    static void prime(int limit){
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
 }
    static double add(double... number){
        double sum = 0;
        for(double num: number){
            sum += num;
        }
        return sum;
    }
    static double product(double... number){
        double product = 1;
        for(double num: number){
            product *= num;
        }
        return product;
    }
    public static void main(String[] args) {

        prime(30);;
        Isprime();
        
        System.out.println(add(1,2,6,100,37));
        System.out.println(product(1,2,6,100,37));

        String[] foods = {"Pizza","Macdo","Beans"};
            Arrays.sort(foods);
        for(String food : foods){
            System.out.print(food + " ");
        }
        System.out.println();

        String[][] vegetables = {{"Tomato"," Cumcumber"},
                                 {"Orange","Pineaple"},
                                 {"Coconut","Apple"},
                                 {"Onion","Peanut"}};
        for(String[] vegetable: vegetables){
            for(String fruit : vegetable){
                System.out.print(fruit + " ");
            }
            System.out.println();
        }

        for(String vegtable : vegetables[0]){
             System.out.print(vegtable);
        }
    }
    
    
}

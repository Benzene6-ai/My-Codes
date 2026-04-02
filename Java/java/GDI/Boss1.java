import java.util.Scanner;

public class Boss1 {
    
    static void Isprime(){
        Scanner scanner = new Scanner(System.in);

        System.out.print("How many prime numbers do you want ?: ");
        int n = scanner.nextInt();

        System.out.print("Give the starting limit: ");
        int threshold = scanner.nextInt();
 
        int num = threshold;//start
        int countIt = 0;//count each time a prime is founded and printed
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
        System.out.println(countIt);

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

 public static void main(String[] args) {
    Isprime();
 }

}

import java.util.Arrays;
public class Main09 {
    public static void main(String[] args) {
      
       // System.out.println(Factorial(10));
          //Fact(10);

          //sort();

          System.out.println(binStringToDecIter("11010010"));
    }

    public static int binStringToDecIter(String binaryNumber){
            int start=0;
            for(int i=0;i<binaryNumber.length();i++){
                int bit = binaryNumber.charAt(i) - '0';
              start += bit * Math.pow(2,binaryNumber.length()-i-1); 
            }
            return start;
        }

    public static int Factorial(int n){
        return Factorialhelper(n, 1);
    }
    private static int Factorialhelper(int n,int acc){
        if(n == 0){
            return acc;
        }
        else{
            return Factorialhelper(n - 1,n * acc);
        }
    }

    public static void Fact(int n){
        int result = 1;
        for(int i = n; i >= 1; i--){
            result *= i;
            
        }
        System.out.println(n +"!" + " is: " + result);
    }

     public static void sort () {
        int[] numbers = new int[]{10,4,8,9,6,7,2,5,3,1};
        Arrays.sort(numbers);
        for(int i = 0; i <=  numbers.length -1 ;i++){
                System.out.print(numbers[i] + " ");
            
        }
    }

}

import java.util.Scanner;
import java.util.Vector;
   
public class Kapitel5 {
   static boolean isPali = false;
public static void main(String[] args) {

   Scanner scanner = new Scanner(System.in);
   Vector< Integer> vector = new Vector<>();
    int a = 3,
     b = 2,
     y = 28;
    double Area;

    Kapitel5 ex = new Kapitel5();

    while(!isPali){
     ex.IsPalindrome(scanner);
   }

    System.out.print("Enter the number of elements to save: ");
    int size = scanner.nextInt();

    int[] numbers = new int[size];
    vector.add(5);

    for(int num:vector){
      System.out.println(num);
    }

    for(int i = 0; i<size; i ++){
      System.out.print("Enter num"+ (i+1) + ": ");
      numbers[i] = scanner.nextInt();
    }
    ex.sort(numbers, size);

    System.out.println("YOU entered the numbers: ");
    for(int num:numbers){
      System.out.print(num + " ");
    }
    System.out.println();

   Area = (a*b*(Math.sin(y)))/2;

   //System.out.println("Der Flächeninhalt des Dreiecks ist: " + Area);

   
    scanner.close();
   }

public   boolean IsPalindrome(Scanner scanner){
    
   System.out.println("*****PALINDORME CHECK*****\n");
   System.out.print("Enter your word: ");
  String name = scanner.nextLine();
  

  for(int i = 0; i <=name.length() - 1; i++){

    if(name.charAt(i) != name.charAt(name.length() - 1 - i)){
       System.out.println(name + " is not a Palindrome");
       return false;
  }
 }
    System.out.println(name + " is a Palindrome");
    isPali = true;
    return true;
    
} 

public  void sort(int[] array,int size){
  int temp;
  for(int i = 0; i <size-1;i++){ //controls the number of passes of the entire array
    for(int j = 0;j <size-i-1;j++){ //after the first pass, we don't need to check the last element, because it is already in its correct place.After the second pass, the two largest elements are sorted, and so on.
        if(array[j] > array[j+1]){
            temp = array[j];
            array[j] =  array[j+1];
            array[j+1] = temp;
        }
    }
  }

}
} 

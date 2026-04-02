import java.util.Scanner;

public class test3{
    public static void main(String[] args) {
     /*  Scanner scanner = new Scanner(System.in);
    int choice;
    int choice2;

      System.out.println("###What is your current HP Level ?(max 200)#####");
      choice = scanner.nextInt();

      if(choice > 200){
         choice = 200;
         System.out.println("[####"+choice+"HP####]");
      }
      else if(choice <=0){
        choice = 0;
         System.out.println("[####"+choice+"HP####]");
      }
      else{
         System.out.println("[####"+choice+"HP####]");
         System.out.println();}

         System.out.println("How much dammage will you like to make to your HP? ");
         choice2 = scanner.nextInt();
         if(choice2>choice || choice2<0){
           choice = 0;
         System.out.println("[####"+choice+"HP####]");
         }
         else{
            choice-=choice2;
           System.out.println("[####"+choice+"HP####]"); 
         }
         scanner.close();
      }*/
     int hp = 50;
     System.out.print("[");
     for(int i =0; i<=hp/5; i++){
        if(i==hp/10) {
         System.out.print(hp+"HP");
      }
        else{
         System.out.print("=");
        }

     }
     System.out.print("]");
     System.out.println();

     int dammage = 33;
     int HP = hp;
     HP-=dammage;
     System.out.print("[");
     for(int i =0; i<=hp/5; i++){
        if(i==hp/10) {
         System.out.print(HP+"HP");
      }
        else  if(HP==0||i>HP/5){
            System.out.print(" ");
         }
        else{
         System.out.print("=");
        
        }

     }
     System.out.print("]");

      
    }
    

   }


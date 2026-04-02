import java.util.Scanner;
public class Main06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String choice;
        int score = 0;

        String[] Questions = {"1.Who is the president of Cameroun ?",
                              "2.Who is the president of france ?",
                            "3.Who is the president of the Usa ?",
                             "4.Who is the President of China ?",
                            "5.Who is the Councelor of Germany ?"};


        String[][] options ={{"A.Kamto","B.Biya","C.Ahidjo"},
                             {"A.LePen","B.Macron","C.DeGaule"},
                             {"A.Beiden","B.Haris","C.Trump"},
                             {"A.Xi","B.Sung","C.Jinwung"},
                             {"A.Weidel","B.Merz","C.Sholz"}};

        String[] answers = {"A","B","C","A","B"};

        for (int i = 0; i < Questions.length; i++) {
            System.out.println(Questions[i]);
            for (String opt : options[i]) {
                System.out.print(opt + " ");
            }
            System.out.print("\nYour choice: ");
            choice = scanner.nextLine().toUpperCase();

            if (choice.equals(answers[i])) {
                System.out.println("Correct!\n");
                score++;
            } else {
                System.out.println("Wrong! The correct answer was: " + answers[i] + "\n");
            }
            System.out.println("***********************");
        }

        System.out.println("Your final score: " + score + "/" + Questions.length);
    
        scanner.close();
        
    }
    
}

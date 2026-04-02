public class Boss2 {

 public static void print(double[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            print(matrix[i]);   // Aufruf der überladenen Hilfsmethode
        }
    }
    // --- Überladene Hilfsmethode zum Ausgeben eines 1D-double-Arrays ---
 public static void print(double[] row) {
        for (int j = 0; j < row.length; j++) {
            System.out.print(row[j]);
            if (j < row.length - 1) {
                System.out.print(" ");  // Leerzeichen zwischen Spalten
            }
        }
        System.out.println();  // Zeilenumbruch am Ende der Zeile
    }

 public static  void multiply(double[][] matrix,double factor){

    for(double[] mat: matrix){
        for(double num: mat){
            num*=factor;
            System.out.print(num + " ");
        }
        System.out.println();
    }
}

 public static void computeRowMean(double[][] matrix) {
    double start1 = 0.0;  
    double start2 = 0.0;  
    int n = matrix.length;

    for (int i = 0; i < n; i++) {
        start1 += matrix[i][i];
    }
    double mean1 = start1 / n;

    for (int j = 0; j < n; j++) {
        start2 += matrix[j][n - 1 - j];
    }
    double mean2 = start2 / n;

    double[] means = { mean1, mean2 };

    System.out.print("(");
    for (int i = 0; i < means.length; i++) {
        System.out.print(means[i]);
        if (i < means.length - 1) {
            System.out.print(", ");
        }
    }
     System.out.print(")");
 }
  
 public static void linearize(double[][] matrix,boolean bool){
      if(!bool){
          
          boolean first = true;
          System.out.print("(");
          
          for(double[] mat:matrix){
         for(double num:mat){
             if(!first){
                 System.out.print(", ");}
             
               System.out.print(num);
                 first = false;      
         }
          }
          System.out.print(")");
      }
      
      else{
          boolean first = true;
          System.out.print("(");
          
           int cols = matrix[0].length;
           int rows = matrix.length;
          
          for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                if(!first){
                   System.out.print(", "); 
                }
                System.out.print(matrix[i][j]);
                first = false;
            }
        }
          System.out.print(")");
              }
      System.out.println();
     
  }

public static void main(String[] args){
        double[][] A ={{1.8,2.1,3.0,4.9},
                        {1.5,2.5,3.0,4.2},
                        {1.6,2.5,3.7,4.4},
                        {1.0,2.0,3.0,4.0}};
        print(A);
         System.out.println();
        multiply(A,10);
         System.out.println();
        computeRowMean(A);
         System.out.println();
          System.out.println();
        linearize(A,false);
         System.out.println();
        linearize(A,true);
  }

}

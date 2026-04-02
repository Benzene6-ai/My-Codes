public class BOss22 {
    public static void main(String[] args) {
        double[][] A = {{1.0,2.0,3.0},
                        {4.0,5.0,6.0},
                        {7.0,8.0,9.0} };
            print(A);
            System.out.println();
            multiply(A, 5.0);
            System.out.println();
            computeRowMean(A);
            System.out.println();
            linearize(A,false);
            System.out.println();
            linearize(A,true);
           
    }
    
    public static void print(double[][] matrix){
        for(int i = 0; i < matrix.length; i++){
             print(matrix[i]);
            }
      
    }

    public static void print(double[] OneD){
        for(double num: OneD){
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void multiply(double[][] matrix,double multiple){
        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[i].length; j++){
                matrix[i][j]*=multiple;
            }
        }
        print(matrix);
    }

    public static void computeRowMean(double[][] matrix){
        double[] A = new double[matrix.length];
         double n = matrix.length;
      
        for(int i = 0; i < matrix.length; i++){
            double rowmean = 0.0;
            for(int j = 0; j < matrix[i].length; j++){
               rowmean += matrix[i][j];
            }
            A[i] = rowmean /= n;;
        }

       System.out.print("(");
        for (int i = 0; i < A.length; i++) {
            System.out.print(A[i]);
            if (i != A.length - 1) { 
                System.out.print(","); 
            }
        }
        System.out.print(")");
    }

    public static void linearize(double[][] matrix,boolean bool){
        
        if(!bool){
             System.out.print("(");
             for (int i = 0; i < matrix.length; i++) {
                for (int j = 0; j < matrix[i].length; j++) {
                      System.out.print(matrix[i][j]);
                      // print comma only if not the last element
                     if (i != matrix.length - 1 || j != matrix[i].length - 1) {
                         System.out.print(",");
                     }
                }
             }
             System.out.println(")");
        }

        if(bool){
             System.out.print("(");
             for (int i = 0; i < matrix.length; i++) {
                for (int j = 0; j < matrix[i].length; j++) {
                      System.out.print(matrix[j][i]);
                      // print comma only if not the last element
                     if (i != matrix.length - 1 || j != matrix[i].length - 1) {
                         System.out.print(",");
                     }
                }
             }
             System.out.println(")");
        }
    }

}

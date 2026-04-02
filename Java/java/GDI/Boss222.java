public class Boss222 {
    public static void main(String[] args) {
          double[][] A ={{1.8,2.1,3.0,4.9},
                        {1.5,2.5,3.0,4.2},
                        {1.6,2.5,3.7,4.4},
                        {1.0,2.0,3.0,4.0}};
        print(A);
        System.out.println();
        print(multiply(A,10.0));
        System.out.println();
        print(computeRowMean(A));
        System.out.println();
        print(linearize(A,true));
        System.out.println();
        print(linearize(A,false));
        System.out.println();
        print(computeColumnMean(A));
        
    }
    public static void print(double[][] matrix){
        for(int i= 0; i < matrix.length;i++){
            print(matrix[i]);
            }
        }

    public static void print(double[] row){
        for (double var : row) {
            System.out.print(var + " ");
        }
        System.out.println();
        }
    public static double[][] multiply(double[][] matrix,double factor){
        double[][] erg = new double[matrix.length][matrix.length];
        for (int i = 0; i<matrix.length;i++){
            for(int j = 0; j<matrix[i].length;j++){
                matrix[i][j]*=factor;
                erg[i][j]=matrix[i][j];
            }
        }
 
        return erg;
     }

    public static double[] computeRowMean(double[][] matrix){
        double[] erg = new double[matrix.length];
        double sum = 0.0;
        for (int i = 0; i<matrix.length;i++){
            for(int j = 0; j<matrix[i].length;j++){
                sum+=matrix[i][j];
                
            }
           erg[i] = sum/matrix.length;
        }

      return erg;
     }

    public static double[] linearize(double[][] matrix, boolean bool){
       double[] erg = new double[matrix.length*matrix.length];
       int k = 0;
       if(bool){
            for (int i = 0; i<matrix.length;i++){
                for(int j = 0; j<matrix[i].length;j++){
                   erg[k++] =  matrix[i][j];; 
                }
            
            }
        return erg;
       }
       else{
           for (int i = 0; i<matrix.length;i++){
                for(int j = 0; j<matrix[i].length;j++){
                    erg[k++] = matrix[j][i];  
                }
           
            }
        return erg;
       }
      
     }
    public static double[] computeColumnMean(double[][] matrix){
        double[] erg = new double[matrix.length];
        double sum = 0.0;
        for (int i = 0; i<matrix.length;i++){
            for(int j = 0; j<matrix[i].length;j++){
                sum+=matrix[j][i];
                
            }
           erg[i] = sum/matrix.length;
        }

      return erg;
     }
    
}
   
    


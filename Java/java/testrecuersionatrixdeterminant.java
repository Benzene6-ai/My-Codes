public class testrecuersionatrixdeterminant {

    // Method to calculate determinant recursively
    public static int determinant(int[][] matrix, int n) {
        int det = 0;

        // Base case: 1x1 matrix
        if (n == 1) {
            return matrix[0][0];
        }

        // Base case: 2x2 matrix
        if (n == 2) {
            return (matrix[0][0] * matrix[1][1])
                 - (matrix[0][1] * matrix[1][0]);
        }

        // Temporary matrix to store cofactors
        int[][] temp = new int[n][n];

        int sign = 1; // sign alternates (+ - + -)

        // Expand along first row
        for (int col = 0; col < n; col++) {
            getCofactor(matrix, temp, 0, col, n);
            det += sign * matrix[0][col] * determinant(temp, n - 1);
            sign = -sign;
        }

        return det;
    }

    // Method to get cofactor matrix
    public static void getCofactor(int[][] matrix, int[][] temp,
                                   int row, int col, int n) {
        int i = 0, j = 0;

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (r != row && c != col) {
                    temp[i][j++] = matrix[r][c];
                    if (j == n - 1) {
                        j = 0;
                        i++;
                    }
                }
            }
        }
    }

    // Driver code
    public static void main(String[] args) {
        int[][] matrix = {
            {3, 1, 2,3,-2},
            {-4, 2, 1,-4,-2},
            {0, -3, 0,0,1},
            {1,0,-1,1,2},
            {2,1,-2,2,2}          
            };

        int n = matrix.length;
        System.out.println("Determinant = " + determinant(matrix, n));
    }
}


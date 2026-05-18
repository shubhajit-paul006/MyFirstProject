/*WAP in Java to create and initialize a 3x3 2-D integer array. Calculate and print the sum of all elements, the sum
of each row, and the sum of each column. */
import java.util.Scanner;
public class MatrixRowColSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] matrix = new int[3][3];

        for(int i = 0; i<3;i++){
            for(int j = 0; j<3;j++){
                System.out.print("Enter [" + i + "][" + j + "] element : " );
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("Sum of all elements: " + (rowsum(matrix, 0) + rowsum(matrix, 1) + rowsum(matrix, 2)));
        System.out.println("Sum of 1st Row: " + rowsum(matrix, 0));
        System.out.println("Sum of 2nd Row: " + rowsum(matrix, 1));
        System.out.println("Sum of 3rd Row: " + rowsum(matrix, 2));
        System.out.println("Sum of 1st Column: " + colsum(matrix, 0));
        System.out.println("Sum of 2nd Column: " + colsum(matrix, 1));
        System.out.println("Sum of 3rd Column: " + colsum(matrix, 2));
    }

    public static int rowsum(int[][] matrix, int row){
        int sum = 0;
        for(int j = 0; j<3;j++){
            sum+=matrix[row][j];
        }
        return sum;
    }

    public static int colsum(int[][] matrix, int col){
        int sum = 0;
        for(int i = 0; i<3;i++){
            sum+=matrix[i][col];
        }
        return sum;
    }
}

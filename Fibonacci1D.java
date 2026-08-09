/*WAP in Java that takes an integer n as input from the user. Dynamically allocate a one-dimensional array of size
n and fill it with Fibonacci numbers. Print the resulting array.*/
import java.util.Scanner;

public class Fibonacci1D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] fibarray = new int[n];
        // Filling the array with Fibonacci numbers
        for(int i = 0; i < n ; i++){
            if(i==0){
                fibarray[i]=0;
            }
            else if(i==1){
                fibarray[i]=1;
            }
            else{
                fibarray[i]=fibarray[i-1]+fibarray[i-2];
            }
        }
        // Printing the resulting array
        System.out.println("Fibonacci numbers in the array...");
        for(int i = 0; i < n ; i++){
            System.out.print(fibarray[i] + " ");
        }
        sc.close();
    }
}

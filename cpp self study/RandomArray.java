/*WAP in Java to create and initialize a 1-D integer array with 10 random numbers between 1 and 100. Then, print
the array elements.*/

import java.util.Random;

public class RandomArray {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Random random = new Random();

        // Initialize the array with random numbers between 1 and 100
        for (int i = 0; i < arr.length; i++) {
            arr[i] = random.nextInt(100) + 1; // Generates a number between 1 and 100
        }

        // Print the array elements
        System.out.print("Random Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
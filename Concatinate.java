/*4. WAP in Java to concatenate the two arrays into a new array and return it. Print the elements of the concatenated
array.*/

import java.util.Scanner;

public class Concatinate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr1 = new int[5];
        int[] arr2 = new int[5];

        System.out.println("Enter 5 elements for 1st array: ");
        for(int i = 0; i<5;i++){
            arr1[i] = sc.nextInt();
        }

        System.out.println("Enter 5 elements for 2nd array: ");
        for(int i = 0; i<5;i++){
            arr2[i] = sc.nextInt();
        }

        int[] concatArr = concatinate(arr1, arr2);

        System.out.println("Concatenated Array: ");
        for(int i = 0; i<concatArr.length;i++){
            System.out.print(concatArr[i] + " ");
        }
        sc.close();
    }

    public static int[] concatinate(int[] arr1, int[] arr2){
        int[] concatArr = new int[arr1.length + arr2.length];

        for(int i = 0; i<arr1.length;i++){
            concatArr[i] = arr1[i];
        }

        for(int i = 0; i<arr2.length;i++){
            concatArr[arr1.length + i] = arr2[i];
        }

        return concatArr;
    }
}

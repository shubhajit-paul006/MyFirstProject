// 5. WAP in Java to perform the following operations:
// o Find the length of the string.
// o Convert the string to uppercase and lowercase.
// o Check if the string contains a specific substring (e.g., "Java").
// o Replace all occurrences of a character (e.g., 'a') with another character (e.g., 'b').

import java.util.Scanner;

public class StringOperation{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        // Find the length of the string
        int length = str.length();
        System.out.println("Length of the string: " + length);
        // Convert the string to uppercase and lowercase
        String upperStr = str.toUpperCase();
        String lowerStr = str.toLowerCase();
        System.out.println("Uppercaase: " + upperStr);
        System.out.println("Lowercase: " + lowerStr);
        // Check if the string contains a specific substring (e.g., "Java")
        if(str.contains("Java")){
            System.out.println("The string contains 'Java'");
        }else{
            System.out.println("The string does not contain 'Java'");
        }
        // Replace all occurrences of a character (e.g., 'a') with another character (e.g., 'b')
        System.out.print("Enter a character to replace: ");
        char oldChar = sc.next().charAt(0);
        System.out.print("Enter a character to replace with: ");
        char newChar = sc.next().charAt(0);
        String replacedStr = str.replace(oldChar, newChar);
        System.out.println("String after replacement: " + replacedStr);
        sc.close();
    }
}
// 8. WAP in Java that uses the StringBuffer class to perform the following operations on a string:
// o Append a string to the end of the buffer.
// o Insert a string at a specific position.
// o Delete a portion of the string.
// o Reverse the string.

import java.util.Scanner;
public class StringBufferOperation{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        StringBuffer strBuffer = new StringBuffer(sc.nextLine());
        // Append a string to the end of the buffer
        System.out.print("Enter a string to append: ");
        String appendStr = sc.nextLine();
        strBuffer.append(appendStr);
        System.out.println("After appending: " + strBuffer.toString());
        // Insert a string at a specific position
        System.out.print("Enter a string to insert: ");
        String insertStr = sc.nextLine();
        System.out.print("Enter the position to insert: ");
        int position = sc.nextInt();
        strBuffer.insert(position, insertStr);
        System.out.println("After insertion: " + strBuffer.toString());
        // Delete a portion of the string
        System.out.print("Enter the starting position to delete: ");
        int start = sc.nextInt();
        System.out.print("Enter the ending position to delete: ");
        int end = sc.nextInt();
        strBuffer.delete(start, end);
        System.out.println("After deletion: " + strBuffer.toString());
        // Reverse the string
        strBuffer.reverse();
        System.out.println("After reversing: " + strBuffer.toString());
        sc.close();
    }
}

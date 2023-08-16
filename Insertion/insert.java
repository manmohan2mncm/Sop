import java.util.Scanner;

public class insert {
    public static void main(String[] args) {
        final int MAX_SIZE = 100;
        int[] arr = new int[MAX_SIZE];
        int n, i;
        int indexPos;
        int element;

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.printf("Enter the number of elements (up to %d): ", MAX_SIZE);
            n = scanner.nextInt();

            System.out.println("Enter the elements:");
            for (i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            System.out.print("Enter the index where the element is to be inserted: ");
            indexPos = scanner.nextInt();

            System.out.print("Enter the element to be inserted: ");
            element = scanner.nextInt();

            // Shift elements to the right to make space for the inserted element
            for (i = n - 1; i >= indexPos; i--) {
                arr[i + 1] = arr[i];
            }

            arr[indexPos] = element;
            n++; // Increment the size of the array

            System.out.print("The elements entered are: ");
            for (i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();

            scanner.close();
        }
    }
}

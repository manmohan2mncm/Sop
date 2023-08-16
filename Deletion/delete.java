import java.util.Scanner;

public class delete {
    public static void main(String[] args) {
        final int MAX_SIZE = 100;
        int[] arr = new int[MAX_SIZE];
        int n, i;
        int index_pos;

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.printf("Enter the number of elements (up to %d): ", MAX_SIZE);
            n = scanner.nextInt();

            System.out.println("Enter the elements:");
            for (i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            System.out.print("Enter the index where the element is to be deleted: ");
            index_pos = scanner.nextInt();

            // Shift elements to the left to make space for the deleted element
            for (i = index_pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            System.out.print("The elements entered are: ");
            for (i = 0; i < n - 1; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();

            scanner.close();
        }
    }
}

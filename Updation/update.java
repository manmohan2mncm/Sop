import java.util.Scanner;

public class update {
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

            System.out.print("Enter the index where the element is to be updated: ");
            indexPos = scanner.nextInt();

            System.out.print("Enter the element to be updated: ");
            element = scanner.nextInt();

            arr[indexPos] = element;

            System.out.print("The elements entered are: ");
            for (i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();

            scanner.close();
        }
    }
}

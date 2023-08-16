import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        final int MAX_SIZE = 100;
        int[] arr = new int[MAX_SIZE];
        int n;

        Scanner scanner = new Scanner(System.in);

        System.out.printf("Enter the number of elements (up to %d): ", MAX_SIZE);
        n = scanner.nextInt();

        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.print("The elements entered are: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        scanner.close();
    }

    public static void selection(int[] arr, int n) {
        int i, j, temp, minSize;
    
        for (i = 0; i < n - 1; i++) {
            minSize = i;
    
            for (j = i + 1; j < n; j++) {
                if (arr[j] < arr[minSize]) {
                    minSize = j;
                }
            }
    
            temp = arr[i];
            arr[i] = arr[minSize];
            arr[minSize] = temp;
        }
    }
}

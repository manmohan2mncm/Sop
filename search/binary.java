
import java.util.Scanner;

public class binary {
    public static void sorting(int[] arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            int minSize = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minSize]) {
                    minSize = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minSize];
            arr[minSize] = temp;
        }
    }

    public static boolean binary(int[] arr, int l, int r, int target) {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == target) {
                return true;
            } else if (arr[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        final int MAX_SIZE = 100;
        int[] arr = new int[MAX_SIZE];
        int n, i;
        int searchQuery;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements (up to " + MAX_SIZE + "): ");
        n = scanner.nextInt();

        System.out.println("Enter the elements:");
        for (i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.print("The elements entered are: ");
        for (i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        System.out.print("Enter the element to be searched: ");
        searchQuery = scanner.nextInt();

        sorting(arr, n);

        if (binary(arr, 0, n - 1, searchQuery)) {
            System.out.println("The element exists.");
        } else {
            System.out.println("The element doesn't exist in the array.");
        }
    }
}

public class selection {
    public static void main(String[] args) {
        int[] arr = {7, 6, 5, 4, 3, 2, 1};
        int n = arr.length;
        int i;

        System.out.print("Original array: ");
        for (i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        main.selection(arr, n);

        System.out.print("Sorted array: ");
        for (i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

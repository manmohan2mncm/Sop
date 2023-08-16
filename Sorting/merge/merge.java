public class merge {
    public static void main(String[] args) {

        int[] array = {10, 87, 5, 34, 67, 12, 9, 56, 345, 78, 23, 44, 99, 124};

        mergeSort(array, 0, array.length - 1);

        // Print the sorted array
        for (int num : array) {
            System.out.print(num + " , ");
        }
    }

    private static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            int left1 = mid - left + 1;
            int right1 = right - mid;
            
            int[] arrL = new int[left1];
            int[] arrR = new int[right1];
            
            System.arraycopy(arr, left, arrL, 0, left1);
            
            for (int j = 0; j < right1; j++) {
                arrR[j] = arr[mid + j + 1];
            }
            
            int i = 0;
            int j = 0;
            int k = left;
            
            while (i < left1 && j < right1) {
                if (arrL[i] < arrR[j]) {
                    arr[k] = arrL[i];
                    i++;
                } else {
                    arr[k] = arrR[j];
                    j++;
                }
                k++;
            }
            
            // Handle the remaining elements
            while (i < left1) {
                arr[k] = arrL[i];
                i++;
                k++;
            }
            
            while (j < right1) {
                arr[k] = arrR[j];
                j++;
                k++;
            }
        }
    }
}

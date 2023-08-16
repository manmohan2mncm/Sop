import java.util.Arrays;

public class CyclicSort {


    /*

    when given numbers from 1, to n range,
    use cyclic sort ONLY
    3, 5, 2, 1, 4,

    */

    public static void main(String[] args) {
        int[] arr = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        cyclic(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void cyclic(int[] arr) {

        int i = 0;
        while(i <arr.length){
            int correct = arr[i] - 1;
            if(arr[correct] != arr[i]){
                swap(arr, i,correct );
            }else{
                i++;
            }
        }
    }

    static void swap(int[] arr,  int a, int b){
        int temp = arr[a];
        arr[a] =arr[ b];
        arr[b]= temp;
    }
}



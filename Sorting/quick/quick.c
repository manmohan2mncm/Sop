#include <stdio.h>


void quick(int array[], int low, int high){
    if (low >=high){
            return;
    }
        int start = low;
        int end = high;
        int mid = start + (end-start) /2 ;
        int pivot = array[mid];

        while(start <= end){

            while(array[start] < pivot){
                start++;
            }
            while(array[end] > pivot){
                end--;
            }
            if(start <= end)
            {
                int temp = array[start];
                array[start] =array[ end];
                array[end]= temp;
                start++;
                end--;
            }
        }
        // now pivot is at correct index, now please sort the two halves
        quick(array, low, end);
        quick(array, start, high);
}

int main(){

    int arr[] = {6, 5, 4, 3, 2, 1};
    
    quick(arr, 0, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    

}
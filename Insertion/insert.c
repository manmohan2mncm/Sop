#include <stdio.h>

#define MAX 100

int main() {

    //declaration
    int arr[MAX];
    int n, i;
    int index_pos;
    int element;
    int flag = 1;


    printf("Enter the number of elements (up to %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(flag == 1){
        printf("Enter the index where the element is to be inserted: ");
        scanf("%d", &index_pos);

        if( index_pos >= 0 && index_pos <= n-1){
            flag = 0;
        } else {
            printf("The index is out of bound, \n");
        }
   }    
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    for (i = n - 1; i >= index_pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index_pos] = element;
    n++; 

    printf("The elements entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
 
    return 0;

}




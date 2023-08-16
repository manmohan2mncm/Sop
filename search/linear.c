
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int index_pos;
    int element;
    int searchQuery;
    int flag = 0;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to be searched: ");
    scanf("%d", &searchQuery);

        
    for(i=0 ;i < n ; i++){
        if(arr[i] == searchQuery){
            printf("The element  %d is found at %dth index", searchQuery, i);
            flag = 1;
            break;
        }
    } 

    if(flag !=1){
        printf("The element not found");
    }
    return 0;
}

#include <stdio.h>

int count_before_zero(int ar[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (ar[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //int arr[] = {1, 2, 3, 1, 0, 6};
    //int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_before_zero(arr, n);
    printf(" %d\n", count);
    return 0;
}

#include <stdio.h>
int TernarySearch(int target, int arr[], int low, int high) {
    while (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        if (arr[mid1] == target) {
            return mid1; 
        }
        if (arr[mid2] == target) {
            return mid2; 
        }

        if (target < arr[mid1]) {
            high = mid1 - 1; 
        } else if (target > arr[mid2]) {
            low = mid2 + 1; 
        } else {
            low = mid1 + 1;
            high = mid2 - 1; 
        }
    }
    return -1; // Target not found
}

int main() {
    int n,i, target, result;
    int arr[100];

    
    printf("Enter size: ");
    scanf("%d", &n);

    
    printf("Enter array in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    
    result = TernarySearch(target, arr, 0, n - 1);

    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}


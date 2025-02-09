#include <stdio.h>
#include <time.h>

void linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return; 
        }
    }
}

int main() {
    int a[100000], i, j,repeat;
    int n[] = {100, 5000, 20000, 40000, 60000, 80000, 99999}; 
    int size_n = sizeof(n) / sizeof(n[0]);

    
    for (i = 0; i < 100000; i++) {
        a[i] = i + 1;
    }

   
    for (j = 0; j < size_n; j++) {
        clock_t start, end;
        start = clock();  

        for (repeat = 0; repeat < 1000; repeat++) { 
            linearSearch(a, 100000, n[j]);
        }

        end = clock();  
        double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC / 1000;

        printf("Search for %d took %f seconds\n", n[j], time_taken);
    }

    return 0;
}


#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    int values[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }
    
    bubbleSort(values, N);
     
    for (int i = 0; i < N; i++) {
        printf("%d\n", values[i]);
    }
    
    return 0;
}
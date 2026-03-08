#include <stdio.h>

void selectionSort(int arr[], int n);
void printBest3(int arr[], int n);

int main() {
    int score[4] = {64, 57, 76, 60};

    selectionSort(score, 4);
    printBest3(score, 4);

    return 0;
}

void selectionSort(int arr[], int n) {
    int i, j, maxIdx, temp;
    for(i=0; i<n-1; i++) {
        maxIdx = i;
        for(j=i+1; j<n; j++) {
            if(arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

void printBest3(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<3; i++) {
        sum += arr[i];
        printf("%d ", arr[i]);
    }
    printf("\nBest 3 scores sum = %d\n", sum);
}

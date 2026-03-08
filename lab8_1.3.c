#include <stdio.h>

void addthree(int number[], int pos[][2], int n) {
    printf("--- Processing Updates ---\n");
    for (int i = 0; i < n; i++) {
        int index = pos[i][0]; 
        int value = pos[i][1];  
        number[index] += value; 
        
        printf("Added %d to index [%d]\n", value, index);
    }
    printf("--------------------------\n");
}

int main() {
    int data[5] = {10, 10, 10, 10, 10};
    
    int updates[3][2] = {
        {0, 5},  // รายการที่ 1: ตำแหน่ง 0 เพิ่ม 5
        {2, 20}, // รายการที่ 2: ตำแหน่ง 2 เพิ่ม 20
        {4, 1}   // รายการที่ 3: ตำแหน่ง 4 เพิ่ม 1
    };

    printf("Before: ");
    for(int i=0; i<5; i++) printf("%d ", data[i]);
    printf("\n\n");

    addthree(data, updates, 3);

    printf("\nAfter:  ");
    for(int i=0; i<5; i++) printf("%d ", data[i]);
    printf("\n");

    return 0;
}

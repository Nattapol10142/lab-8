#include <stdio.h>

int checkscore(char std[]);
int countCorrectQ1(char ans[][10], int n);
int hardestQuestion(char ans[][10], int n);

int main() {
    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    for(int i=0; i<8; i++) {
        printf("std %d => %d\n", i+1, checkscore(ans[i]));
    }

    printf("Number of students correct in Q1 = %d\n", countCorrectQ1(ans, 8));
    printf("Hardest question is No.%d\n", hardestQuestion(ans, 8));

    return 0;
}

int checkscore(char std[]) {
    char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int score = 0;
    for(int i=0; i<10; i++) {
        if(std[i] == keys[i]) {
            score++;
        }
    }
    return score;
}

int countCorrectQ1(char ans[][10], int n) {
    char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int count = 0;
    for(int i=0; i<n; i++) {
        if(ans[i][0] == keys[0]) {
            count++;
        }
    }
    return count;
}

int hardestQuestion(char ans[][10], int n) {
    char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int minCorrect = n+1;
    int hardestIndex = -1;

    for(int q=0; q<10; q++) {
        int count = 0;
        for(int i=0; i<n; i++) {
            if(ans[i][q] == keys[q]) {
                count++;
            }
        }
        if(count < minCorrect) {
            minCorrect = count;
            hardestIndex = q;
        }
    }
    return hardestIndex+1; 
}

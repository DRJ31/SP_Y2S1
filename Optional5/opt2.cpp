#include <stdio.h>
void bubbleSort(int numbers[], int length);
int main(){//Input 0 to stop scanning.
    int numbers[50];
    puts("Please input numbers: ");
    int i;
    for (i = 0; i < 50; i++){
        scanf("%d", &numbers[i]);
        if (numbers[i] == 0)
            break;
    }
    bubbleSort(numbers, i-1);
    for (int j = 0; j < i-1; j++)
        printf("%d ", numbers[j]);
    puts("");
    return 0;
}
void bubbleSort(int numbers[], int length){
    int status;
    do{
        status = 0;
        for (int i = 1; i < length; i++){
            if (numbers[i-1] > numbers[i]){
                int tmp = numbers[i-1];
                numbers[i-1] = numbers[i];
                numbers[i] = tmp;
                status = 1;
            }
        }
    }while (status != 0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

//function
//function
//function
//function

int GenerateRandomNumber(int Scale);
void ModifiedArray(int a[], int size);
int ComputedAverage(int a[], int size);
void DisplayArray(int a[], int size);

int main(void){

    srand(time(NULL));

    int randomNumber[SIZE] = {0};

    int i;

    for(i=0;i<SIZE;i++){
        randomNumber[i] = GenerateRandomNumber(100);
    }

    DisplayArray(randomNumber, SIZE);

    ModifiedArray(randomNumber, SIZE);

    puts("");

    DisplayArray(randomNumber, SIZE);
}

void DisplayArray(int a[], int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("Element: %d - Value: %D\n", i, a[i]);
    }
    
}

int GenerateRandomNumber(int Scale){
    return rand() % Scale;
}


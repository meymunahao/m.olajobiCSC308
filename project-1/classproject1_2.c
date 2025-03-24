/* Write a C program to take input in three subjects CSC 201, CSC 205 and STA 205 
and calculate the total, average and percentage. */

#include <stdio.h>

int main(){

    float csc201, csc205, sta205;
    float total, average, percentage;

    printf("Enter the scores for CSC 201: ");
    scanf("%f", &csc201);

    printf("Enter the scores for CSC 205: ");
    scanf("%f", &csc205);

    printf("Enter the scores for STA 205: ");
    scanf("%f", &sta205);

    total = csc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total/300) * 100;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
/* * Project: Student Expense Tracker
 * Purpose: Calculating total spend and budget utilization
 */

#include <stdio.h>

int main() {
    // 1. Data Setup (Inputs)
    int budget = 500;
    int snacks = 148;
    int notebook = 79;
    int pencil = 60;

    // 2. Processing (The Math)
    int total = snacks + notebook + pencil;
    int balance = budget - total;
    
    // We 'cast' total to float here so the division gives us decimals
    float percentage = ((float)total / budget) * 100;

    // 3. Output (The Receipt)
    printf("        RECEIPT         \n");
    printf("-----------------------\n");
    printf("Total Budget : %d\n", budget);
    
    // Listing items clearly
    printf("Items bought :\n");
    printf("- Snacks  : %d\n", snacks);
    printf("- Notebook: %d\n", notebook);
    printf("- Pencils : %d\n", pencil);
    
    printf("-----------------------\n");
    printf("Total Spent         : %d\n", total);
    printf("Remaining Balance   : %d\n", balance);
    
    // %.2f limits the percentage to two decimal places
    printf("Spending Percentage : %.2f%%\n", percentage);

    return 0;
}

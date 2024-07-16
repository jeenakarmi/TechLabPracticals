// Implementation of SJF when arrival time is 0

#include <stdio.h>

void main() {
    int bt[15], wt[15], tat[15], ct[15], at[15], p[15], n, i, j;
    float awt, atat, twt = 0, ttat = 0;
    
    // Asking for the number of processes
    printf("Enter the number of processes:\n");
    scanf("%d", &n);
    
    // Getting burst time for each process
    for (i = 0; i < n; i++) {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
        at[i] = 0; // Since all processes arrive at time 0
        p[i] = i;  // Initialize process index array
    }
    
    // Sort processes based on burst time using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (bt[j] > bt[j + 1]) {
                // Swap burst time
                int temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
                
                // Swap process index
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    
    int tempT = 0;
    for (i = 0; i < n; i++) {
        ct[i] = bt[i] + tempT;
        tempT = ct[i];
        
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        
        twt += wt[i];
        ttat += tat[i];
    }
    
    awt = (twt / n);
    atat = (ttat / n);
    
    // Printing the results
    printf("Process\t\tBT\t\tAT\t\tCT\t\tTAT\t\tWT\n");
    for (i = 0; i < n; ++i) {
        printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], at[i], ct[i], tat[i], wt[i]);
    }
    printf("Average Waiting Time: %f\n", awt);
    printf("Average Turnaround Time: %f\n", atat);
}


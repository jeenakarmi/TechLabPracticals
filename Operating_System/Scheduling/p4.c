#include <stdio.h>

void main() {
    int bt[15], wt[15], tat[15], ct[15], at[15], p[15], n, i, j;
    int completed[15] = {0}; // To track completed processes
    float awt, atat, twt = 0, ttat = 0;
    
    // Asking for the number of processes
    printf("Enter the number of processes:\n");
    scanf("%d", &n);
    
    // Getting burst time and arrival time for each process
    for (i = 0; i < n; i++) {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
        printf("Enter arrival time for process p%d: ", i);
        scanf("%d", &at[i]);
        p[i] = i;  // Initialize process index array
    }
    
    int currentTime = 0;
    int completedCount = 0;

    while (completedCount < n) {
        int shortest = -1;
        for (i = 0; i < n; i++) {
            if (!completed[i] && (shortest == -1 || bt[i] < bt[shortest]) && at[i] <= currentTime) {
                shortest = i;
            }
        }

        if (shortest == -1) {
            currentTime++;
        } else {
            ct[shortest] = currentTime + bt[shortest];
            tat[shortest] = ct[shortest] - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
            
            twt += wt[shortest];
            ttat += tat[shortest];
            
            completed[shortest] = 1;
            completedCount++;
            currentTime = ct[shortest];
        }
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


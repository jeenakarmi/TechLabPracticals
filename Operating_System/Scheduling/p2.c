// Implementation of FCFS when arrivafl time is different 

#include <stdio.h>
#include <unistd.h>

void main() {
    int bt[15], wt[15], tat[15], ct[15], at[15], n, i, j;
    float awt, atat, twt = 0, ttat = 0;
    
    printf("Enter no. of processes:\n");
    scanf("%d", &n);
    
    // Getting burst time and arrival time for each process
    for (i = 0; i < n; i++) {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
        
        printf("Enter arrival time for process p%d: ", i);
        scanf("%d", &at[i]);
    }
    
    // Sort processes based on arrival time
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1]) {
                // Swap burst time
                int temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
                
                // Swap arrival time
                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;
            }
        }
    }
    
    int tempT = 0;
    for (i = 0; i < n; i++) {
        if (tempT < at[i]) {
            tempT = at[i]; // If the process arrives after the current time, wait until it arrives
        }
        ct[i] = bt[i] + tempT;
        tempT = ct[i];
        
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        
        twt = twt + wt[i];
        ttat = ttat + tat[i];
    }
    
    awt = (twt / n);
    atat = (ttat / n);
    
    printf("Process\t\tBT\t\tAT\t\tCT\t\tTAT\t\tWT\n");
    for (i = 0; i < n; ++i) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], at[i], ct[i], tat[i], wt[i]);
    }
    printf("Average Waiting Time: %f\n", awt);
    printf("Average Turnaround Time: %f\n", atat);
}


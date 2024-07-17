// Implementation of SJF when arrival time is 0

#include <stdio.h>

struct Process
{
    int p_id;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
};

int main()
{
    int n = 0;
    // get no of processes
    printf("Enter no. of processes: ");
    scanf("%d", &n);
    Process processes[n];
   
    // get burst time for processes
    for (int i = 0; i < n; ++i)
    {
        processes[i].p_id = i;
        processes[i].at = 0;
        printf("Enter burst time for p%d: ", i);
        scanf("%d", &processes[i].bt);
    }

    // sort processes according to burst time
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (processes[j].bt > processes[j + 1].bt) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    // running time of processes
    int running_time = 0;
    int sum_tat = 0;
    int sum_wt = 0;
    printf("process\t\tat\t\tbt\t\tct\t\ttat\t\twt\n");
    for (int i = 0; i < n; ++i)
    {
        running_time += processes[i].bt;
        processes[i].ct = running_time;
        processes[i].tat = running_time; // arrival time is 0
        processes[i].wt = processes[i].tat - processes[i].bt;
        sum_tat += processes[i].tat;
        sum_wt += processes[i].wt;
    }

    // sort processes according to process id
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (processes[j].p_id > processes[j + 1].p_id) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    
    // display calculation table
    for (int i = 0; i < n; ++ i)
    {
        printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, processes[i].at, processes[i].bt, processes[i].ct, processes[i].tat, processes[i].wt);
    }

    float atat = sum_tat / n;
    float awt = sum_wt / n;

    printf("Avg TAT: %f\n", atat);
    printf("Avg WT: %f\n", awt);

    return 0;
}
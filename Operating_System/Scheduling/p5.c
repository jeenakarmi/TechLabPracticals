/* Round Robin Scheduling */
#include <stdio.h>
#define RUN_INTERVAL 2

struct Process
{
    int p_id, at, bt, ct, wt, tat, priority, remaining_time;
};

int main()
{
    int n = 0;
    printf("Enter no. of processes: ");
    scanf("%d", &n);

    Process processes[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Enter burst time for p%d: ", i);
        scanf("%d", &processes[i].bt);
        processes[i].at = 0;
        processes[i].p_id = i;
        processes[i].remaining_time = processes[i].bt;
    }

    int curr_runtime = 0;
    int running_time = 0;
    // no of completed task
    int complete = 0;
    while (complete < n)
    {
        for (int i = 0; i < n; ++i)
        {
            // if process is completed switch process
            if (processes[i].remaining_time <= 0)
            {
                continue;
            }
            for (int j = 0; j < RUN_INTERVAL; ++j)
            {
                running_time += 1;
                processes[i].ct = running_time;
                processes[i].tat = running_time; // same arrival time
                processes[i].wt = processes[i].tat - processes[i].bt;
                --processes[i].remaining_time;
                // check running_time is ended or not
                if (processes[i].remaining_time <= 0)
                {
                    printf("This happen for p%d\n", i);
                    complete += 1;
                    curr_runtime = 0;
                    break;
                }
            }
        }
    }

    // calc for avg
    int sum_tat = 0;
    int sum_wt = 0;
    printf("process\t\tbt\t\tct\t\ttat\t\twt\n");
    for (int i = 0; i < n; ++i)
    {
        sum_tat += processes[i].tat;
        sum_wt += processes[i].wt;
        printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, processes[i].bt, processes[i].ct, processes[i].tat, processes[i].wt);
    }
    float avg_tat = (float)sum_tat / n;
    float avg_wt = (float)sum_wt / n;
    printf("Avg ATAT: %f\n", avg_tat);
    printf("Avg AWT: %f\n", avg_wt);

    return 0;
}

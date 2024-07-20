/* Priority Scheduling Non-Preemptive */
#include <stdio.h>
#include<unistd.h>

struct Process
{
    int p_id, at, bt, ct, wt, tat, priority;
};

void sortByPriority(int n, Process* arr);
void sortById(int n, Process* arr);

void sortByPriority(int n, Process* arr)
{
    for (int i = 0; i < n - 1; ++i )
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j].priority > arr[j + 1].priority)
            {
                Process temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void sortById(int n, Process* arr)
{
    for (int i = 0; i < n - 1; ++i )
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j].p_id > arr[j + 1].p_id)
            {
                Process temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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
        printf("Enter priority for p%d: ", i);
        scanf("%d", &processes[i].priority);
        processes[i].at = 0;
        processes[i].p_id = i;
    }

    sortByPriority(n, processes);

    // calculations
    int running_time = 0;
    int sum_tat = 0, sum_wt = 0;
    for (int i = 0; i < n; ++i)
    {
        running_time += processes[i].bt;
        processes[i].ct = running_time;
        processes[i].tat = running_time; // arrival time is 0
        processes[i].wt = processes[i].tat - processes[i].bt;
        sum_tat += processes[i].tat;
        sum_wt += processes[i].wt;
    }

    sortById(n, processes);
    printf("process\t\tat\t\tbt\t\tct\t\ttat\t\twt\t\tpriority\n");
    for (int i = 0; i < n; ++i)
    {
        printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, processes[i].at, processes[i].bt, processes[i].ct, processes[i].tat, processes[i].wt, processes[i].priority);
    }
    
    return 0;
}

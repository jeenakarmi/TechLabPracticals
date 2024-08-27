// Banker's Algorithm

#include <stdio.h>

int num_processes, num_resources;
int allocation[10][10], max_demand[10][10], need[10][10], available[10];
int safe_sequence[10];

int is_system_safe() {
    int work[10], finish[10] = {0}, safe_index = 0;

    // Initialize work to available resources
    for (int i = 0; i < num_resources; i++) {
        work[i] = available[i];
    }

    // Find a safe sequence
    for (int k = 0; k < num_processes; k++) {
        for (int i = 0; i < num_processes; i++) {
            if (finish[i] == 0) {
                int can_allocate = 1;
                for (int j = 0; j < num_resources; j++) {
                    if (need[i][j] > work[j]) {
                        can_allocate = 0;
                        break;
                    }
                }

                if (can_allocate) {
                    // Allocation is possible
                    for (int j = 0; j < num_resources; j++) {
                        work[j] += allocation[i][j];
                    }
                    safe_sequence[safe_index++] = i;
                    finish[i] = 1;
                    k = -1;  // Restart checking for safe sequence
                }
            }
        }
    }

    // Check if all processes are finished
    for (int i = 0; i < num_processes; i++) {
        if (finish[i] == 0) {
            printf("The system is in an unsafe state.\n");
            return 0;
        }
    }

    printf("The system is in a safe state.\nSafe sequence: ");
    for (int i = 0; i < num_processes; i++) {
        printf("P%d ", safe_sequence[i]);
    }
    printf("\n");

    return 1;
}

void calculate_need() {
    for (int i = 0; i < num_processes; i++) {
        for (int j = 0; j < num_resources; j++) {
            need[i][j] = max_demand[i][j] - allocation[i][j];
        }
    }
}

int main() {
    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);

    printf("Enter the number of resources: ");
    scanf("%d", &num_resources);

    // Input Allocation Matrix
    printf("Enter the allocation matrix (e.g., '0 1 2' for each process):\n");
    for (int i = 0; i < num_processes; i++) {
        printf("Process %d: ", i);
        for (int j = 0; j < num_resources; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    // Input Max Demand Matrix
    printf("Enter the max demand matrix (e.g., '3 2 2' for each process):\n");
    for (int i = 0; i < num_processes; i++) {
        printf("Process %d: ", i);
        for (int j = 0; j < num_resources; j++) {
            scanf("%d", &max_demand[i][j]);
        }
    }

    // Input Available Resources
    printf("Enter the available resources (e.g., '3 2 2'):\n");
    for (int i = 0; i < num_resources; i++) {
        scanf("%d", &available[i]);
    }

    calculate_need();
    is_system_safe();

    return 0;
}



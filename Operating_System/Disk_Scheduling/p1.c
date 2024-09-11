// FCFS Disk Scheduling

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, start, totalHeadMovement = 0, currentPosition;
    int numTracks;

    // Input the number of disk requests
    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    int requests[n];

    // Input the disk requests
    printf("Enter the disk requests:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }

    // Input the starting head position
    printf("Enter the starting head position: ");
    scanf("%d", &start);

    // Input the number of tracks on the disk
    printf("Enter the number of tracks on the disk: ");
    scanf("%d", &numTracks);

    // Initialize current position to the starting head position
    currentPosition = start;

    // Print the sequence of requests
    printf("Sequence of disk requests: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", requests[i]);
    }
    printf("\n");

    // Calculate total head movement and print it
    printf("Head movements:\n");
    for (int i = 0; i < n; i++) {
        int movement = abs(requests[i] - currentPosition);
        totalHeadMovement += movement;
        printf("Move from %d to %d: %d\n", currentPosition, requests[i], movement);
        currentPosition = requests[i];
    }

    // Display the total head movement
    printf("Total head movement for FCFS scheduling: %d\n", totalHeadMovement);

    return 0;
}


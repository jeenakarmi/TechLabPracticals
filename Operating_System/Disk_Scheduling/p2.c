// SCAN Disk Scheduling

#include <stdio.h>
#include <stdlib.h>

// Function to sort the requests array
void sortRequests(int requests[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (requests[i] > requests[j]) {
                int temp = requests[i];
                requests[i] = requests[j];
                requests[j] = temp;
            }
        }
    }
}

int main() {
    int n, start, totalHeadMovement = 0;
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

    // Sort the requests
    sortRequests(requests, n);

    // Determine the direction of movement
    int direction = -1; // -1 for left, 1 for right
    for (int i = 0; i < n; i++) {
        if (requests[i] > start) {
            direction = 1;
            break;
        } else if (requests[i] < start) {
            direction = -1;
        }
    }

    // Print the sequence of disk requests
    printf("Sequence of disk requests:\n");

    if (direction == 1) { // Moving to the right
        int i;
        // Move to the right from the starting position
        for (i = 0; i < n && requests[i] < start; i++);
        
        // Process requests to the right of the start
        for (int j = i; j < n; j++) {
            int movement = abs(requests[j] - start);
            totalHeadMovement += movement;
            printf("Move from %d to %d: %d\n", start, requests[j], movement);
            start = requests[j];
        }
        
        // Move to the end of the disk and then back
        if (i > 0) {
            totalHeadMovement += abs(numTracks - 1 - start); // Move to the end of the disk
            start = numTracks - 1;
            printf("Move from %d to %d: %d\n", start, numTracks - 1, abs(numTracks - 1 - start));
            for (int j = i - 1; j >= 0; j--) {
                int movement = abs(requests[j] - start);
                totalHeadMovement += movement;
                printf("Move from %d to %d: %d\n", start, requests[j], movement);
                start = requests[j];
            }
        }
    } else { // Moving to the left
        int i;
        // Move to the left from the starting position
        for (i = n - 1; i >= 0 && requests[i] > start; i--);
        
        // Process requests to the left of the start
        for (int j = i; j >= 0; j--) {
            int movement = abs(requests[j] - start);
            totalHeadMovement += movement;
            printf("Move from %d to %d: %d\n", start, requests[j], movement);
            start = requests[j];
        }

        // Move to the beginning of the disk and then back
        if (i < n - 1) {
            totalHeadMovement += abs(0 - start); // Move to the start of the disk
            start = 0;
            printf("Move from %d to %d: %d\n", start, 0, abs(0 - start));
            for (int j = i + 1; j < n; j++) {
                int movement = abs(requests[j] - start);
                totalHeadMovement += movement;
                printf("Move from %d to %d: %d\n", start, requests[j], movement);
                start = requests[j];
            }
        }
    }

    // Display the total head movement
    printf("Total head movement for SCAN scheduling: %d\n", totalHeadMovement);

    return 0;
}


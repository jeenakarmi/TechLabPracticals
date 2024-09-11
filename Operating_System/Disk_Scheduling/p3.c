// C_SCAN Disk Scheduling

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

    // Print the sequence of disk requests
    printf("Sequence of disk requests:\n");

    // Determine the direction of movement (right for C-SCAN)
    int i;
    for (i = 0; i < n && requests[i] < start; i++);

    // Move to the right from the starting position
    for (int j = i; j < n; j++) {
        int movement = abs(requests[j] - start);
        totalHeadMovement += movement;
        printf("Move from %d to %d: %d\n", start, requests[j], movement);
        start = requests[j];
    }
    
    // Move to the end of the disk
    if (i > 0) {
        totalHeadMovement += abs(numTracks - 1 - start); // Move to the end of the disk
        printf("Move from %d to %d: %d\n", start, numTracks - 1, abs(numTracks - 1 - start));
        start = 0; // Jump to the beginning of the disk
        totalHeadMovement += abs(numTracks - 1 - start); // Jump to the beginning
        printf("Jump from %d to %d: %d\n", numTracks - 1, 0, abs(numTracks - 1 - start));
        
        // Process requests from the start of the disk
        for (int j = 0; j < i; j++) {
            int movement = abs(requests[j] - start);
            totalHeadMovement += movement;
            printf("Move from %d to %d: %d\n", start, requests[j], movement);
            start = requests[j];
        }
    } else {
        // If there are no requests to the right of the start
        totalHeadMovement += abs(numTracks - 1 - start); // Move to the end of the disk
        printf("Move from %d to %d: %d\n", start, numTracks - 1, abs(numTracks - 1 - start));
        start = 0; // Jump to the beginning of the disk
        totalHeadMovement += abs(numTracks - 1 - start); // Jump to the beginning
        printf("Jump from %d to %d: %d\n", numTracks - 1, 0, abs(numTracks - 1 - start));
    }

    // Display the total head movement
    printf("Total head movement for C-SCAN scheduling: %d\n", totalHeadMovement);

    return 0;
}


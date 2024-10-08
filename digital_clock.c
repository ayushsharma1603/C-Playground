#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour, minute, second;
    // Infinite loop to keep the clock running
    while(1) {
        // Get current time
        time_t current_time = time(NULL);
        struct tm *local_time = localtime(&current_time);

        // Extract the hour, minute, and second
        hour = local_time->tm_hour;
        minute = local_time->tm_min;
        second = local_time->tm_sec;

        // Clear the screen (for better display on most terminals)
        printf("\033[H\033[J");

        // Print the time in HH:MM:SS format
        printf("Digital Clock\n");
        printf("-----------------\n");
        printf("  %02d:%02d:%02d  \n", hour, minute, second);
        printf("-----------------\n");

        // Sleep for 1 second
        sleep(1);
    }

    return 0;
}

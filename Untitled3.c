#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time as a timestamp (seconds since the epoch)
    time_t currentTime = time(NULL);

    // Print the timestamp
    printf("Current Unix Timestamp: %ld\n", currentTime);

    return 0;
}

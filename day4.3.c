#include <stdio.h>

// Structure to represent a time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;
    int totalSecondsStart, totalSecondsEnd, totalSecondsDiff;

    // Convert start time to total seconds
    totalSecondsStart = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;

    // Convert end time to total seconds
    totalSecondsEnd = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    // Calculate the difference in total seconds
    totalSecondsDiff = totalSecondsEnd - totalSecondsStart;

    // Convert the difference back to hours, minutes, and seconds
    difference.hours = totalSecondsDiff / 3600;
    totalSecondsDiff %= 3600;
    difference.minutes = totalSecondsDiff / 60;
    difference.seconds = totalSecondsDiff % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    // Get the start time from the user
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Get the end time from the user
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference between the two time periods
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("The difference is: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

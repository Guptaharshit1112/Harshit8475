#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(struct Box *boxPtr) {
    float length = boxPtr->length;
    float width = boxPtr->width;
    float height = boxPtr->height;
    return 2 * (length * width + length * height + width * height);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    // Assign values to the box dimensions
    boxPtr->length = 3.0;
    boxPtr->width = 2.0;
    boxPtr->height = 4.0;

    // Calculate volume and surface area
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    // Display the results
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}

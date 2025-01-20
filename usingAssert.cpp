#include <iostream>
#include <cassert>

// Function to calculate travel time
float travelTime(float distance, float speed) {
    assert(speed > 0 && "Speed must be greater than zero.");
    return distance / speed;
}

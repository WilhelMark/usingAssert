#include <iostream>
#include <cassert>

// Function to calculate travel time
float travelTime(float distance, float speed) {
    // Assert to check that speed is greater than zero
    assert(speed > 0 && "Speed must be greater than zero.");
    
    // Calculate and return travel time
    return distance / speed;
}

int main() {
    float distance;
    float speed;

    // Input distance
    std::cout << "Enter distance (in kilometers): ";
    std::cin >> distance;

    // Validate distance input
    if (distance < 0) {
        std::cout << "Distance cannot be negative." << std::endl;
        return 1; // Exit with error code
    }

    // Input speed
    std::cout << "Enter speed (in kilometers per hour): ";
    std::cin >> speed;

    // Validate speed input
    if (speed <= 0) {
        std::cout << "Speed must be greater than zero." << std::endl;
        return 1; // Exit with error code
    }

    // Calculate travel time
    float time = travelTime(distance, speed);

    // Output the result
    std::cout << "Travel time: " << time << " hours" << std::endl;

    return 0;
}

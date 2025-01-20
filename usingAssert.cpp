#include <iostream>
#include <cassert>

// Function to calculate travel time
float travelTime(float distance, float speed) {
    assert(speed > 0 && "Speed must be greater than zero.");
    return distance / speed;
}

int main() {
    float distance;
    float speed;

    std::cout << "Enter distance (in kilometers): ";
    std::cin >> distance;

    std::cout << "Enter speed (in kilometers per hour): ";
    std::cin >> speed;

    float time = travelTime(distance, speed);
    std::cout << "Travel time: " << time << " hours" << std::endl;

    return 0;
}

#include <iostream>

int main() {
    unsigned long long size;
    unsigned long long my_room;

    std::cout << "Which will be the block's size? ";
    std::cin >> size;
    std::cout << "Which is your room? ";
    std::cin >> my_room;

    unsigned long long rooms = 0;
    unsigned long long floors = 0;

    
    for (unsigned long long i = 1; i <= size; i++) {
        for (unsigned long long k = 1; k <= i; k++) {

            floors++; 

            
            for (unsigned long long t = 1; t <= size - i; t++) {
            }

            for (unsigned long long j = 1; j <= i; j++) {
                rooms++;

                if (rooms == my_room) {
                    
                    std::cout << "The number of rooms is: " << j << " ,We are on the floor: " << floors << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "Room not found within the specified block size." << std::endl;
    return 0;
}


#include <iostream>

using namespace std;

int main() {
    
    unsigned long long N;
    std::cout << "Which room do you wanna find? ";
    if (!(cin >> N)) return 0;

    unsigned long long low = 0;
    unsigned long long high = 2^64;
    unsigned long long m = 0;

    while (low <= high) {
        unsigned long long mid = low + (high - low) / 2;
                
        unsigned long long rooms = mid * (mid + 1);
        rooms = rooms * (2 * mid + 1) / 6;

        if (rooms < N) {
            m = mid;       
            low = mid + 1;  
        }
        else {
            high = mid - 1; 
        }
    }

   
    unsigned long long rooms_before = m * (m + 1) * (2 * m + 1) / 6;
    unsigned long long floors_before = m * (m + 1) / 2;
        
    unsigned long long k = m + 1;
        
    unsigned long long remaining = N - rooms_before - 1;
        
    unsigned long long piso_en_bloque = remaining / k;
    unsigned long long column_position = (remaining % k) + 1;

    
    unsigned long long final_floor = floors_before + piso_en_bloque + 1;

   
    std::cout << final_floor << " " << column_position << "\n";

    return 0;
}

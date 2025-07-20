#include <iostream>

// Define status constants
const unsigned char LAUNCH_STATUS = 1;    // 00000001
const unsigned char EJECTION_STATUS = 2;  // 00000010
const unsigned char SYSTEMS_OK = 4;       // 00000100

int main() {
    // Initialize status byte
    unsigned char statusByte = 0;

    // Set status values
    statusByte |= LAUNCH_STATUS;
    statusByte |= EJECTION_STATUS;
    statusByte |= SYSTEMS_OK;

    // Check and print status values
    bool launch = (statusByte & LAUNCH_STATUS) != 0;
    bool ejection = (statusByte & EJECTION_STATUS) != 0;
    bool systemsOk = (statusByte & SYSTEMS_OK) != 0;

    std::cout << "Launch status: " << launch << std::endl;
    std::cout << "Ejection status: " << ejection << std::endl;
    std::cout << "All systems OK: " << systemsOk << std::endl;

    return 0;
}

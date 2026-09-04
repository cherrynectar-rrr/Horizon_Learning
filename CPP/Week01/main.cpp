#include <iostream>

int main()
{
    std::cout << "========Device ID Checker========\n";

    int device_id;

    while (true)
    {
        std::cout << "Enter device ID: ";
        if (!(std::cin >> device_id)){
            std::cout << "Invalid input.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');}
        else{
                std::cout << "Device ID: " << device_id << "\n";
                if (device_id > 0)
                    std::cout << "Valid device ID\n";
                else if (device_id < 0)
                    std::cout << "Invalid device ID\n";
                else{
                    std::cout << "Program exited.\n";
                    break;}
            }
    }
    return 0;
}
#include <iostream>

int main(){
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1 and 100 \n";

    std::cin >> favoriteNumber;

    std::cout << "Wow, the number " << favoriteNumber << " is my favorite too" << std::endl;
    return 0;
}
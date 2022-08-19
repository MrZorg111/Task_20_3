#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string fish, haul, look_haul;
    std::cout << "Enter the name of the desired fish:";
    std::cin >> fish;
    std::fstream fish_lake, basket_fish;
    std::ofstream basket;

    basket.open("P:\\basket.txt", std::ios::app);
    basket << "Caught:";
    fish_lake.open("P:\\river.txt");
    while (!fish_lake.eof()) {
        fish_lake >> haul;

        if (haul == fish) {
            basket << "\n" << haul;
        }
    }
    fish_lake.close(), basket.close();
    basket_fish.open("P:\\basket.txt");
    while (!basket_fish.eof()) {
        basket_fish >> look_haul;
        std::cout << look_haul << "\n";
    }
    basket_fish.close();
    return 0;
}

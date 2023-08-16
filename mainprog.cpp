#include <iostream>
#include <vector>
#include<bits.stdc++.h>
using namespace std;



int main() {
    int starting_x = 0, starting_y = 0, starting_z = 0;
    std::string initial_direction = "N";
    std::vector<std::string> commands = {"f", "r", "u", "b", "l"};

    Spacecraft craft(starting_x, starting_y, starting_z, initial_direction);
    craft.execute_commands(commands);
    craft.print_final_state();

    return 0;
}
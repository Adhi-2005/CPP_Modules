#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);  // Bob is armed with a club
        bob.attack();              // Outputs: Bob attacks with their crude spiked club

        club.setType("some other type of club");
        bob.attack();              // Outputs: Bob attacks with their some other type of club
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);  // Set weapon for Jim later
        jim.attack();         // Outputs: Jim attacks with their crude spiked club

        club.setType("some other type of club");
        jim.attack();         // Outputs: Jim attacks with their some other type of club
    }

    return 0;
}

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diams("Pikachu");

	diams.whoAmI();
	diams.attack("eclair");
	diams.guardGate();
	diams.highFivesGuys();
	diams.takeDamage(10);
	diams.beRepaired(10);
	return (0);
}

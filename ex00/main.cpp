#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Bernard");

	clappy.attack("Bobby");
	clappy.attack("Bobby");
	clappy.attack("Bobby");
	clappy.beRepaired(2);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.beRepaired(4);
	clappy.beRepaired(4);
	clappy.beRepaired(4);
	clappy.attack("Bobby");
	clappy.attack("Bobby");
	clappy.attack("Bobby");
	clappy.attack("Bobby");
	clappy.beRepaired(2);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.attack("Bobby");
	clappy.beRepaired(2);
	return (0);
}

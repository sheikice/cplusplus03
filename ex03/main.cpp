#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap	diams;
	ScavTrap	scavy("scavy");
	FragTrap	fragy("fragy");
	ClapTrap	clappy("clappy");

	std::cout << std::endl;
	//
	scavy.attack("bernard");
	fragy.attack("bernard");
	clappy.attack("bernard");
	//
	std::cout << std::endl;
	std::cout << "======= DIAMOND ======= "<< std::endl;
	diams.whoAmI();
	diams.attack("eclair");
	diams.guardGate();
	diams.highFivesGuys();
	// diams.takeDamage(10);
	// diams.beRepaired(10);
	std::cout << std::endl;
	return (0);
}

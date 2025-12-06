#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << std::endl;
		std::cout << "======= CLAP ======= "<< std::endl;
		ClapTrap	clappy("clappy");

		std::cout << std::endl;
		clappy.attack("someone");
	}
	{
		std::cout << std::endl;
		std::cout << "======= SCAV ======= "<< std::endl;
		ScavTrap	scavy("scavy");

		std::cout << std::endl;
		scavy.attack("someone");
	}
	{
		std::cout << std::endl;
		std::cout << "======= FRAG ======= "<< std::endl;
		FragTrap	fragy("fragy");

		std::cout << std::endl;
		fragy.attack("someone");
	}
	{
		std::cout << std::endl;
		std::cout << "======= DIAMOND ======= "<< std::endl;
		DiamondTrap	diams("diams");
		std::cout << std::endl;
		diams.whoAmI();
		diams.attack("eclair");
		diams.guardGate();
		diams.highFivesGuys();
		// diams.takeDamage(10);
		// diams.beRepaired(10);
		std::cout << std::endl;
	}
	return (0);
}

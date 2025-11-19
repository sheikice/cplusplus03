#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap	scavy("Berangere");

	scavy.attack("Bobby");
	scavy.attack("Bobby");
	scavy.attack("Bobby");
	scavy.beRepaired(20);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.beRepaired(40);
	scavy.beRepaired(40);
	scavy.beRepaired(40);
	scavy.attack("Bobby");
	scavy.attack("Bobby");
	scavy.attack("Bobby");
	scavy.attack("Bobby");
	scavy.beRepaired(20);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.attack("Bobby");
	scavy.beRepaired(20);
	scavy.guardGate();

	FragTrap	fraggy("Bernadette");

	fraggy.attack("Bobby");
	fraggy.attack("Bobby");
	fraggy.attack("Bobby");
	fraggy.beRepaired(20);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.beRepaired(40);
	fraggy.beRepaired(40);
	fraggy.beRepaired(40);
	fraggy.attack("Bobby");
	fraggy.attack("Bobby");
	fraggy.attack("Bobby");
	fraggy.attack("Bobby");
	fraggy.beRepaired(20);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.attack("Bobby");
	fraggy.beRepaired(20);
	fraggy.highFivesGuys();
	return (0);
}

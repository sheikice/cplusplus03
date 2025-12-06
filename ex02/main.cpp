#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clappy");

	clappy.attack("someone");
	clappy.attack("someone");
	clappy.attack("someone");
	clappy.beRepaired(2);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.beRepaired(4);
	clappy.beRepaired(4);
	clappy.beRepaired(4);
	clappy.attack("someone");
	clappy.attack("someone");
	clappy.attack("someone");
	clappy.attack("someone");
	clappy.beRepaired(2);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.takeDamage(3);
	clappy.attack("someone");
	clappy.beRepaired(2);

	ScavTrap	scavy("scavy");

	scavy.attack("someone");
	scavy.attack("someone");
	scavy.attack("someone");
	scavy.beRepaired(20);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.beRepaired(40);
	scavy.beRepaired(40);
	scavy.beRepaired(40);
	scavy.attack("someone");
	scavy.attack("someone");
	scavy.attack("someone");
	scavy.attack("someone");
	scavy.beRepaired(20);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.takeDamage(30);
	scavy.attack("someone");
	scavy.beRepaired(20);
	scavy.guardGate();

	FragTrap	fraggy("fraggy");

	fraggy.attack("someone");
	fraggy.attack("someone");
	fraggy.attack("someone");
	fraggy.beRepaired(20);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.beRepaired(40);
	fraggy.beRepaired(40);
	fraggy.beRepaired(40);
	fraggy.attack("someone");
	fraggy.attack("someone");
	fraggy.attack("someone");
	fraggy.attack("someone");
	fraggy.beRepaired(20);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.takeDamage(30);
	fraggy.attack("someone");
	fraggy.beRepaired(20);
	fraggy.highFivesGuys();
	return (0);
}

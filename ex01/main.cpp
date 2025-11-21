#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Bernard");
	ScavTrap	scavy("Johnson");
	ClapTrap	fakeScavy = clappy;
	ScavTrap	trueScavy(scavy);
	ScavTrap	noname;

	noname = trueScavy;
	scavy.guardGate();
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
	fakeScavy.beRepaired(2);
	trueScavy.beRepaired(2);
	noname.attack("mdr");
	return (0);
}

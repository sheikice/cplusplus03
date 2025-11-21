#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	_name = "nameless";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_maxHitPoints = _hitPoints;
	std::cout << "\033[1;32m" << "DiamondTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\033[1;32m" << "DiamondTrap "
		<< this->_name << " is constructed."
		<< "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[1;31m" << "DiamondTrap "
		<< _name << " is destroyed."
		<< "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	_maxHitPoints = _hitPoints;
	std::cout << "\033[1;32m"
		<< "DiamondTrap " << other._name << " is constructed by copy."
		<< "\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "\033[1;29m" << "DiamondTrap " << other._name << " is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_maxHitPoints = _hitPoints;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout
		<< "DiamondTrap's name is " << _name
		<< " and it's ClapTrap's name is " << ClapTrap::_name
		<< std::endl;
}

void DiamondTrap::attack(const std::string& name)
{
	ScavTrap::attack(name);
}

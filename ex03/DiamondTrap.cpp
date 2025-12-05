#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("nameless_clap_name"), ScavTrap(), FragTrap(), _name("nameless")
{
	_hitPoints = FragTrap::_DEFAULT_HP;
	_energyPoints = ScavTrap::_DEFAULT_EP;
	_attackDamage = FragTrap::_DEFAULT_AD;
	_maxHitPoints = _hitPoints;
	std::cout << "\033[1;32m" << "DiamondTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name):
	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	_hitPoints = FragTrap::_DEFAULT_HP;
	_energyPoints = ScavTrap::_DEFAULT_EP;
	_attackDamage = FragTrap::_DEFAULT_AD;
	_maxHitPoints = _hitPoints;
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

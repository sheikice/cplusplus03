#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap()
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m" << "ScavTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m" << "ScavTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;31m" << "ScavTrap "
		<< _name << " is destroyed."
		<< "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	_maxHitPoints = _hitPoints;
	std::cout << "\033[1;32m"
		<< "ScavTrap " << other._name << " is constructed by copy."
		<< "\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "\033[1;29m" << "ScavTrap " << other._name << " is assigned."
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

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ScavTrap " << _name
			<< " is dead. It can't attack anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "ScavTrap " << _name
			<< " don't have enough energy to attack " << target
			<< "." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	std::cout
		<< "ScavTrap " << _name
		<< "\033[1;31m"
		<< " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< "\033[0m" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ScavTrap " << _name
			<< " is dead. It can't be in Gate keeper mode." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "ScavTrap " << _name
			<<  " don't have enough energy to be in Gate keeper mode." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	std::cout
		<< "ScavTrap " << _name
		<< "\033[1;36m"
		<< " is in Gate keeper mode."
		<< "\033[0m" << std::endl;

}

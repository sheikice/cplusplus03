#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ScavTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ScavTrap " << _name
		<< "\033[1;31m"
		<< " takes " << amount
		<< " points of damage!"
		<< "\033[0m" << " (" << _hitPoints << " HP left)."
		<< std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ScavTrap " << _name
			<< " is dead. It can't be repaired anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "ScavTrap " << _name
			<<  " don't have enough energy to be repaired." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	if(_hitPoints == _maxHitPoints)
	{
		std::cout << "ScavTrap " << _name << " is already full HP."
			<< std::endl;
	}
	else
	{
		_hitPoints += amount;
		if (_hitPoints > _maxHitPoints)
			_hitPoints = _maxHitPoints;
		std::cout << "ScavTrap " << _name
			<< "\033[1;36m"
			<< " is repaired, restoring " << amount << " hit points."
			<< "\033[0m" << " (" << _hitPoints << " HP left)."
			<< std::endl;
	}
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

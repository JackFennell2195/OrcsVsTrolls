#include <iostream>
#include "Character.h"




int Orc::orcSelect()
{
	int orcPick = 0;
	while (orcPick < 1 || orcPick > 3)
	{
		std::cout << "Please enter a number between 1 and 3 to select " << std::endl;
		std::cout << "which orc you want to use to fight." << std::endl;
		std::cout << std::endl;
		std::cout << "Orc 1 is the highest hp of the three but has low attack" << std::endl;
		std::cout << std::endl;
		std::cout << "Orc 2 has the highest defence but lowest spell power" << std::endl;
		std::cout << std::endl;
		std::cout << "Orc 3 has the highest spell power but the lowest hp " << std::endl;
		std::cin >> orcPick;

		switch (orcPick)
		{
		case 1:
			std::cout << "This is Orc number one "<<std::endl;
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "This is Orc number two " << std::endl;
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "This is Orc number three " << std::endl;
			std::cout << std::endl;
			break;
		default:
			std::cout << "This is not a valid option" << std::endl;
			break;
		}
	}

	return orcPick;
}

void Orc::setStats(std::string greet, std::string name, float hp, float dmg, float spl, float shd, float def, bool alve)
{
	m_greeting = greet;
	m_name = name;
	m_hp = hp;
	m_damage = dmg;
	m_spell = spl;
	m_shield = shd;
	m_defence = def;
	m_alive = true;

}



int Troll::trollSelect()
{
	int trollPick = 0;
	while (trollPick < 1 || trollPick > 3)
	{
		std::cout << "Please enter a number between 1 and 3 to select " << std::endl;
		std::cout << "which troll you want to use to fight." << std::endl;
		std::cout << std::endl;
		std::cout << "Troll 1 is the strongest of the three but has low hp" << std::endl;
		std::cout << std::endl;
		std::cout << "Troll 2 has the highest spell power but has low defence" << std::endl;
		std::cout << std::endl;
		std::cout << "Troll 3 has the highest hp but low shield spell " << std::endl;
		
		std::cin >> trollPick;

		switch (trollPick)
		{
		case 1:
			std::cout << "This is Troll number one " << std::endl;
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "This is Troll number two " << std::endl;
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "This is Troll number three " << std::endl;
			std::cout << std::endl;
			break;
		default:
			std::cout << "This is not a valid option" << std::endl;
			break;
		}
	}

	return trollPick;
}

void Troll::setStats(std::string greet, std::string name, float hp, float dmg, float spl, float shd, float def, bool alve)
{
	m_greeting = greet;
	m_name = name;
	m_hp = hp;
	m_damage = dmg;
	m_spell = spl;
	m_shield = shd;
	m_defence = def;
	m_alive = true;

}
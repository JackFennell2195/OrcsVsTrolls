#include <iostream>
#include "string"
#include "Character.h"



void intro()
{
	std::cout << "  Welcome to orcs vs trolls, a turn based text game." << std::endl;
	std::cout << "  You will play as either orcs or trolls.  " << std::endl;
	std::cout << "  Pick which faction side to fight on." << std::endl;
	system("pause");
	system("cls");
	
}

int factionPick()
{
	int faction = 0;
	while (faction < 1 || faction > 2)
	{
		std::cout << "  Please select which faction you want to " << std::endl;
		std::cout << "  fight for. Orcs have higher health and " << std::endl;
		std::cout << "  defence, while trolls have higher attack. " << std::endl;
		std::cout << "  Select 1 for Orcs and 2 for Trolls. " << std::endl;
		std::cin >> faction;
		system("cls");
		switch (faction)
		{
		case 1:
			std::cout << "  You have selected to fight for the orcs" << std::endl;
			break;
		case 2:
			std::cout << "  You have selected to fight for the trolls" << std::endl;
			break;
		default:
			std::cout << "  This is not a valid option" << std::endl;
			break;
		}
	}

	return faction;
}

void battle()
{
	int battleChoice = 0;
	while (battleChoice < 1 || battleChoice > 3)
	{
		std::cout << "Please enter a number between 1 and 3 to select " << std::endl;
		std::cout << "what you want to do attack,spell or shield." << std::endl;
		std::cout << std::endl;
		std::cin >> battleChoice;
		if (battleChoice == 1)
		{
			
		}
		else if (battleChoice == 2)
		{

		}
		else
		{

		}
	}
}

int main()
{
	
	Character *player[3];
	Character *enemy[3];
	Orc orc;
	Troll troll;
	int faction = 0;
	int orcPick = 0;
	int trollPick = 0;

	
	

	intro();
	
	faction = factionPick();

	if (faction == 1)
	{
		orcPick = orc.orcSelect();
	}
	
	if (faction == 2)
	{
		 trollPick = troll.trollSelect();
	}

	//If Orc is the players choice
	if (faction == 1)
	{
		switch (orcPick)
		{
		case 1:

			player[0] = new Orc;
			player[0]->setStats(
				"Hello there master!! My name is ",
				"Urzim",
				50,
				15,
				20,
				20,
				20,
				true);

			enemy[0] = new Troll;
			enemy[0]->setStats(

				"Hello there Enemy!! My name is",
				"Korthil",
				15,
				50,
				20,
				20,
				20,
				true
			);
			player[0]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[0]->display();
			break;

		case 2:
			player[1] = new Orc;
			player[1]->setStats(
		
			"Hello there master!! My name is ",
			"Peloji",
			20,
			20,
			15,
			20,
			50,
			true);
			enemy[1] = new Troll;
			enemy[1]->setStats(

				"Hello there Enemy!! My name is",
				"Azuk",
				15,
				20,
				50,
				20,
				20,
				true
			);
			player[1]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[1]->display();
			break;
		case 3:

			player[2] = new Orc;
			player[2]->setStats(

				"Hello there master!! My name is ",
				"Duguga",
				15,
				20,
				50,
				20,
				20,
				true);

			enemy[2] = new Troll;
			enemy[2]->setStats(

				"Hello there Enemy!! My name is",
				"Ushamog",
				50,
				20,
				20,
				15,
				20,
				true
			);
			player[2]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[2]->display();
			break;
		default:
			break;
		}
			
			
		
	}

	//If Troll is the players choice
	else if (faction == 2)
	{
		switch (trollPick)
		{
		case 1:

			player[0] = new Troll;
			player[0]->setStats(
				"Hello there master!! My name is ",
				"Korthil",
				15,
				50,
				20,
				20,
				20,
				true);
			enemy[0] = new Orc;
			enemy[0]->setStats(
				"Hello there Enemy!! My name is",
				"Urzim",
				50,
				15,
				20,
				20,
				20,
				true
			);
			player[0]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[0]->display();
			break;

		case 2:
			player[1] = new Troll;
			player[1]->setStats(

				"Hello there master!! My name is ",
				"Azuk",
				50,
				50,
				50,
				50,
				50,
				true
			);
			enemy[1] = new Orc;
			enemy[1]->setStats(

				"Hello there Enemy!! My name is",
				"Peloji",
				50,
				50,
				50,
				50,
				50,
				true);
			player[1]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[1]->display();
			break;

		case 3:
			player[2] = new Troll;
			player[2]->setStats(

				"Hello there master!! My name is ",
				"Ushamog",
				50,
				50,
				50,
				50,
				50,
				true
			);
			enemy[2] = new Orc;
			enemy[2]->setStats(

				"Hello there Enemy!! My name is",
				"Duguga",
				50,
				50,
				50,
				50,
				50,
				true);
			player[2]->display();
			std::cout << std::endl;
			std::cout << "And this is your oppenent" << std::endl;
			std::cout << std::endl;
			enemy[2]->display();
			break;

		default:
			break;
		}
			
	}
	system("pause");
	system("cls");
	battle();

	
	system("pause");
}








#include "Menu.h"

Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("font/Candy_Beans.ttf"))
		printf("Can't load");

	//Play
	menu[0].setFont(font);
	menu[0].setFillColor(Color::Red);
	menu[0].setString("PLAY");
	menu[0].setCharacterSize(40);
	menu[0].setPosition(500, 100);

	//Score
	menu[1].setFont(font);
	menu[1].setFillColor(Color::White);
	menu[1].setString("SCORE");
	menu[1].setCharacterSize(40);
	menu[1].setPosition(500, 100);

	//Quit
	menu[2].setFont(font);
	menu[2].setFillColor(Color::White);
	menu[2].setString("QUIT");
	menu[2].setCharacterSize(40);
	menu[2].setPosition(500, 100);

	mainMenuSelected = 0;
}

Menu::~Menu()
{

}

void Menu::Draw(RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(menu[i]);
	}
}


void Menu::moveUp()
{
	if (mainMenuSelected - 1 >= -1)
	{
		menu[mainMenuSelected].setFillColor(Color::White);

		mainMenuSelected--;
		if (mainMenuSelected == -1)
		{
			mainMenuSelected = 2;
		}
		menu[mainMenuSelected].setFillColor(Color::Blue);
	}
}

void Menu::moveDown()
{

	if (mainMenuSelected + 1 <= Max_menu)
	{
		menu[mainMenuSelected].setFillColor(Color::White);

		mainMenuSelected++;
		if (mainMenuSelected == 3)
		{
			mainMenuSelected = 0;
		}
		menu[mainMenuSelected].setFillColor(Color::Blue);
	}
}

#pragma once
#include <SFML/Graphics.hpp>
#define Max_menu 3

using namespace sf;
using namespace std;
                                      
class Menu
{
public:
	Menu(float width, float height);

	void Draw(RenderWindow& window);
	void moveUp();
	void moveDown();
	int MenuPressed()
	{
		return mainMenuSelected;
	}
	~Menu();

private:
	int mainMenuSelected;
	Font font;
	Text menu[Max_menu];
};


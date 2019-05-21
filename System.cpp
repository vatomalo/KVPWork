#include "System.h"

System::System()
{
//	init();
	Set_SystemFont("ancient.ttf");
}

void System::Set_SystemFont(std::string filename)
{

    SystemFont.loadFromFile(filename);
	text.setFont(SystemFont);

}

sf::Font System::Get_SystemFont()
{
    
	return sf::Font(SystemFont);

}
sf::Text System::print(sf::String String, int size, int positionX, int positionY)
{
	text.setString(String);
	//text.SetText(String);
	text.setCharacterSize(size);
	text.setPosition(positionX, positionY);
	//text.setFillColor(sf::Color::Red);
	//text.setStyle(sf::Text::Bold /*| sf::Text::Underlined*/);
	//text = Textbox
	return text;
	//Textbox(text);
}

/*sf::Sprite System::MySprite(std::string filename)
{
    sf::Texture texture;
    texture.loadFromFile(filename);

    return sf::Sprite(texture);
} // error: the texture is destroyed here*/
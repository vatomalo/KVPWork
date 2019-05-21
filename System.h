#include "Layer.cpp"

class System: public Layer
{
public:

std::string Answer;

System();

void Set_SystemFont(std::string filename);
sf::Font Get_SystemFont();

sf::Text print(sf::String String, int size, int positionX, int positionY);

//sf::Sprite MySprite(std::string filename);

};

System mainframe;
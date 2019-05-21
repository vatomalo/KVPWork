#include "Global.cpp"

class Layer: public Global
{
public:

// A regular RenderWindow
sf::RenderWindow main_Window;

// Declare a sprite and a Texture for the background
sf::Sprite MainLayer, BackgroundLayer, SpriteLayer1, SpriteLayer2, SpriteLayer3, SpriteLayer4, SpriteLayer5, SpriteLayer6;

sf::Texture MainTexture, BackgroundTexture, TextureLayer1, TextureLayer2, TextureLayer3, TextureLayer4, TextureLayer5, TextureLayer6;

sf::Font SystemFont;

sf::Text text, TextLayer7;

int Number;

Layer();

void Set_Layer(sf::Sprite sprite, int number);

void Set_Layer(std::string filename, int number);

sf::Text Textbox(sf::Text text);

sf::Sprite Get_Layer(int number);

void DrawLayers();


};
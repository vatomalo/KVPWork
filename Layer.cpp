#include "Layer.h"

Layer::Layer()
{

    Position.x = 0;
    Position.y = 0;

}

void Layer::Set_Layer(sf::Sprite sprite, int number)
{

	if (number ==0) BackgroundLayer = sprite;
	
	if (number ==1) SpriteLayer1 = sprite;
	
	if (number ==2) SpriteLayer2 = sprite;
	
	if (number ==3) SpriteLayer3 = sprite;
	
	if (number ==4) SpriteLayer4 = sprite;
	
	if (number ==5) SpriteLayer5 = sprite;
	
	if (number ==6) SpriteLayer6 = sprite;
	
}

void Layer::Set_Layer(std::string filename, int number)
{

	if (number ==0) {BackgroundTexture.loadFromFile(filename);BackgroundLayer.setTexture(BackgroundTexture);}
	
	if (number ==1) {TextureLayer1.loadFromFile(filename);SpriteLayer1.setTexture(TextureLayer1);}
	
	if (number ==2) {TextureLayer2.loadFromFile(filename);SpriteLayer2.setTexture(TextureLayer2);}

	if (number ==3) {TextureLayer3.loadFromFile(filename);SpriteLayer3.setTexture(TextureLayer3);}
	
	if (number ==4) {TextureLayer4.loadFromFile(filename);SpriteLayer4.setTexture(TextureLayer4);}
	
	if (number ==5) {TextureLayer5.loadFromFile(filename);SpriteLayer5.setTexture(TextureLayer5);}
	
	if (number ==6) {TextureLayer6.loadFromFile(filename);SpriteLayer6.setTexture(TextureLayer6);}
	

}


sf::Text Layer::Textbox(sf::Text text)
{


return text;


}

sf::Sprite Layer::Get_Layer(int number)
{	if (number ==0) {return BackgroundLayer;}
	
	if (number ==1) {return SpriteLayer1;}
	
	if (number ==2) {return SpriteLayer2;}

	if (number ==3) {return SpriteLayer3;}
	
	if (number ==4) {return SpriteLayer4;}
	
	if (number ==5) {return SpriteLayer5;}
	
	if (number ==6) {return SpriteLayer6;}
}

void Layer::DrawLayers()
{
    main_Window.draw(BackgroundLayer);
    main_Window.draw(SpriteLayer1);
	main_Window.draw(SpriteLayer2);
    main_Window.draw(SpriteLayer3);
	main_Window.draw(SpriteLayer4);
    main_Window.draw(SpriteLayer5);
    main_Window.draw(SpriteLayer6); 
	main_Window.draw(text);

}
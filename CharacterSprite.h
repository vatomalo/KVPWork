#include "Entity.cpp"


class CharacterSprite: public Entity
{

public:
sf::Sprite HeadSprite, TorsoSprite, LegsSprite, Sprite;
//sf::Sprite &Sprite;
//
int x,y,w,h;
 
// And a texture
sf::Texture Texture;

sf::Sprite getSprite();

CharacterSprite();

//Animation animLeft(sf::Sprite);



};
#include "CharacterSprite.h"
#include "Anim.cpp"
sf::Sprite animSprite;

CharacterSprite::CharacterSprite()
{
	int w = 32;
	int h = 64;
/*	
	Animation animLeft(Sprite);
	Animation animRight(Sprite);
	Animation animUp(Sprite);
	Animation animDown(Sprite);

	animLeft.addFrame({sf::IntRect(64,128,w,h), 0.1});
	animRight.addFrame({sf::IntRect(64,128,w,h), 0.1});
	animUp.addFrame({sf::IntRect(0,0,w,h), 0.1});
	animDown.addFrame({sf::IntRect(0,0,w,h), 0.1});*/
}

sf::Sprite CharacterSprite::getSprite()
{
    return Sprite;
}

/* Animation animRight(Sprite);

 Animation animUp(Sprite);

 Animation animDown(Sprite);

/*Animate()
{



}*/
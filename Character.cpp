#include "Character.h"

Character::Character()
{

    // How fast does player move?
    Speed = 400;
 
   // Associate a texture with the sprite
    Texture.loadFromFile("male.png", sf::IntRect(0, 0, 32, 64));
    Sprite.setTexture(Texture);     
    // Set the player's starting position
    Position.x = 0;
    Position.y = 0;

	/*Animation anim(player.Sprite);
	
	anim.addFrame({sf::IntRect(64,128,w,h), 0.1});
	anim.addFrame({sf::IntRect(64,128,w,h), 0.1});
	anim.addFrame({sf::IntRect(0,0,w,h), 0.1});
	anim.addFrame({sf::IntRect(0,0,w,h), 0.1});
	*/
}

/*Character::Character(std::string gender)
{

	Gender=gender;

    // How fast does player move?
    Speed = 400;
 
   // Associate a texture with the sprite
    Texture.loadFromFile(Gender, sf::IntRect(0, 0, 32, 64));
    CharacterSprite.setTexture(Texture);     
 
    // Set the player's starting position
    Position.x = 0;
    Position.y = 0;
}*/


/*void Character::CharacterCreation()
{
		Set_Layer("Background.png",0);
        mainframe.print("Pick your Gender",24,0,0);
        mainframe.print("\n 1. Male \n 2. Female \n 3. Child",24,0,0);
        std::cin>>Class;
        print("\n\nYou are a ",24,0,0);
        if (Class==1) {print("Male",24,0,0); STR+=3;CON+=2;Gender = "male.png";}
        if (Class==2) {print("Female",24,0,0); SPR+=3;MAG+=2;Gender = "female.png";}
        if (Class==3) {print("Child",24,0,0);AGI+=3;DEX+=2;Gender = "child.png";}
		print("\n\n",24,0,0);
		showstats();
		print("\n\n",24,0,0);

}*/

void Character::rolldice(int number)
{
        STR=rand() %number;
        AGI=rand() %number;
        CON=rand() %number;
        DEX=rand() %number;
        SPR=rand() %number;
        MAG=rand() %number;
        CHR=rand() %number;
}

void Character::showstats()
{
        print("\n\n STATS \n\n",24,0,0);
        std::cout<<"Strength="<<STR<<"\nAgility= "<<AGI<<"\nConstitution= "<<CON<<"\nDexterity= "<<DEX<<"\nMagic= "<<MAG<<"\nSpirit= "<<SPR<<"\nCharisma= "<<CHR;
        print("\n\n",24,0,0);
}

int Character::pickclass(int Class)
{
        print("Pick your class",24,0,0);
        print("\n 1. Knight \n 2. Mage \n 3. Rogue \n 4. Priest\n\n",24,0,0);
        std::cin>>Class;
        print("\n\nYou are a ",24,0,0);
        if (Class==1) {print("Knight",24,0,0); STR+=10;CON+=10;}
        if (Class==2) {print("Mage",24,0,0); SPR+=10;MAG+=10;}
        if (Class==3) {print("Rogue",24,0,0);AGI+=10;DEX+=10;}
        if (Class==4) {print("Priest",24,0,0);SPR+=10;CHR+=10;}
	print("\n\n",24,0,0);
	showstats();
	print("\n\n",24,0,0);
	return Class;
}

void Character::tryagain()
{int trying =1;
	while(trying==1)
{
        print("\nRoll dice again?\n Yes or No\n",24,0,0);
        std::cin>>Answer; if (Answer =="y") {rolldice(10);showstats();} if (Answer =="n"){trying= 0;}
}
}

void Character::moveLeft()
{
    LeftPressed = true;
//	anim(update(elapsed);
}
 
void Character::moveRight()
{
    RightPressed = true;
//	animRight();
}

void Character::moveUp()
{
    UpPressed = true;
//	animUp();
	
}
 
void Character::moveDown()
{
    DownPressed = true;
//	animDown();
}
 
void Character::stopLeft()
{
    LeftPressed = false;
}

void Character::stopRight()
{
    RightPressed = false;
}
 
void Character::stopUp()
{
    UpPressed = false;
}

void Character::stopDown()
{
    DownPressed = false;
}
 
// Move Player based on the input this frame,
// the time elapsed, and the speed
void Character::update(float elapsedTime)
{
    if (RightPressed)
    {
		
        Position.x += Speed * elapsedTime;
    }
 
    if (LeftPressed)
    {
        Position.x -= Speed * elapsedTime;
    }
	
	    if (UpPressed)
    {
        Position.y -= Speed * elapsedTime;
    }
 
    if (DownPressed)
    {
        Position.y += Speed * elapsedTime;
    }
 
    // Now move the sprite to its new position
    Sprite.setPosition(Position);   
 
}

/*void displayhealth()
{

        HP=EXP*CONST/2;
        std::cout<<"\nHealth"<<HP;
        std::cout<<"\nMana"<<MANA;
        std::cout<<"\nXP"<<EXP;
}*/
#include "CharacterSprite.cpp"

class Character: public CharacterSprite
{
private:
 
// Which direction(s) is the Character currently moving in
bool LeftPressed;
bool RightPressed;
bool UpPressed;
bool DownPressed;
// Character's speed in pixels per second
float Speed;

public:

std::string Name;

std::string Gender;

CharacterSprite Characterimage;

//void anim(Animation anim);

int Class;

int EXP, STR, AGI, MAG, CON, DEX, SPR, CHR, HP, MANA;

Character();

Character(std::string gender);

//virtual ~Character();

void CharacterCreation();

void rolldice(int number);

void showstats();

int pickclass(int Class);

void tryagain();
 
// Move Character in a specific direction
void moveLeft();
 
void moveRight();

void moveUp();
 
void moveDown();
 
// Stop Character moving in a specific direction
void stopLeft();
 
void stopRight();

void stopUp();
 
void stopDown();
 
// We will call this function once every frame
void update(float elapsedTime);
 

};

Character player;
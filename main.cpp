#include <iostream>
#include <string>
#include <cstdlib>
#include <SFML/Graphics.hpp>

std::string Name;

std::string Answer;
std::string filename;
sf::Texture texture;
sf::Texture background;
sf::RenderTexture renderTexture;

int Class=0;

int EXP=0;
int STR=0;
int AGI=0;
int MAG=0;
int CONST=0;
int DEX=0;
int SPR=0;
int CHR=0;
int HP=0;
int MANA=0;

void rolldice()
{
        STR=rand() %10;
        AGI=rand() %10;
        CONST=rand() %10;
        DEX=rand() %10;
        SPR=rand() %10;
        MAG=rand() %10;
        CHR=rand() %10;
}

void showstats()
{
        std::cout<<"\n\n STATS \n\n";
        std::cout<<"Strength="<<STR<<"\nAgility= "<<AGI<<"\nConstitution= "<<CONST<<"\nDexterity= "<<DEX<<"\nMagic= "<<MAG<<"\nSpirit= "<<SPR<<"\nCharisma= "<<CHR;
        std::cout<<"\n\n";
}

void pickclass()
{
        std::cout<<"Pick your class";
        std::cout<<"\n 1. Knight \n 2. Mage \n 3. Rogue \n 4. Priest\n\n";
        std::cin>>Class;
        std::cout<<"\n\nYou are a ";
        if (Class==1) {std::cout<<"Knight"; STR+=10;CONST+=10;}
        if (Class==2) {std::cout<<"Mage"; SPR+=10;MAG+=10;}
        if (Class==3) {std::cout<<"Rogue";AGI+=10;DEX+=10;}
        if (Class==4) {std::cout<<"Priest";SPR+=10;CHR+=10;}
	std::cout<<"\n\n";
	showstats();
	std::cout<<"\n\n";
}

void tryagain()
{int trying =1;
	while(trying==1)
{
        std::cout<<"\nRoll dice again?\n Yes or No\n";
        std::cin>>Answer; if (Answer =="y") {rolldice();showstats();} if (Answer =="n"){trying= 0;}
}
}

void displayhealth()
{

        HP=EXP*CONST/2;
        std::cout<<"\nHealth"<<HP;
        std::cout<<"\nMana"<<MANA;
        std::cout<<"\nXP"<<EXP;
}

int display()
{

filename = "image.png";

background.loadFromFile(filename);

if (!texture.loadFromFile(filename))
{
    // error...
}

}

int main() 
{

	std::cout<<"Whats your name? \n\n";
	std::cin>>Name;
	std::cout<<"\nYour name is "<<Name<<"\n\n";
	std::cin.get();
	rolldice();
	std::cin.get();
	showstats();
	std::cin.get();
	tryagain();
	pickclass();
	
return 0;
};

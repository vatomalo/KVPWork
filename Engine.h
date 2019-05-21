#pragma once
#include <SFML/Graphics.hpp>
#include "Character.cpp"

using namespace sf;
 
class Engine : public System
{
private:
	
    // An instance of System & Player
//    System mainframe;
//	Character player;

    // Private functions for internal use only
    void input();
    void update(float dtAsSeconds);
    void draw();
 
public:
    // The Engine constructor
    Engine();
 
    // start will call all the private functions
    void start();
		void CharacterCreation();
 
};
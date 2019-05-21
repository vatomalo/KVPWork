#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include "Engine.cpp"
 
int main()
{
    // Declare an instance of Engine
    Engine engine;
 
    // Start the engine
    engine.start();
	engine.CharacterCreation();

    // Quit in the usual way when the engine is stopped
    return 0;
}
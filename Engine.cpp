#include "Engine.h"
#include "Input.cpp"
#include "Update.cpp"
#include "Draw.cpp"
 
void Engine::CharacterCreation()
{
		Set_Layer("Background.png",0);
		Set_Layer(player.getSprite(), 3);
        print("Pick your Gender",24,0,0);
        print("\n 1. Male \n 2. Female \n 3. Child",24,0,0);
        std::cin>>player.Class;
        print("\n\nYou are a ",24,0,0);
        if (player.Class==1) {print("Male",24,0,0); player.STR+=3;player.CON+=2;player.Gender = "male.png";}
        if (player.Class==2) {print("Female",24,0,0); player.SPR+=3;player.MAG+=2;player.Gender = "female.png";}
        if (player.Class==3) {print("Child",24,0,0);player.AGI+=3;player.DEX+=2;player.Gender = "child.png";}
		print("\n\n",24,0,0);
		player.showstats();
		print("\n\n",24,0,0);

}

Engine::Engine()
{
    // Get the screen resolution and create an SFML window and View
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
 
    main_Window.create(VideoMode(resolution.x, resolution.y),
        "Simple Game Engine",
        Style::Fullscreen);
}
 
void Engine::start()
{
    // Timing
    Clock clock;
	
//	Set_Layer("Background.png", 0);
	//player.CharacterCreation();
    while (main_Window.isOpen())
    {
        // Restart the clock and save the elapsed time into dt
        Time dt = clock.restart();
 
        // Make a fraction from the delta time
        float dtAsSeconds = dt.asSeconds();
		
        input();
        update(dtAsSeconds);
        draw();
    }
}
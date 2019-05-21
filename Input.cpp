void Engine::input()
{
    // Handle the player quitting
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        main_Window.close();
    }
 
    // Handle the player moving
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        player.moveLeft();
		mainframe.print("Left",24,rand() %100,100);
    }
    else
    {
        player.stopLeft();
    }
 
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        player.moveRight();
    }
    else
    {
        player.stopRight();
    }                       
	
	    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        player.moveUp();
    }
    else
    {
        player.stopUp();
    }
 
    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        player.moveDown();
    }
    else
    {
        player.stopDown();
    }   
 
}
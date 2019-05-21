void Engine::draw()
{
    // Rub out the last frame
    main_Window.clear(Color::Black);
	//Set_Layer("Background.png",0);
	//Set_Layer(player.getSprite(),3);
	//print("\n\nYou are a ",24,0,0);
    // Draw the background
//	Animation anim(player.Sprite);
//	player.animleft.update(player.elapsed);


	DrawLayers();
//	main_Window.draw(player.getSprite());
//	main_Window.draw(player2.getSprite());
	//main_Window.draw(mainframe.TextLayer7);
 
    // Show everything we have just drawn
    main_Window.display();
}
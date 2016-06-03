#include "genesis.h"
#include <gfx.h>
#include "writer.h"
#include "transition_helper.h"

/* 
Resistance 2016

Code : Fra
Music : Nainain
Gfx : ...
Framework : SGDK
*/

u8 RSE_LogoScreen(void);
void RSE_physics_simulation(u8 first_sim, u8 last_sim);
void RSE_plasma(u8 mode);
void RSE_plasma_init(void);
void RSE_poem(void);
void RSE_gridTileAnimation();
void RSE_vectorBallFX();
void displayFullScreenPicture();

u16 vramIndex;
u16 fontIndex;
u8 framerate;
char *demo_strings;

int main()
{
	vramIndex = TILE_USERINDEX;
	framerate = 60;
	if (SYS_isPAL())
		framerate = 50;

	RSE_plasma_init();

	// RSE_poem();

	RSE_turn_screen_to_black();
// RSE_vectorBallFX();
	/*	
		Load the font tiles
		that will be used during all the demo
	*/
	fontIndex = RSE_writerSetup();

	RSE_pause(RSE_FRAMES(20));

	/* RSE Logo */
	RSE_LogoScreen();

	RSE_plasma(0);

	RSE_vectorBallFX();

	fontIndex = RSE_writerSetup();

	/* Demo !!! */
	RSE_physics_simulation(0, 1);

	/* Tile grid */
	RSE_gridTileAnimation();

	/* Demo !!! */
	RSE_physics_simulation(2, 3);

	/* RSE Plasma */
	RSE_plasma(1);

	displayFullScreenPicture();	

	while(TRUE)
		VDP_waitVSync();

}

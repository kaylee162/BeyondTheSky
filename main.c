#include "gba.h"
#include "sprites.h"
#include "game.h"

/* DEV NOTES FOR THIS FILE:
 *
 * This is the main program loop.
 * It initializes the game once, then repeatedly reads input, updates game logic,
 * waits for VBlank, draws the current frame, and copies shadowOAM into real OAM.
 *
 * In the larger game:
 * main.c stays intentionally small. It does not know about levels, collision,
 * resources, or states directly. Those details are handled inside the game
 * module.
 */

unsigned short oldButtons;
unsigned short buttons;
OBJ_ATTR shadowOAM[128];

int main(void) {
    buttons = REG_BUTTONS;
    oldButtons = buttons;

    initGame();

    while (1) {
        oldButtons = buttons;
        buttons = REG_BUTTONS;

        updateGame();

        waitForVBlank();
        drawGame();
        DMANow(3, shadowOAM, OAM, 128 * 4);
    }

    return 0;
}
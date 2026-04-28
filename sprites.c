#include "sprites.h"

/* DEV NOTES FOR THIS FILE:
 *
 * This file contains shared sprite/OAM helpers.
 * Right now, its main job is hiding all sprite entries in shadowOAM before the
 * renderer chooses which sprites should be visible.
 *
 * In the larger game:
 * The renderer writes sprite attributes into shadowOAM, and main.c copies that
 * shadowOAM data into real OAM during VBlank.
 */

// Hides all sprites in the shadowOAM
void hideSprites() {
    int i;

    // Hide every sprite entry
    for (i = 0; i < 128; i++) {
        shadowOAM[i].attr0 = ATTR0_HIDE;
        shadowOAM[i].attr1 = 0;
        shadowOAM[i].attr2 = 0;
        shadowOAM[i].fill = 0;
    }
}
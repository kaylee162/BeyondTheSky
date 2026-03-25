# Beyond the Sky

## Overview
Beyond the Sky is a Game Boy Advance platformer built in Mode 0 where the player explores a peaceful home environment and a side-scrolling sky level. The core gameplay loop focuses on collecting resources, depositing them to grow a beanstalk, and progressing upward into the sky.

This project emphasizes smooth movement, simple mechanics, and a relaxing gameplay experience while still incorporating light platforming challenges.

---

## Controls

- D-Pad Left/Right → Move
- A → Jump
- UP / DOWN → Climb ladder (beanstalk)
- START → Pause / Resume
- SELECT → Toggle debug cheats (Milestone feature)

---

## Current Features (Milestone 1)

### Game States
- Start Screen
- Instructions Screen
- Home Level
- Sky Level (side-scrolling)
- Pause Screen
- Win / Lose Screens

### Core Mechanics
- Player movement with gravity and jumping
- Ladder climbing (beanstalk mechanic)
- Camera follows player in scrolling level
- Basic collision detection with world
- Hazard that resets player (lose condition)
- Collectible resource items in sky level
- Deposit system at home soil patch
- Beanstalk growth system (progression)

### Visual Systems
- Mode 0 tiled backgrounds
- Placeholder tiles and sprites
- Basic parallax cloud effect
- HUD text using font rendering

### Debug / Cheat Features
- Instant beanstalk growth toggle
- (Used for testing progression quickly)

---

## Gameplay Loop

1. Start in the Home Level
2. Travel to the Sky Level
3. Collect floating resources
4. Return to Home
5. Deposit resources at the soil patch
6. Grow the beanstalk
7. Climb higher to unlock progression

---

## Technical Details

- Built using Mode 0 (tile-based rendering)
- Multiple background layers (HUD + gameplay + parallax)
- Tilemap + collision map system
- Camera scrolling with world bounds
- Reuses and extends HW05 engine structure
- Written in C using devkitARM toolchain

---

## Project Structure

- `main.c` → Game loop and state machine
- `game.c / game.h` → Core gameplay logic
- `levels.c / levels.h` → Level setup and data
- `mode0.c / mode0.h` → Background rendering helpers
- `sprites.c / sprites.h` → Sprite/OAM handling
- `gba.c / gba.h` → Hardware abstraction
- `font.c / font.h` → Text rendering

---

## Planned Features (Final Submission)

### Gameplay Additions
- Multiple resource types with different effects
- Expanded sky level with more vertical progression
- Additional hazards (falling objects, enemies, wind zones)
- More structured win condition (reach final height / objective)

### Visual Improvements
- Full custom sprite sheet (player, items, environment)
- Polished tilemaps for both levels
- Improved parallax backgrounds (multiple layers)
- Animated tiles (clouds, collectibles, etc.)

### Mechanics Enhancements
- Smoother physics and jump tuning
- Improved ladder/beanstalk interaction
- Inventory or resource counter UI
- Sound effects (movement, collection, growth)

### UI / UX
- Refined start and instruction screens
- Clear HUD with resource tracking
- Better win/lose feedback

---

## Notes

- Placeholder graphics are currently used for development
- Focus for Milestone 1 is functionality over polish
- All major systems are implemented and ready for expansion

---

## Credits

Developed by Kaylee & Henry  
Georgia Tech - CS 2261 (Media Device Architecture)

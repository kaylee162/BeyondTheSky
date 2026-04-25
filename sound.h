#ifndef SOUND_H
#define SOUND_H

typedef struct {
    const signed char* data;
    int length;
    int frequency;
    int loops;
    int isPlaying;
    int duration;
    int vBlankCount;
} Sound;

extern Sound soundA;
extern Sound soundB;

void initSound(void);
void playSoundA(const signed char* data, int length, int frequency, int loops);
void playSoundB(const signed char* data, int length, int frequency, int loops);
void pauseSound(void);
void unpauseSound(void);
void stopSound(void);
void setupSounds(void);

#endif
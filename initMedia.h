//
//  initMedia.h
//  Cmusic
//
//  Created by Arthur dubois on 29/11/2021.
//

#ifndef initMedia_h
#define initMedia_h

#include "common.h"

#define SCREEN_WIDTH 1152
#define SCREEN_HEIGHT 648
#define FONT_SIZE 32


SDL_Renderer *renderer;
SDL_Window *window;
TTF_Font *gFont;
char mot[100][100];

typedef struct LTexture {
    SDL_Texture *mTexture;
    int mWidth;
    int mHeight;
} LTexture;

_Bool init(void);


_Bool loadMediaText(void);

#if defined(SDL_TTF_MAJOR_VERSION)
_Bool loadFromRenderedText(LTexture *ltexture, char textureText[]);
#endif


_Bool loadFromFile(char path[],LTexture *finalTexture);
void freeLtexture(LTexture *texture);
void renderLTexture(LTexture texture,  int x, int y, SDL_Rect *clip);


SDL_Texture* loadMediaTexture(char path[]);

// Texture for left menu
LTexture logoTexture,recSelected,homeTxt, homePng, newTxt, newPng, topTxt, topPng, playlistTxt, playlistPng, paramTxt, paramPng;

//Texture for bottom menu
LTexture background, play, stop, nextRight, nextLeft, randomMusic, replay, sound, point;

// Texture for viewport news
LTexture addNewText,voidImg, musicTitle, musicArtiste, musicDuration, textTags, nameTag, imgTag,timeAdd;

// Texture for viewport top
LTexture listenText, hashtag, title, artist, duration, views;


void initAllLTexture(void);

void freeAllTexture(void);
//Gets LTexture dimensions
int getWidth(LTexture *texture);
int getHeight(LTexture *texture);

#endif /* initMedia_h */

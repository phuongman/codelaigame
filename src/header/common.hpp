#pragma once
#include <iostream>

#define endl '\n'
const int SCREEN_WIDTH = 1400;
const int SCREEN_HEIGHT = 800;

const int XPOS = (SCREEN_WIDTH - 350) / 2;
const int YPOS = (SCREEN_HEIGHT - 700) / 2;

const int LENGTH_SQUARE = 35;
const int ROW = 20;
const int COLUM = 10;
const int DIS_X = (COLUM - 4) / 2;

const int NEW_ELEMENT_OBJECT = 7;
const int BACKGROUND = 0;
const int HOLD = 1;
const int NEXT = 2;
const int SCORE = 3;
const int CAT = 4;
const int BOARD = 5;
const int BRICK = 6;

const int TYPE_BLOCK[7][4] = {
                                {2, 6, 10, 11}, //L
                                {3, 7, 10, 11}, //_|
                                {2, 3, 6, 7}, //O
                                {2, 3, 5, 6}, //S
                                {1, 2, 6, 7}, //2
                                {2, 6, 7, 10}, //-|
                                {2, 6, 10, 14}, //|
};


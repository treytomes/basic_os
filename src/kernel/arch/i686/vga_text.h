#pragma once

extern const unsigned SCREEN_WIDTH;
extern const unsigned SCREEN_HEIGHT;

void VGA_clrscr();
void VGA_putc(char c);
char VGA_getchr(int x, int y);
uint8_t VGA_getcolor(int x, int y);
int VGA_getcursorx();
int VGA_getcursory();

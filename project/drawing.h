#ifndef drawing_included
#define drawing_included

void update_draw();
void draw_ball(int col, int row, unsigned short color);

extern short drawPos[2], controlPos[2], rowLimits[2], colLimits[2];

#endif // included

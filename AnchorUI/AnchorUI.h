#ifndef ANCHORUI_H
#define ANCHORUI_H

#include <utility>

#include<QWidget>

using namespace std;

using ANCHOR_TYPE = const unsigned int;

ANCHOR_TYPE L     = (0x01 << 0);
ANCHOR_TYPE VAXIS = (0x01 << 1);
ANCHOR_TYPE R     = (0x01 << 2);
ANCHOR_TYPE T     = (0x01 << 3);
ANCHOR_TYPE HAXIS = (0x01 << 4);
ANCHOR_TYPE B     = (0x01 << 5);

using RELATIVE = const unsigned int;

RELATIVE LEFT_LEFT     =   (0x01 << 0);
RELATIVE VAXIS_VAXIS   =   (0x01 << 1);
RELATIVE RIGHT_RIGHT   =   (0x01 << 2);
RELATIVE LEFT_RIGHT    =   (0x01 << 3);
RELATIVE RIGHT_LEFT    =   (0x01 << 4);
RELATIVE LEFT_VAXIS    =   (0x01 << 5);
RELATIVE VAXIS_LEFT    =   (0x01 << 6);
RELATIVE VAXIS_RIGHT   =   (0x01 << 7);
RELATIVE RIGHT_VAXIS   =   (0x01 << 8);

RELATIVE TOP_TOP       =   (0x01 << 9);
RELATIVE HAXIS_HAXIS   =   (0x01 << 10);
RELATIVE BUTTOM_BUTTOM =   (0x01 << 11);
RELATIVE TOP_BUTTOM    =   (0x01 << 12);
RELATIVE BUTTOM_TOP    =   (0x01 << 13);
RELATIVE TOP_HAXIS     =   (0x01 << 14);
RELATIVE HAXIS_TOP     =   (0x01 << 15);
RELATIVE HAXIS_BUTTOM  =   (0x01 << 16);
RELATIVE BUTTOM_HAXIS  =   (0x01 << 17);

using ANCHOR = pair<ANCHOR_TYPE,int>;
using ANCHOR_RELATIVE = pair<RELATIVE,int>;


class AnchorUI
{

public:
    AnchorUI();
protected:
    void Init(QWidget* widget, ANCHOR_RELATIVE v_relative, ANCHOR_RELATIVE h_relative, unsigned int width, unsigned int height);
    void Init(QWidget* widget, ANCHOR_RELATIVE v_relative, ANCHOR_RELATIVE h_relative, unsigned int ratio);
    void Init(QWidget* widget, int x, int y, unsigned int ratio);
    void Init(int x, int y, unsigned int width, unsigned int height);
    void Init(QWidget *parent, unsigned int xRatio, unsigned int yRatio, unsigned int wRatio, unsigned int hRatio);
    void Show(QWidget* self);

    int relativeRatio;
    int theX;
    int theY;
    int theWidth;
    int theHeight;

};

#endif // ANCHORUI_H

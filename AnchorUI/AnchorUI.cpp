#include "AnchorUI.h"

void AnchorUI::Init(QWidget* widget, ANCHOR_RELATIVE v_relative, ANCHOR_RELATIVE h_relative, unsigned int width, unsigned int height) {
    this->theWidth = width;
    this->theHeight = height;
    int x,y;
    switch (v_relative.first) {
    case LEFT_LEFT:
        x = widget->x() + v_relative.second;
        break;
    case LEFT_VAXIS:
        x = widget->x() + v_relative.second - this->theWidth/2;
        break;
    case LEFT_RIGHT:
        x = widget->x() + v_relative.second - this->theWidth;
        break;
    case VAXIS_LEFT:
        x = widget->x() + widget->width()/2 + v_relative.second;
        break;
    case VAXIS_VAXIS:
        x = widget->x() + widget->width()/2 + v_relative.second - this->theWidth/2;
        break;
    case VAXIS_RIGHT:
        x = widget->x() + widget->width()/2 + v_relative.second - this->theWidth;
        break;
    case RIGHT_LEFT:
        x = widget->x() + widget->width() + v_relative.second;
        break;
    case RIGHT_VAXIS:
        x = widget->x() + widget->width() + v_relative.second - this->theWidth/2;
        break;
    case RIGHT_RIGHT:
        x = widget->x() + widget->width() + v_relative.second - this->theWidth;
        break;
    default:
        break;
    }
    switch (h_relative.first) {
    case TOP_TOP:
        y = widget->y() + h_relative.second;
        break;
    case TOP_HAXIS:
        y = widget->y() + h_relative.second - this->theHeight/2;
        break;
    case TOP_BUTTOM:
        y = widget->y() + h_relative.second - this->theHeight;
        break;
    case HAXIS_TOP:
        y = widget->y() + widget->height()/2 + h_relative.second;
        break;
    case HAXIS_HAXIS:
        y = widget->y() + widget->height()/2 + h_relative.second - this->theHeight/2;
        break;
    case HAXIS_BUTTOM:
        y = widget->y() + widget->height()/2 + h_relative.second - this->theHeight;
        break;
    case BUTTOM_TOP:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    case BUTTOM_HAXIS:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    case BUTTOM_BUTTOM:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    default:
        break;
    }
    this->theX = x;
    this->theY = y;
}



void AnchorUI::Init(QWidget *widget, ANCHOR_RELATIVE v_relative, ANCHOR_RELATIVE h_relative, unsigned int ratio) {
    this->theWidth = widget->width()*ratio/100;
    this->theHeight = widget->height()*ratio/100;
    int x,y;
    switch (v_relative.first) {
    case LEFT_LEFT:
        x = widget->x() + v_relative.second;
        break;
    case LEFT_VAXIS:
        x = widget->x() + v_relative.second - this->theWidth/2;
        break;
    case LEFT_RIGHT:
        x = widget->x() + v_relative.second - this->theWidth;
        break;
    case VAXIS_LEFT:
        x = widget->x() + widget->width()/2 + v_relative.second;
        break;
    case VAXIS_VAXIS:
        x = widget->x() + widget->width()/2 + v_relative.second - this->theWidth/2;
        break;
    case VAXIS_RIGHT:
        x = widget->x() + widget->width()/2 + v_relative.second - this->theWidth;
        break;
    case RIGHT_LEFT:
        x = widget->x() + widget->width() + v_relative.second;
        break;
    case RIGHT_VAXIS:
        x = widget->x() + widget->width() + v_relative.second - this->theWidth/2;
        break;
    case RIGHT_RIGHT:
        x = widget->x() + widget->width() + v_relative.second - this->theWidth;
        break;
    default:
        break;
    }
    switch (h_relative.first) {
    case TOP_TOP:
        y = widget->y() + h_relative.second;
        break;
    case TOP_HAXIS:
        y = widget->y() + h_relative.second - this->theHeight/2;
        break;
    case TOP_BUTTOM:
        y = widget->y() + h_relative.second - this->theHeight;
        break;
    case HAXIS_TOP:
        y = widget->y() + widget->height()/2 + h_relative.second;
        break;
    case HAXIS_HAXIS:
        y = widget->y() + widget->height()/2 + h_relative.second - this->theHeight/2;
        break;
    case HAXIS_BUTTOM:
        y = widget->y() + widget->height()/2 + h_relative.second - this->theHeight;
        break;
    case BUTTOM_TOP:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    case BUTTOM_HAXIS:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    case BUTTOM_BUTTOM:
        y = widget->y() + widget->height() + h_relative.second - this->theHeight;
        break;
    default:
        break;
    }
    this->theX = x;
    this->theY = y;
}
void AnchorUI::Init(QWidget *widget, int x, int y, unsigned int ratio) {
    this->theWidth = widget->width()*ratio/100;
    this->theHeight = widget->height()*ratio/100;
    this->theX = x;
    this->theY = y;
}

void AnchorUI::Init(int x, int y, unsigned int width, unsigned int height) {
    this->theWidth = width;
    this->theHeight = height;
    this->theX = x;
    this->theY = y;
}
void AnchorUI::Init(QWidget *parent, unsigned int xRatio, unsigned int yRatio, unsigned int wRatio, unsigned int hRatio) {
    this->theWidth = parent->width()*wRatio/100;
    this->theHeight = parent->height()*hRatio/100;
    this->theX = parent->x()*xRatio/100;
    this->theY = parent->y()*yRatio/100;
}

void AnchorUI::Show(QWidget* self) {
    self->remove(theX, theY);
    self->resize(theWidth, theHeight);
    self->show();
}

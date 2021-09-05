#ifndef MAINCHARCONTROLLER_H
#define MAINCHARCONTROLLER_H


#include "inventory.h"
#include "mainchar.h"


namespace maincharcontroller
{
    enum smode
    {
        SEL_BLOCK, SEL_AIR, SEL_NONE
    };

    mainchar& getmainchar();

    direction getviewdir();
    hdirection gethviewdir();
    wposition getmaincharposition();
    wposition getmaincharcamera();
    void updatecamera();
    void movement();
    void toggleflying();
    void update();
    wtilepos gettilehover();
    void initialize();
    void renderselection();
    void setselectionmode(smode selmode);
    void movechar(hdirection dir);
    void mcharjump();
    void interact();

    bool isunderwater();
    bool isinwater();

    void togglelight(float lightstr);
    float getmcharlight();

    void renderdestroyblock();

    void useselecteditem();
    void changeselectiondelta(int selectiondelta);
    void changeselection(int selection);

    int32_t getactionbarselection();
    int32_t getcurrenthealth();
    int32_t getmaxhealth();

    wtilepos gettilehoverentityposition();//for test

    inventory& getmcharinventory();



    smode getselectionmode();
};

#endif // MAINCHARCONTROLLER_H

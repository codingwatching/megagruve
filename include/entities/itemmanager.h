#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include "maincharcontroller.h"
#include "texturemanager.h"
#include "effect.h"
#include "tiledata.h"

namespace itemmanager
{
    enum itemtypes
    {
        I_BLOCK, I_TOOL, I_USABLE, I_INERT
    };

    struct item
    {
        std::string name;
        std::string description;

        uint32_t speed;
        uint32_t duration;

        uint32_t maxstack {32};

        itemtypes itemtype;

        std::vector<std::shared_ptr<effect>> useeffects; //memory leak! oh no

        maincharcontroller::smode selectionmode; //selection mode n�r item er selected

        uint32_t textureid;
    };

    void additem(std::string itemid, std::string texturename, item itemtoadd);

    item& getitem(uint32_t itemnumid);
    uint32_t getitemid(std::string itemid);
    void initialize();
};

#endif // ITEMMANAGER_H

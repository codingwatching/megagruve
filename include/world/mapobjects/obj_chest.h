#ifndef OBJ_CHEST_H
#define OBJ_CHEST_H

#include "map_obj.h"
#include "inventory.h"
#include "mainchar.h"
#include "chunkmesh.h"

class obj_chest : public map_obj
{
    public:
        obj_chest(ctilepos ctp, chunkpos cpo, uint8_t forw);
        virtual ~obj_chest();

        void addmodel(ctilepos ctp, chunkmesh& cmesh);
		void interact(mainchar& interactor);
		void destroy();

        inventory chestinv;
        bool lidopen {false};

    protected:

    private:
};

#endif // OBJ_CHEST_H

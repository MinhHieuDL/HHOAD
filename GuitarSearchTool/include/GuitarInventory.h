#ifndef HF_OOAD_GUITAR_INVENTORY
#define HF_OOAD_GUITAR_INVENTORY

#include "Guitar.h"
#include <vector>

    class GuitarInventory
    {
        private:
            std::vector<Guitar*> m_lGuitar;
        public:
            GuitarInventory();
            ~GuitarInventory();

            void addGuitar(std::string sSerial,\
                           Guitar::BUILDER eBuilder,\
                           std::string sModel,\
                           Guitar::TYPE eType,\
                           double dbPrice);
            Guitar* getGuitar(std::string sSerial);
            Guitar* search(Guitar searchGuitar);

    };

#endif
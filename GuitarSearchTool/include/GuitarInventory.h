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
                           GuitarSpecs stSpecs,\
                           double dbPrice);
            void addGuitar(Guitar guitar);
            Guitar* getGuitar(std::string sSerial) const;
            Guitar* search(GuitarSpecs searchSpecs);

    };

#endif
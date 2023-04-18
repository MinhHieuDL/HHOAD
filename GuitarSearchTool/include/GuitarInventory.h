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
                           std::string sBuilder,\
                           std::string sModel,\
                           std::string sType,\
                           double dbPrice);
            Guitar* getGuitar(std::string sSerial);
            Guitar* search(Guitar searchGuitar);

    };

#endif
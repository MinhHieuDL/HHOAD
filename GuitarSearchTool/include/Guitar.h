#ifndef HF_OOAD_GUITAR
#define HF_OOAD_GUITAR

#include <string>

    class Guitar
    {
        public:
            enum class BUILDER : char
            {
                FENDER, GIBSON, MARTIN, TAYLOR, PRS, IBANEZ, ESP, YAMAHA
            };

            enum class TYPE : char
            {
                CLASSIC, ELECTRIC
            };

        private:
            std::string m_sSerialNumber;
            std::string m_sModel;
            BUILDER m_eBuilder;
            TYPE m_eType;
            double m_dbPrice;
        public:
            Guitar(std::string sSerialNum, BUILDER eBuilder, std::string sModel, TYPE eType, double dbPrice);
            ~Guitar();

            std::string getSerialNumber();
            std::string getModel();
            BUILDER getBuilder();
            TYPE getType();
            double getPrice();
    };
    
#endif //HF_OOAD_GUITAR

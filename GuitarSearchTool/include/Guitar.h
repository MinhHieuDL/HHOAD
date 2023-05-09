#ifndef HF_OOAD_GUITAR
#define HF_OOAD_GUITAR

#include <string>

    class GuitarSpecs
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
            std::string m_sModel;
            BUILDER m_eBuilder;
            TYPE m_eType;
        public:
            GuitarSpecs();
            GuitarSpecs(std::string sModel, BUILDER eBuilder, TYPE eType);
            ~GuitarSpecs();

            std::string getModel();
            BUILDER getBuilder();
            TYPE getType();

            bool operator==(const GuitarSpecs& specs);
    };
    class Guitar
    {
        private:
            GuitarSpecs m_stSpecs;
            std::string m_sSerialNumber;
            double m_dbPrice;
        public:
            Guitar(GuitarSpecs stSpecs, std::string sSerialNum, double dbPrice);
            ~Guitar();

            std::string getSerialNumber();
            double getPrice();
            GuitarSpecs getSpecs();
    };
    
#endif //HF_OOAD_GUITAR

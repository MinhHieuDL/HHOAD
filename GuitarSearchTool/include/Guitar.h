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

            std::string getModel() const {return m_sModel;}
            BUILDER getBuilder() const {return m_eBuilder;}
            TYPE getType() const {return m_eType;}

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

            std::string getSerialNumber() const {return m_sSerialNumber;}
            double getPrice() const {return m_dbPrice;}
            GuitarSpecs getSpecs() const {return m_stSpecs;}
    };
    
#endif //HF_OOAD_GUITAR

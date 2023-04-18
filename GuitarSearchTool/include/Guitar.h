#ifndef HF_OOAD_GUITAR
#define HF_OOAD_GUITAR

#include <string>

    class Guitar
    {
        private:
            std::string m_sSerialNumber;
            std::string m_sBuilder;
            std::string m_sModel;
            std::string m_sType;
            double m_dbPrice;
        public:
            Guitar(std::string sSerialNum, std::string sBuilder, std::string sModel, std::string sType, double dbPrice);
            ~Guitar();

            std::string getSerialNumber();
            std::string getBuilder();
            std::string getModel();
            std::string getType();
            double getPrice();
    };
    
#endif //HF_OOAD_GUITAR

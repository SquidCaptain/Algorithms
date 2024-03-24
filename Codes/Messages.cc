#include <string>

class Message {
    protected:
        std::string msg;
        int len;
    public:
        virtual void setMessage(std::string newMsg) {
            msg = newMsg
        };
        virtual std::string getMessage() {
            return msg;
        };
        virtual int getLength()  {
            return len;
        };
        virtual void operation();
};

class Code : Message {
    protected:
        std::string binary;
    public:
        virtual void setCode();
        virtual void errCorrect();
        virtual void getCode();
};
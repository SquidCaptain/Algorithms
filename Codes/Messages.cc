#include <string>

using namespace std;

class Message {
    public:
        string* msg;
        ~Message() {}
        virtual void setMessage(string &newMessage) const = 0;
        virtual string getMessage() const = 0;
};

class MyMessage : public Message {
    public:
        MyMessage(string &message) {
            *msg = message;
        }
        ~MyMessage() {}
        void setMessage(string &newMessage) const override {
            *msg = newMessage;
        }
};

class Code : public Message {
    protected:
        Message* message_;
        string binary;
    public:
        Code(Message* message) : message_(message) {}
        void setMessage(string &newMessage) const override {
            *msg = newMessage;
        }
        virtual void setCode() const = 0;
        virtual void errCorrect() const = 0;
        virtual void getCode() const = 0;
};
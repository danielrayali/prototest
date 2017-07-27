#include <iostream>
#include "message.pb.h"

using namespace std;

int main(int argc, char* argv[]) {
    Message message;
    message.set_data("Hello, World!");

    std::string message_str;
    message.SerializeToString(&message_str);

    Message deserialized;
    deserialized.ParseFromString(message_str);

    cout << "Deserialized message is: " << deserialized.data() << endl;
    return 0;
}


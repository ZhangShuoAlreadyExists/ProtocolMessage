#include <iostream>
#include <fstream>
#include <string>

#include "protobuf_general.pb.h"

using namespace std;

void testProtobuf(tutorial::proto_general* general) {
    general->set_compressed(0);
}

void test2(google::protobuf::Message* msg) {
    cout << msg->GetTypeName();
    cout << "\n";
}

class A {
public:
    void func(int a) {
        cout << "This is func(int a)\n";
    }
    void func(int a, int b) {
        cout << "This is func(int a, int b)\n";
    }
    void func1(int a) {
        cout << "This is func1\n";
    }
};

class B : public A {
public:
    void func(int a, int b, int c) {
        cout << "This is func(int a, int b, int c)\n";
        //func(b,c);
    }
};

class C {
public:
    static void create(void);
};

class D : virtual C {
public:
    static void create(void) {
        cout << "This is D implement.\n";
    }
};

int main(int argc, char* argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    tutorial::proto_general general;
    testProtobuf(&general);
    test2(&general);
    if (general.compressed()) {
        cout << "A compressed protobuf message.\n";
    } else {
        cout << "A decompressed protobuf message.\n";
    }

    google::protobuf::ShutdownProtobufLibrary();

/*
    B b = B();
    b.A::func(1);
    b.func(1,2,3);
    b.func1(1);
    C::create();
*/
    return 0;
}

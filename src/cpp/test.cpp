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
private:
    int a1;
public:
    virtual void func(int a) {
        a1 = 2;
        cout << "This is func(int a)\n";
        cout << a1 << endl;
    }
    void func(int a, int b) {
        cout << "This is func(int a, int b)\n";
    }
    void func1(int a) {
        cout << "This is func1\n";
    }
};

class B : public A {
private:
    int b1;
public:
    void func(int a) {
        cout << "This is func(int a, int b, int c)\n";
        //func(b,c);
    }
    void funcB(void) {
        b1 = 3;
        cout << "This is funcB.\n";
        cout << b1 << endl;
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
/*
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
*/

    A *a = new A;
    B *b = static_cast<B*>(a);
    b->func(1);
    b->func1(1);
    b->funcB();
/*
    B b = B();
    b.A::func(1);
    b.func(1,2,3);
    b.func1(1);
    C::create();
*/
    return 0;
}

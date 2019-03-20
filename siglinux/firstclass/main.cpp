#include <iostream>

using namespace std;

class MyClass {
private:
    int a;

public:

    MyClass(void) {
	    cout << "Constructor " << (void*)this << endl;
    }

    ~MyClass(void) {
        cout << "Destructor  " << (void*)this << endl;
    }

};

int main(void) {

    MyClass mc1;

    {
        MyClass mc2;
    }

    cout << sizeof(MyClass) << endl;

    return 0;
}


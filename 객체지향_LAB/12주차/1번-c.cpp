#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Base {
	int value; 
public: 
	Base(int value) : value(value) { } 
	void print() { 
		cout << "Value: " << value << endl; 
	}
};
class Derived : public Base {
	string name; 
public: 
	Derived(int value, string name) : Base(value), name(name) { } 
	void print() { 
		Base::print(); cout << "Name: " << name << endl; 
	}
};
Base* getObject(bool flag) {
	if (flag) 
		return new Derived(1, "Apple"); 
	else 
		return new Base(2);
}
int main() {
	Base* b; Derived* d;
	b = getObject(true); b->print();
	d = (Derived*)b; d->print();
	b = d; b->print();
	return 0;
}

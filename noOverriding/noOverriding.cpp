#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk memvegah adanya overriding

class baseClass {
public:
	virtual void perkenalan() {
		cout << "Halo saya Function dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya Function dari derived Class";
	}
};
int main()
{
	derivedClass a;
	a.perkenalan();

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Saudador {
public:
	virtual string saudar() = 0;
};

class Formal : public Saudador {
public:
	string saudar() override{
		return "Boa noite, senhor.";
	}	
};

class Casual : public Saudador {
public:
	string saudar() override{
		return "E aí, cara?";
	}	
};

class Intimo : public Saudador {
public:
	string saudar() override{
		return "Olá, querido(a)!";
	}	
};

int main() {
    Formal s1;
	Casual s2;
	Intimo s3;
	
	cout << s1.saudar() << endl;
	cout << s2.saudar() << endl;
	cout << s3.saudar() << endl;
	
    return 0;
}
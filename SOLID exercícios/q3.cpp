#include <iostream>
#include <string>

class Saudador {
public:
    virtual std::string saudar() = 0; };

class Formal : public Saudador {
public:
	std::string saudar() override{	
            return "Boa noite, senhor.";}
};
class Casual : public Saudador {
public: 
	std::string saudar() override{
	return "E aí, cara?";}
	
};
class Intimo : public Saudador {
public:
	std::string saudar() override{
	return "Olá, querido(a)!";}
};
class Padrao : public Saudador{
public:
	std::string saudar() override{
	 return "Olá.";}
	
};

int main() {
    Saudador* s1 = new Formal();
    Saudador* s2 = new Casual();
    Saudador* s3 = new Intimo();
    Saudador* s4 = new Padrao();

    std::cout << s1->saudar() << std::endl;

    std::cout << s2->saudar() << std::endl;

    std::cout << s3->saudar() << std::endl;

    std::cout << s4->saudar() << std::endl;

    return 0;
}
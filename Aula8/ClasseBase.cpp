class Base{
    public: 
        int pub_atributo_base = 0;
        
    private:
        int pri_atributo_base = 0;
    protected:
        int pro_atributo_base = 0;
        int virtual metodoBase(int b){b = 0; return b;}
        int virtual metodoBase() = 0; //método virtual puro
};

class Derivada : virtual public Base{
    public:
        Derivada() : Base(){
            this->pro_atributo_base = 10;
            this->pub_atributo_base = 10;
        }
    protected:
        int metodoBase() override {return 0;} 

};

class OutraDerivada : virtual protected Base{
    public:
        OutraDerivada() : Base(){
            this->pro_atributo_base = 100;
            this->pub_atributo_base = 100;
            
        }
};
class NovaDerivada : public Derivada, public OutraDerivada{
    public:
        NovaDerivada() : Derivada(){
            
        }
};

class OutraClasseDerivada : public OutraDerivada{
    public:
        OutraClasseDerivada() : OutraDerivada(){
            this->pub_atributo_base = 1000;
            this->pro_atributo_base = 1000;
            
        }

};

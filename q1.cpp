#include <iostream>
#include <string>
#include <vector>

class Tabuleiro {
public:
    std::vector<std::string> posicoes;

    // Construtor
    Tabuleiro() {
        for (int i = 0; i < 9; ++i) {
            this->posicoes.push_back(std::to_string(i));
        }
    }

};
    
    class ExibidorTabuleiro{
        
        public:
            Tabuleiro* tab;
            
            void exibir(Tabuleiro& tab){
                for(int i = 0; i < 9; i++){
                    std::cout << tab.posicoes.at(i);
                    
                    if(i % 3 != 2){
                        std::cout << " | ";
                    }
                    else
                        std::cout << std::endl;
                }
            }
        
    };
    
    int main(){
        
        Tabuleiro tabuleiro;
        ExibidorTabuleiro exibidor;
        
        exibidor.exibir(tabuleiro);
        
        
        return 0;
    }


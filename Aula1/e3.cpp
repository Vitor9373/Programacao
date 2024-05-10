//Crie uma classe chamada "Retângulo" que possua atributos para armazenar 
//a altura e largura . Inplemente métodos para calcular a área e o perímetro do retângulo.

#include <iostream>

class Retangulo{
    public:
        Retangulo(){};
        ~Retangulo(){};

        void set(float _altura, float _largura){
            altura = _altura;
            largura = _largura;
        }

        float calcArea(float altura, float largura){
            return altura * largura;
        }

        float calcPeri(float altura, float largura){
            return 2 * altura + 2 * largura;
        }
    
    private:
        float altura, largura;
};

int main(){
    Retangulo retangulo;
    float altura, largura, area, perimetro;
    std::cout << "Digite a altura do retângulo: ";
    std::cin >> altura;
    std::cout << "Digite a largura do mesmo: ";
    std:: cin >> largura;
    retangulo.set(altura,largura);
    area = retangulo.calcArea(altura,largura);
    perimetro = retangulo.calcPeri(altura,largura);
    std::cout << "A área do retâgulo é " << area;
    std::cout << ", e seu perímetro " << perimetro;
    return 0;
}
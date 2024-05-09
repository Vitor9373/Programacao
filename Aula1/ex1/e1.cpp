#include <iostream>
#define pi 3.14

class Circulo{
    public:
        Circulo(){};
        ~Circulo(){};

        float calcArea(float raio){
            return pi * (raio * raio);
        }

        float calcPeri(float raio){
            return 2 * pi * raio;
        }
    
    private:
        float raio;
};

int main(){
    Circulo circulo;
    float area, raio, perimetro;
    std::cout << "Digite o raio: ";  
    std::cin >> raio;
    area = circulo.calcArea(raio);
    perimetro = circulo.calcPeri(raio);
    std::cout << "\n\nA área é " << area;
    std::cout << "\nO perímetro é " << perimetro;
    return 0;
}
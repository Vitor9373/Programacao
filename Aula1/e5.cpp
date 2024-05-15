//Crie uma classe chamada “Funcionário” com atributos para armazenar o nome, o
//salário e o cargo do funcionário. Implemente métodos para calcular o salário líquido,
//considerando descontos de impostos e benefícios.
#include <iostream>

class Funcionario{
    public:
        Funcionario(){};
        ~Funcionario(){};

    private:
        std::string nome, cargo;
        float salario;
};

int main(){
    std::string nome, cargo;
    float salario;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Digite seu cargo: ";
    std::cin >> cargo;
    std::cout << "Digite seu salário: ";
    std::cin >> salario;
    
}
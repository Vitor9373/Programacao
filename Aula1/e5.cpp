//Crie uma classe chamada “Funcionário” com atributos para armazenar o nome, o
//salário e o cargo do funcionário. Implemente métodos para calcular o salário líquido,
//considerando descontos de impostos e benefícios.
#include <iostream>

class Funcionario{
    public:
        Funcionario(){};
        ~Funcionario(){};

        void set(std::string _nome, std::string _cargo, float _salario, float _beneficio, float _descontos){
            nome = _nome;
            cargo = _cargo;
            salario = _salario;
            beneficios = _beneficio;
            descontos = _descontos;
        }

        float get(float salario){
            return salario;
        }

        float salLiq(float salario, float beneficio, float descontos){
            descontos /= 100;
            salario -= salario * descontos;
            salario += beneficio;
            return salario;
        }

    private:
        std::string nome, cargo;
        float salario, beneficios, descontos;
};

int main(){
    Funcionario funcionario;
    std::string nome, cargo;
    float salario, beneficio;
    int descontos;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Digite seu cargo: ";
    std::cin >> cargo;
    std::cout << "Digite seu salário: ";
    std::cin >> salario;
    std:: cout << "Agora digite em porcentagem os descontos do salário: ";
    std::cin >> descontos;
    std::cout << "E digite quanto ganha em benefícios: ";
    std::cin >> beneficio;
    funcionario.set(nome,cargo,salario,beneficio,descontos);
    salario = funcionario.salLiq(salario,beneficio,descontos);
    std::cout << "Seu salário líquido é " << funcionario.get(salario) << "reais.";
    return 0;
}
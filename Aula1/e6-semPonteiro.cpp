// Implemente a classe Funcionario com nome, salario e os métodos
// addAumento(double valor), ganhoAnual() e exibeDados() - imprime os valores do
// funcionário.
// a. crie a classe Assistente, que também é um funcionário, e que possui um
// número de matrícula (faça os métodos GET e SET). Sobrescreva o método
// exibeDados().
// b. sabendo que os Assistentes Técnicos possuem um bônus salarial e que os
// Assistentes Administrativos possuem um turno (dia ou noite) e um adicional
// noturno, crie as classes Tecnico e Administrativo e sobrescreva o método
// ganhoAnual() de ambas as classes (Administrativo e Tecnico).

#include <iostream>
class Funcionario{
    public:
        Funcionario(){};
        ~Funcionario(){};

        void setDados(std::string _nome, float _salario){
            nome = +
        }

    private:
        std::string nome;
        float salario;
};

int main(){
    Funcionario funcionario;
    std::string nome;
    float salario;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Digite seu salário: ";
    std::cin >> salario;
    funcionario.setDados(nome,salario);
}
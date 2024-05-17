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

void lerDados(std::string * nome, float * salario){
    std::cout << "Digite seu nome: ";
    std::cin >> *nome;
    std::cout <<"Digite seu salário: ";
    std::cin >> *salario;
};

class Funcionario{

    public:
        Funcionario(){}
        ~Funcionario(){}

        void setDados(std::string _nome, float _salario){
            nome = _nome;
            salario = _salario;
        }

        float aumento(float salario){

        }

    private:
        std::string nome;
        float salario;
};

int main(){
    auto fun = new Funcionario;
    int i;
    std::string nome;
    float salario;
    lerDados(&nome,&salario);
    std::cout << nome;
    fun->setDados(nome,salario);
    while(i == 1){
        int n;
        std::cout << "Digite o que deseja realizar:\n1 para adicionar um aumento;\n2 para ver seu ganho anual;\n3 para ver seus dados.\n:";
        std::cin >> n;
        switch(n){
            case 1:
                Funcionario->aumento(salario);
        }
    }
}
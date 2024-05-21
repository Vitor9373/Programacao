// Implemente uma classe chamada “ContaBancária” que possua atributos para
// armazenar o número da conta, nome do titular e saldo. Adicione métodos para
// realizar depósitos e saques.

#include <iostream>

class Conta{
    public:
        Conta(){};
        ~Conta(){};

        void set(int _numero, std::string _nome, float _saldo){
            numero = _numero;
            nome = _nome;
            saldo = _saldo;
        }

        float saque(float valor){
            saldo -= valor;
            return saldo;
        }

        float deposito(float valor){
            saldo += valor;
            return saldo;
        }
    
    private:
        int numero;
        std::string nome;
        float saldo;
};

int main(){
    Conta conta;
    int numero;
    std::string nome;
    float saldo, valor;
    std::cout << "Digite o número da sua conta: ";
    std::cin >> numero;
    std::cout << "digite seu nome: ";
    std:: cin >> nome;
    std::cout << "Digite seu saldo: ";
    std:: cin >> saldo;
    int aux = 1, a;
    conta.set(numero,nome,saldo);
    while(aux == 1){
        std::cout << "O que deseja realizar?\nDigite 1 para sacar e 2 para depositar: ";
        std::cin >> a;
        switch(a){
            case 1:
                std::cout << "Digite o valor a ser sacado: ";
                std::cin >> valor;
                saldo = conta.saque(valor);
                break;
            case 2:
                std::cout << "Digite o valor a ser depositado: ";
                std::cin >> valor;
                saldo = conta.deposito(valor);
                break;
            default:
                std::cout << "O valor digitado é inválido!";
                break;
        }
        std::cout << "\nSeu saldo na conta atual é de " << saldo << " reais.";
        std::cout << "\nDeseja realizar outra operação?\nSe sim digite 1, senão, digite 0.";
        std::cin >> aux;
    }
    std::cout << "\nOperação finalizada.";
    return 0;
}
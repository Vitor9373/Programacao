//implmente uma classe chmamada "Aluno" que possua atributos para aramazear o
//nome, a matrícula e as notas de um aluno. Adicione métodos para calcular a média
//das notas e verificar a situação do aluno(aprovado ou reprovado).
#include <iostream>

class Aluno{
    public:
        Aluno(){};
        ~Aluno(){};

        void set(std::string _nome, int _matricula, float _n1, float _n2){
            nome = _nome;
            matricula = _matricula;
            n1 = _n1;
            n2 = _n2;
        }

        bool situacao(float n1, float n2){
            if((n1 + n2) / 2 >= 6){
                return true;
            }
            else{
                return false;
            }
        }

    private:
        std::string nome;
        int matricula;
        float n1, n2;
};

int main(){
    Aluno aluno;
    std::string nome;
    int matricula;
    float n1, n2;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Digite sua matrícula: ";
    std::cin >> matricula;
    std::cout << "Digite sua primeira nota: ";
    std::cin >> n1;
    std::cout << "Agora digite sua segunda nota: ";
    std::cin >> n2;
    aluno.set(nome,matricula,n1,n2);
    if(aluno.situacao(n1,n2)){
        std::cout << "Você foi aprovado. Parabéns!!";
    }
    else{
        std::cout << "Você foi reprovado.";
    }
    return 0;
}
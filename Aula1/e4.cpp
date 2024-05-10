//implmente uma classe chmamada "Aluno" que possua atributos para aramazear o
//nome, a matrícula e as notas de um aluno. Adicione métodos para calcular a média
//das notas e verificar a situação do aluno(aprovado ou reprovado).
#include <iostream>

class Aluno{
    public:
        Aluno(){};
        ~Aluno(){};

    private:
        std::string nome;
        int matricula;
        float nota;
};

int main(){
    Aluno aluno;
    std::string nome;
    int matricula;
    float nota;
}
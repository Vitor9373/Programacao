//Desenvolva o diagrama de classes UML de um sistema de biblioteca e
//implemente esse sistema. Você deve ser capaz de cadastrar usuários, apagar
//usuários, modificar o status do usuário (e.g., verificar se o mesmo possui multas
//por atraso, se a multa for maior que um valor X, ele não poderá mais pegar livros
//emprestados), cadastrar livros, emprestar livros, devolver livros, aplicar multas
//por atraso, e checar se um determinado livro está disponível para ser
//emprestado. Utilize listas como se fossem seu banco de dados (std::vector).

#include <iostream>
#include <vector>

class Livro{
    public:
        Livro(){};
        ~Livro(){};

        void gerenciarLivros(){
            std::string titulo, autor;
            int ano;
        }

    private:
        std::string nome;
        std::string autor;
        int ano;
};

int main(){
    Livro livro;
    livro.gerenciarLivros();
}
#include <iostream>
using namespace std;

class Pessoa{
    private:
        int id;
        int conta_bancaria;
        string nome;
    
    public:
        Pessoa(int _id, int _conta_bancaria, string _nome);
        string getNome();
        void setNome(string _nome);
        void print();

};

Pessoa::Pessoa(int _id, int _conta_bancaria, string _nome){
    id = _id;
    conta_bancaria = _conta_bancaria;
    nome = _nome;
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(string _nome){
    nome = _nome;
}

void Pessoa::print(){
    cout <<"NOME: " << nome << endl << "ID: " << id <<endl <<"CONTA BANCARIA: " << conta_bancaria;
}

int main(){
    Pessoa maria = Pessoa(1, 445, "Ze");

    cout << endl;
    maria.print();
    cout << endl << endl;

    return 0;
}
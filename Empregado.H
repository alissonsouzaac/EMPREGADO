#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado
{
    public:
        Empregado(std::string nome, std::string sobrenome, float salario);
        float aumentaSalario();
        float salarioAnual();
        void setSalario(float salario);
        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        float getSalario();
        std::string getNome();
        std::string getSobrenome();
    private:
        float salario;
        std::string nome, sobrenome;


};

#endif // EMPREGADO_H

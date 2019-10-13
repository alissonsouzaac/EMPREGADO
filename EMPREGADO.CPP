#include "Empregado.h"
#include <string>
Empregado::Empregado(std::string name, std::string last_name,float sal){
    setNome(name);
    setSobrenome(last_name);
    setSalario(sal);
}
float Empregado::aumentaSalario(){
    float aumento;
    aumento = (salario * 1.10)*12;
    return aumento;
}
float Empregado::salarioAnual(){
    return salario * 12;
}
float Empregado::getSalario(){
    return salario;
}
std::string Empregado::getNome(){
    return nome;
}
std::string Empregado::getSobrenome(){
    return sobrenome;
}
void Empregado::setSalario(float meusalario){
    if(meusalario > 0){
    salario = meusalario;
    }
}
void Empregado::setNome(std::string myname){
    nome = myname;
}
void Empregado::setSobrenome(std::string mylastname){
    sobrenome = mylastname;
}

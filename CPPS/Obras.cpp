#include "../HPPS/Obras.hpp"
#include <iostream>

using namespace std;

Obras::Obras(const string& titulo, const string& autor, 
const string& subGenero, const string& midia, int anoPublicacao): 
titulo(titulo), autor(autor), subGenero(subGenero), anoPublicacao(anoPublicacao), midia(midia) {}

string Obras::getTitulo() const {
    return titulo;
}

string Obras::getAutor() const {
    return autor;
}

string Obras::getsubGenero() const {
    return subGenero;
}

int Obras::getAnoPublicacao() const {
    return anoPublicacao;
}

string Obras::getMidia() const {
    return midia;
}

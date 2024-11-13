#include "Obras.hpp"

using namespace std;

Obras::Obras(const string& titulo, const string& autor, const string& genero, int anoPublicacao, const string& midia)
    : titulo(titulo), autor(autor), genero(genero), anoPublicacao(anoPublicacao), midia(midia) {}

string Obras::getTitulo() const {
    return titulo;
}

string Obras::getAutor() const {
    return autor;
}

string Obras::getSubGenero() const {
    return genero;
}

int Obras::getAnoPublicacao() const {
    return anoPublicacao;
}

int Obras::getMidia() const {
    return midia;
}

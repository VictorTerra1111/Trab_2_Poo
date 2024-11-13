#include "Obras.hpp"

using namespace std;

Obras::Obras(const string& titulo, const string& autor, const string& genero, int anoPublicacao, int vendas)
    : titulo(titulo), autor(autor), genero(genero), anoPublicacao(anoPublicacao), vendas(vendas) {}

string Obras::getTitulo() const {
    return titulo;
}

string Obras::getAutor() const {
    return autor;
}

string Obras::getGenero() const {
    return genero;
}

int Obras::getAnoPublicacao() const {
    return anoPublicacao;
}

int Obras::getVendas() const {
    return vendas;
}

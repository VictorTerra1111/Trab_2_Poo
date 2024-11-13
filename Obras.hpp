#ifndef OBRAS_HPP
#define OBRAS_HPP

#include <string>

using namespace std;

class Obras {
public:
    Obras(const string& titulo, const string& autor, const string& subGenero, 
            const string& midia, int anoPublicacao);

    string getTitulo() const;
    string getAutor() const;
    string getsubGenero() const;
    string getMidia() const;
    int getAnoPublicacao() const;

private:
    string titulo;
    string autor;
    string midia;
    string subGenero;
    int anoPublicacao;

};

#endif

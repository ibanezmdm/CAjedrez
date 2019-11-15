#include "../include/Regla.hpp"


Regla::Regla (const std::string regla) {
	this->__regla = regla;
};


Regla::Regla (const std::string regla, const bool partida) {
	this->__regla = regla;
	this->__partida = partida;
};


Regla::Regla(const std::string regla, const std::string mensaje) {
	this->__regla = regla;
	this->__mensaje = mensaje;
};


Regla::Regla(const std::string regla, const std::string mensaje, const bool partida) {
	this->__regla = regla;
	this->__mensaje = mensaje;
	this->__partida = partida;
};
#ifndef REGLA_H
#define REGLA_H 

#include <string>
#include <iostream>


class Regla {

	private:


	protected:

		std::string __regla;
		std::string __mensaje;
		bool __estado = false;
		bool __partida = false;
		unsigned char __contador = 0;


	public:

		Regla() {};
		Regla(const std::string regla);
		Regla(const std::string regla, const bool partida);
		Regla(const std::string regla, const std::string mensaje);
		Regla(const std::string regla, const std::string mensaje, const bool partida);

		~Regla() {}

		std::string getRegla(){return this->__regla;}
		void setRegla(const std::string regla){this->__regla = regla;}

		std::string getMensaje() {return this->__mensaje;}
		void setMensaje(const std::string mensaje) {this->__mensaje = mensaje;}

		bool getEstado() {return this->__estado;}
		void cambiarEstado() {this->__estado = !this->__estado;}

		unsigned char getContador(){return this->__contador;}
		void push(){this->__contador++;}

		bool getReglaDePartida() {return this->__partida;}
		void cambiarReglaDePartida() {this->__partida = !this->__partida;}

};

#endif // !REGLA_H
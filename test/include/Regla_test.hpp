#ifndef REGLA_TEST
#define REGLA_TEST

#include "../../include/Regla.hpp"
#include <gtest/gtest.h>


class ReglaTest : public ::testing::Test{

	protected:
		Regla *r1;
		Regla *r2;
		Regla *r3;
		Regla *r4;
		Regla *r5;
		const std::string sRegla = "Regla";
		const std::string sMensaje = "Mensaje";
		const bool bPartida = true;

	public:
		void SetUp() {
			r1 = new Regla();
			r2 = new Regla(sRegla);
			r3 = new Regla(sRegla, bPartida);
			r4 = new Regla(sRegla, sMensaje);
			r5 = new Regla(sRegla, sMensaje, bPartida);
		}

		void TearDown(){
			delete r1;
			delete r2;
			delete r3;
			delete r4;
			delete r5;
		}
};

class ReglaTest2 : public ::testing::Test{
	protected:
		Regla *r;
		const std::string sRegla = "Regla";
		const std::string sMensaje = "Mensaje";
		const bool bPartida = true;

	public:
		void SetUp() {
			r = new Regla(sRegla, sMensaje, bPartida);
		}

		void TearDown(){
			delete r;
		}
};


#endif // !REGLA_TEST
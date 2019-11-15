#include "../include/Regla_test.hpp"


TEST_F(ReglaTest, tReglaCtorSinArgumentos) {
	EXPECT_EQ("", r1->getRegla());
	EXPECT_EQ("", r1->getMensaje());
	EXPECT_FALSE(r1->getEstado());
	EXPECT_FALSE(r1->getReglaDePartida());
	EXPECT_EQ(0, r1->getContador());
}


TEST_F(ReglaTest, tReglaCtorARgl) {
	EXPECT_EQ("Regla", r2->getRegla());
	EXPECT_EQ("", r2->getMensaje());
	EXPECT_FALSE(r2->getEstado());
	EXPECT_FALSE(r2->getReglaDePartida());
	EXPECT_EQ(0, r2->getContador());
};


TEST_F(ReglaTest, tReglaCtorARglAPrtd) {
	EXPECT_EQ("Regla", r3->getRegla());
	EXPECT_EQ("", r3->getMensaje());
	EXPECT_FALSE(r3->getEstado());
	EXPECT_TRUE(r3->getReglaDePartida());
	EXPECT_EQ(0, r3->getContador());
};


TEST_F(ReglaTest, tReglaCtorARglAMsj) {
	EXPECT_EQ("Regla", r4->getRegla());
	EXPECT_EQ("Mensaje", r4->getMensaje());
	EXPECT_FALSE(r4->getEstado());
	EXPECT_FALSE(r4->getReglaDePartida());
	EXPECT_EQ(0, r4->getContador());
};


TEST_F(ReglaTest, tReglaCtorARglAMsjAPrtd) {
	EXPECT_EQ("Regla", r5->getRegla());
	EXPECT_EQ("Mensaje", r5->getMensaje());
	EXPECT_FALSE(r5->getEstado());
	EXPECT_TRUE(r5->getReglaDePartida());
	EXPECT_EQ(0, r5->getContador());
};


TEST_F(ReglaTest, tReglaSetRegla) {
	r1->setRegla("Regla");
	EXPECT_EQ("Regla", r1->getRegla());
}


TEST_F(ReglaTest, tReglaSetMensaje) {
	r1->setMensaje("Mensaje");
	EXPECT_EQ("Mensaje", r1->getMensaje());
}


TEST_F(ReglaTest, tReglaCambiaEstado) {
	r1->cambiarEstado();
	EXPECT_TRUE(r1->getEstado());
}


TEST_F(ReglaTest, tReglaCambiaReglaPartida) {
	r1->cambiarReglaDePartida();
	EXPECT_TRUE(r1->getReglaDePartida());
}


TEST_F(ReglaTest, tReglaPush) {
	r1->push();
	r1->push();
	EXPECT_EQ(1,r1->getContador()-1);
	EXPECT_EQ(2,r1->getContador());
}



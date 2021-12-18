#pragma once
class Base {
public:
	Base() {
		printf("Base()");
	}
	Base(Base& obj) {
		printf("Base(Base &obj)");
	}
	Base(Base* obj) {
		printf("Base(Base *obj)");
	}
	~Base() {
		printf("~Base()");
	}
};

class Desc : public Base {
public:
	Desc() {
		printf("Desc()");
	}
	Desc(Desc& obj) {
		printf("Desc(Desc &obj)");
	}
	Desc(Desc* obj) {
		printf("Desc(Desc *obj)");
	}
	~Desc() {
		printf("~Desc()");
	}
};
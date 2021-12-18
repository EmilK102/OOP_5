#pragma once
class A {
public:
	A() {
		printf("A()\n");
	}
	~A() {
		printf("~A()\n");
	}
	void foo() {
		printf("void foo()\n");
	}
};

class B : public A {
public:
	B() {
		printf("B()\n");
	}
	~B() {
		printf("~B()\n");
	}
	void foo() {
		int size = 21;
		printf("foooo!, %i\n", size);
	}
};

class AB {
public:
	AB() {
		printf("AB()\n");
	}
	virtual ~AB() {
		printf("~AB()\n");
	}
	virtual void foo() {
		printf("void foo()\n");
	}
};

class BB : public AB {
public:
	BB() {
		printf("BB()\n");
	}
	~BB() {
		printf("~BB()\n");
	}
	void foo(){
		int size = 21;
		printf("foooo!, %i\n", size);
	}
};


void Example1() {
	{
		printf("��� virtual ~A");
		B *child = new B();
		A *parent = child;
		delete parent;
	}
	{
		printf("� virtual ~AB");
		BB* child = new BB();
		AB* parent = child;
		delete parent;
	}
	{
		printf("��� virtual foo\n");
		B* child = new B();
		A* parent = child;
		parent->foo();
		delete parent;
	}
	{
		printf("� virtual foo\n");
		BB* child = new BB();
		AB* parent = child;
		parent->foo();
		delete parent;
	}
}
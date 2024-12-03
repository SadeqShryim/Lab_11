#ifndef FRACTIONHANDLER_H
#define FRACTIONHANDLER_H

#include <iostream>
using namespace std; 


class FractionHandler
{
public:
	FractionHandler(int nume = 4, int deno = -9);
	~FractionHandler();

    void display() const;

    bool checkLess(const FractionHandler& target) const;
    bool checkGreater(const FractionHandler& target) const;
    bool check_Less_Or_Equal(const FractionHandler & target) const;
    bool check_Greater_Or_Equal(const FractionHandler & target) const;
    bool checkEqual(const FractionHandler & target) const;

    FractionHandler Addition(const FractionHandler & target) const;
    FractionHandler Subtraction(const FractionHandler & target) const;
    FractionHandler Multiplication(const FractionHandler& target) const;
    FractionHandler Division(const FractionHandler & target) const;

    FractionHandler &assign(const FractionHandler & Target);
private:
	int nume, deno;
	void reduction();
	void commDeno(FractionHandler &target);
};

#endif
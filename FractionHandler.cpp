#include "FractionHandler.h"

int ComputeGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num1 -= num2;
    }
    return num1;
}

FractionHandler::FractionHandler(int numerator, int denominator) : nume(nume), deno(denominator) {
    reduction();
}

FractionHandler::~FractionHandler() {
    cout << "Deleted Object: " << nume << "/" << deno << endl;
}

void FractionHandler::reduction() {
    int GCD = ComputeGCD(abs(nume), abs(deno));
    if (deno < 0) {
        nume = -nume;
        deno = -deno;
    }
    nume = nume / GCD;
    deno = deno / GCD;
}


void FractionHandler::commDeno(FractionHandler& target) {
    int LCM = (deno * target.deno) / ComputeGCD(abs(deno), abs(nume));
    nume = nume * (LCM / deno);
    target.nume = nume * (LCM / target.deno);
    deno = target.deno = LCM;//rewrite this
}
void FractionHandler::display() const {
    cout << nume << "/" << deno << endl;
}
bool FractionHandler::checkLess(const FractionHandler& target) const{
    FractionHandler attempt1 = *this, attempt2 = target;
    attempt1.commDeno(attempt2);
    return attempt1.nume < attempt2.nume;
}
bool FractionHandler::checkGreater(const FractionHandler& target) const {
    return target.checkLess(*this);
}
bool FractionHandler::check_Less_Or_Equal(const FractionHandler& target) const {
    return !target.checkLess(*this);
}
bool FractionHandler::check_Greater_Or_Equal(const FractionHandler& target) const {
    return !checkLess(target);
}
bool FractionHandler::checkEqual(const FractionHandler& target) const {
    FractionHandler attempt1 = *this, attempt2 = target;
    attempt1.commDeno(attempt2);
    return attempt1.nume == attempt2.nume;
}

FractionHandler::Addition(const FractionHandler &target)const{
    FractionHandler attempt1 = *this, attempt2 = target;
    attempt1.commDeno(attempt2);
    return FractionHandler(tem;
}
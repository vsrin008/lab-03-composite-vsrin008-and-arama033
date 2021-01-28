#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "Operator.hpp"
#include "op.hpp"
#include"math.h"

class Pow : public Operator {
	public:
		Pow(Base* left, Base* right) {this->left=left; this->right=right;} 
		double evaluate() { return pow(left->evaluate(), right->evaluate()); }
		std::string stringify() { return left->stringify() + "** " + right->stringify(); }
};
class TwoPowMock : public Base {
        public:
                TwoPowMock() {};
                virtual double evaluate() { return 2 ;}
                virtual std::string stringify() { return "2";}
};
class NegOnePowMock : public Base {
        public:
                NegOnePowMock() {};
                virtual double evaluate() { return -1; }
                virtual std::string stringify() { return "-1"; }
};

class ZeroPowMock : public Base {
        public:
                ZeroPowMock() {};
                virtual double evaluate() { return 0; }
                virtual std::string stringify() { return "0" ;}
};
#endif

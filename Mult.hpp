#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "Operator.hpp"
#include "op.hpp"

class Mult : public Operator {
	public:
                Mult(Base* left, Base* right) {this->left = left; this->right = right; } 
		double evaluate() { return left->evaluate() * right->evaluate(); }
		std::string stringify() { return left->stringify() + " * " + right->stringify(); }
};
#endif

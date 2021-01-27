#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"
#include "Operator.hpp"

class Add : public operator {
	public:
		
		Add(Base* left, Base* right) : left(left), right(right) {}
		Add(Base* left, Base* right)  {this->left = left; this->right = right;}
		double evaluate() { return left->evaluate() +right->evaluate(); }
		std::string stringify() { return left->stringify() + " + " + right->stringify(); }
};
#endif


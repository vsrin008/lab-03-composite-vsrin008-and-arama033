#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"
#include "Operator.hpp"

class Sub : public Operator {
        public:
               Sub(Base* left, Base* right) {this->left =left; this->right=right;}

                double evaluate() { return left->evaluate() - right->evaluate(); }
                std::string stringify() { return left->stringify() + " - " + right->stringify(); }
};
#endif

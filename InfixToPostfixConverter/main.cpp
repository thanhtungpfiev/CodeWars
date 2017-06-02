/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/2/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <stack>

using namespace std;

bool isOperand(const char &c)
{
    return std::isdigit(c);
}

bool isOperator(const char &c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    }
    return false;
}

bool isLeftParenthesis(const char &c)
{
    if (c == '(') {
        return true;
    }
    return false;
}


bool isRightParenthesis(const char &c)
{
    if (c == ')') {
        return true;
    }
    return false;
}

bool isLeftAssociativeOperator(const char &c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return true;
    }
    return false;
}

bool isRightAssociativeOperator(const char &c)
{
    if (c == '^') {
        return true;
    }
    return false;
}

int getOperatorWeight(const char &c)
{
    int weight = -1;
    switch (c) {
    case '+':
    case '-':
        weight = 1;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    case '^':
        weight = 3;
        break;
    default:
        break;
    }
    return weight;
}

bool hasPopOffStack(char const& c1, char const& c2) {
    int weight1 = getOperatorWeight(c1);
    int weight2 = getOperatorWeight(c2);
    if ((isLeftAssociativeOperator(c1) && (weight1 <= weight2))
            || (isRightAssociativeOperator(c1) && (weight1 < weight2))) {
        return true;
    }
    return false;
}

std::string to_postfix(const std::string& infix)
{
    std::string outfix;
    std::stack<char> buffer;
    for (const char &c : infix) {
        if (isOperand(c)) {
            outfix += c;
        } else if (isOperator(c)) {
            while (!buffer.empty() && isOperator(buffer.top()) && hasPopOffStack(c, buffer.top())) {
                {
                    outfix += buffer.top();
                    buffer.pop();
                }
            }
            buffer.push(c);
        } else if (isLeftParenthesis(c)) {
            buffer.push(c);
        } else if (isRightParenthesis(c)) {
            while (!buffer.empty() && !isLeftParenthesis(buffer.top())) {
                outfix += buffer.top();
                buffer.pop();
            }
            buffer.pop();
        }
    }
    while (!buffer.empty()) {
        outfix += buffer.top();
        buffer.pop();
    }
    for (unsigned int i = 0; i < infix.length(); ++i) {
        if (isOperand(infix[i])) {
            outfix.push_back(0x00);
        }
    }
    return outfix;
}

int main(int argc, char *argv[])
{
    cout << to_postfix("2*1+6") << endl;
    /* Test case
    Assert::That(to_postfix("2+7*5"), Equals("275*+"));
    Assert::That(to_postfix("3*3/(7+1)"), Equals("33*71+/"));
    Assert::That(to_postfix("5+(6-2)*9+3^(7-1)"), Equals("562-9*+371-^+"));
    Assert::That(to_postfix("(5-4-1)+9/5/2-7/1/7"), Equals("54-1-95/2/+71/7/-"));
    */
    return 0;
}

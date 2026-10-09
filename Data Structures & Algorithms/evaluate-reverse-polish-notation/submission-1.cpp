class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> inputStack;
        for ( const string& c : tokens)
        {
            if(c == "+" || c == "-" || c == "*" || c == "/")
            {
                int b = inputStack.top(); inputStack.pop();
                int a = inputStack.top(); inputStack.pop();
                if(c == "+")
                {
                    int res = a + b;
                    inputStack.push(res);
                }
                if(c == "*")
                {
                   int pro = a * b;
                   inputStack.push(pro);
                }
                if(c == "-")
                {
                  int sub = a - b;
                  inputStack.push(sub);
                }
                if(c == "/")
                {
                    int div = a / b;
                    inputStack.push(div);
                }
            }
            else
            {
                inputStack.push(stoi(c));
            }
        }

        return inputStack.top();

    }
};
class Solution {
public:

    int is_operators(string element)
    {
        if(element=="+")
            return 1;
        else if(element=="-")
            return 2;
        else if(element=="*")
            return 3;
        else if(element=="/")
            return 4;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> myStack;
        int result = 0;
        int first = 0,second=0;
        for (const auto &element : tokens) {
            result = is_operators(element);
            if(result)
            {
                first = myStack.top();
                myStack.pop();

                second = myStack.top();
                myStack.pop();

                switch(result)
                {
                    case 1:
                        result= second + first;
                        break;
                    case 2:
                        result= second - first;
                        break;
                    case 3:
                        result = second * first;
                        break;
                    case 4:
                        result = second/first;
                        break;
                }   

                myStack.push(result);
            }
            else{
                myStack.push(atoi(element.c_str()));
            }
        }

        return myStack.top();
    }
};
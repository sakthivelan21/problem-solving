class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> my_stack;
        char temp;
        int t_count,f_count;
        for(int i=0;i<expression.size();i++)
        {
            if(expression[i]!=',')
            {
                // process
                if(expression[i]==')')
                {
                    t_count=0;
                    f_count=0;
                    while(!my_stack.empty() && my_stack.top()!='(')
                    {
                        temp = my_stack.top();
                        my_stack.pop();
                        if(temp=='t')
                            t_count++;
                        else if(temp=='f')
                            f_count++;
                    }
                    // pop '('
                    my_stack.pop();
                    if(!my_stack.empty())
                    {
                        // pop expression 
                        temp= my_stack.top();
                        my_stack.pop();
                        // printf("%c %d %d\n",temp,t_count,f_count);
                        if(temp=='|')
                        {
                            if(t_count)
                            {
                                my_stack.push('t');
                            }
                            else if(f_count){
                                my_stack.push('f');
                            }
                        }
                        else if(temp=='&')
                        {
                            if(t_count && !f_count)
                                my_stack.push('t');
                            else if(f_count)
                                my_stack.push('f');
                        }
                        else if(temp=='!')
                        {
                            if(t_count)
                            {
                                my_stack.push('f');
                            }
                            else if(f_count){
                                my_stack.push('t');
                            }
                        }

                        
                    }
                }
                else 
                    my_stack.push(expression[i]);
            }
        }
        return (my_stack.top()=='t') ? true : false;
    }
};
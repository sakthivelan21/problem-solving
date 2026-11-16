class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;
        int a,b,c;

        for(int i=0;i<tokens.size();i++)
        {
            // operator
            if(tokens[i].size()==1 && !isdigit(tokens[i][0]))
            {
                b = st.top();st.pop();
                a = st.top(); st.pop();

                switch(tokens[i][0])
                {
                    case '+':
                        c=a+b;break;
                    case '-':
                        c=a-b;break;
                    case '*':
                        c=a*b;break;
                    case '/':
                        c=a/b;
                        break;
                }
                // printf("%d %c %d = %d\n",a,tokens[i][0],b,c);
                st.push(c);
            }
            else {
                int num = stoi(tokens[i]);
                st.push(num);
            }
        }  
        return st.top(); 
    }
};
class Solution {
public:
    int calPoints(vector<string>& operations) {
        #include<stack>
        stack<int> stack;
        // int top = -1;
        for(int i=0; i<operations.size(); i++){
            if (operations[i] == "D"){
                int n = stack.top() * 2;
                stack.push(n);
            }
            else if(operations[i] == "C"){
                stack.pop();
            }
            else if(operations[i] == "+"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.push(a);
                stack.push(a+b);
            }
            else{
                int y;
                y = stoi(operations[i]);
                stack.push(y);
            }

        }
        int sum = 0;
        while(!stack.empty()){
                sum += stack.top();
                stack.pop();
            }
        return sum;
    }
};
class Solution {
public:
    string interpret(string command) {
        string res="";
        int n=command.size();
        for(int i=0;i<n-1;i++){
            if(command[i]=='(' && command[i+1]==')'){
                res+='o';
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                res+="al";
                i+=3;
            }
            else
            res+=command[i];
        }
        if(command[n-1]=='G')
            res+='G';
        return res;
    }
};
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        int i=0,j=0,k=n;
        while(i<n){
            if(sandwiches[i]==students[j]){
                i++;
                j++;
                k=n-i;
            }
            else{
                students.push_back(students[j]);
                j++;
                k--;
            }
            if(k==0)
                break;
        }
        return n-i;
    }
};
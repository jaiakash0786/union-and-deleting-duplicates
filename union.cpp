#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n, m;
   
    cout << "Enter size of 1st array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of 1st array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of 2nd array: ";
    cin >> m;

    int b[m];
    cout << "Enter the elements of 2nd array: " << endl;
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int total = n + m;
    int totalarray[total];

    for(int i = 0; i < n; i++) {
        totalarray[i] = a[i];
    }

    for(int i = 0; i < m; i++) {
        totalarray[n + i] = b[i];
    }
    for(int i=0;i<total;i++){ //sorting
        for(int j=i+1;j<total;j++){
            if(totalarray[i]>totalarray[j]){
                int temp = totalarray[j];
                totalarray[j]=totalarray[i];
                totalarray[i]=temp;
        }}
    }
    stack<int>s;
    stack<int>u;
    for(int ch : totalarray){ // stack initialising
        if(!s.empty() && ch == s.top() ){
        }
        else{
            s.push(ch);
        }
    }
    stack<int> ascendingstack;
    while(!s.empty()){
        ascendingstack.push(s.top());
        s.pop();
    }

    cout<<endl<<"result :"<<endl;
    while(!ascendingstack.empty()) { // in ascending order
        cout << ascendingstack.top() << endl;
        ascendingstack.pop();
    }
   
    return 0;
}

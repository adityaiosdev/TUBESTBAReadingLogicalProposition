#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string input;
    cout<<"Input : ";
    getline(cin,input);
    stack <string> token;
    stack <char> lexical;
    int i = 0 ;
    int j = 0 ;
    int k = 0;
    lexical.push('#');
    bool t= true;
    cout<<"Output (Token Lexic): ";
    while (i<input.size() && t)
    {
        if(input[i] == ' ')
        {
            i++;
        }
        else if((input[i] == 'p' ||input[i] == 'q' ||input[i] == 'r' || input[i] == 's') &&input[i+1] ==' ' )
        {
            i++;
            cout<< "1 ";
            token.push("1");
        }
        else if((input[i] == 'p' ||input[i] == 'q' ||input[i] == 'r' || input[i] == 's')&& input.size()==0 )
        {
            i++;
            cout<< "1 ";
            token.push("1");
        }
        else if((input[i] == 'p' ||input[i] == 'q' ||input[i] == 'r' || input[i] == 's'))
        {
            i++;
            cout<< "1 ";
            token.push("1");
        }

        else if(input[i] == 'n' && input[i+1] == 'o' && input[i+2] == 't'&&input[i+3]==' ')
        {
            cout<< "2 ";
            i+=3;
            token.push("2");
        }
        else if(input[i] == 'n' && input[i+1] == 'o' && input[i+2] == 't'&&input[i+3]==' ')
        {
            cout<< "2 ";
            i+=3;
            token.push("2");
        }
        else if(input[i] == 'a' && input[i+1] == 'n' && input[i+2] == 'd'&& input[i+3] == ' ')
        {
            cout<< "3 ";
            i+=3;
            token.push("3");
        }
        else if(input[i] == 'o' && input[i+1] == 'r'&& input[i+2] == ' ')
        {
            cout<< "4 ";
            i+=2;
            token.push("4");
        }
        else if(input[i] == 'x' && input[i+1] == 'o' && input[i+2] == 'r'&& input[i+3] == ' ')
        {
            cout<< "5 ";
            i+=3;
            token.push("5");
        }
        else if(input[i] == 'i' && input[i+1] == 'f' && input[i+2] == ' ')
        {
            cout<< "6 ";
            i+=3;
            token.push("6");
        }
        else if(input[i] == 't' && input[i+1] == 'h' && input[i+2] == 'e' && input[i+3] == 'n'&& input[i+4] == ' ')
        {
            cout<< "7 ";
            i+=4;
            token.push("7");
        }
        else if(input[i] == 'i' && input[i+1] == 'f' && input[i+2] == 'f'&& input[i+3] == ' ' )
        {
            cout<< "8 ";
            i+=3;
            token.push("8");
        }
        else if(input[i] == '(')
        {
            cout<< "9 ";
            i++;
            lexical.push('(');
            token.push("9");
        }
        else if(input[i] == ')'&&input[i+1]==' ')
        {
            cout<< "10 ";
            i++;
            lexical.push(')');
            token.push("10");
        }
        else if((input[i] == ')'))
        {
            cout<< "10 ";
            i++;
            lexical.push(')');
            token.push("10");
        }
        else
        {
            cout<< "error";
            t= false;
            break;
        }
    }

    if (t==false){
        cout<<endl;
        cout<<"TIDAK VALID";
        return 0;
    }
    cout<<endl;
    t== true;
        while (!token.empty()){
        if (token.top()=="1"){
            token.pop();
            if(token.empty()){
                break;
            }else if (token.top()=="1"){
                t=false;
                break;
            }
        }
        if(token.top() == "2"){
            token.pop();
            if (token.empty()){
                break;
            }else if(token.top()=="1"||token.top() =="2" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if(token.top() == "3"){
            token.pop();
            if(token.top ()=="2"|| token.top() =="3" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if (token.top()=="4"){
            token.pop();
            if(token.top ()=="2"|| token.top() =="3" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if (token.top()=="5"){
            token.pop();
            if(token.top ()=="2"|| token.top() =="3" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if(token.top() == "6"){
            token.pop();
            if (token.empty()){
                break;
            }else if(token.top()=="1"||token.top() =="2" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if (token.top() == "7"){
            token.pop();
            if(token.top() =="2" || token.top() =="3"|| token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8"){
                break;
            }
        }
        if (token.top()== "8"){
            token.pop();
            if(token.top ()=="2"|| token.top() =="3" || token.top() =="4" || token.top() =="5" || token.top() =="6" || token.top() =="7" || token.top() =="8" ){
                break;
            }
        }
        if (token.top()=="9" ){
            token.pop();
            if(token.empty()){
                break;
            }
            else if(token.top()=="1"||token.top()=="9"||token.top()=="10"){
                t= false;
                break;
            }
        }
        if (token.top()=="10"){
            token.pop();
            if (token.top()=="2"||token.top()=="3"||token.top()=="4"||token.top()=="5"||token.top()=="6"||token.top()=="7"||token.top()=="8"||token.top()=="9"){
                break;
            }
        }

    }
        if (t==false){
            cout<<"TIDAK VALID";
            return 0;
        }
        while (!lexical.empty()&&t==true){
            if (lexical.top()=='#'){
                lexical.pop();
                break;
            }
            if (lexical.top()==')'){
                lexical.pop();
                j++;
            }
            if(lexical.top()=='('){
                    while(k<j){
                        lexical.pop();
                        k++;
                    }
            }
            }

        if(token.empty()&&lexical.empty()){
            cout<<"VALID";
        }else{
            cout<<"TIDAK VALID";
        }
    return 0;
}

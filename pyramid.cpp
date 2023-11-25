// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter limit for pyramid"<<endl;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<" ";
//         }
//         for(int k=0;k<(2*i-1);k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;}

#include<iostream>
using namespace std;
int main(){
    int n;
    char c=97;
    cout<<"enter limit for pyramid"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"\t";
        }
        for(int k=0;k<(2*i-1);k++){
            cout<<c<<"\t";
            c++;
        }
        cout<<endl<<endl;
    }
    
    return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char c=97;
//     cout<<"enter limit for pyramid"<<endl;
//     cin>>n;
//     for (int i=n;i>=1;i--)
//     {
//         for(int j=0;j<(n-i);j++)//loop for printing spaces
//         {
//             cout<<"\t";
//         }
//         for(int k=0;k<(2*i-1);k++)//loop for printing *s
//         {
//             cout<<"*"<<"\t";
//             c++;
//         }
//         cout<<endl<<endl;
//     }
    
//     return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter limit for pyramid"<<endl;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<" ";
//         }
        
//         for(int k=0;k<(2*i-1);k++){
//             if (k%2!=0){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;
//     }
    
//     return 0;}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter limit for pyramid"<<endl;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<" ";
//         }
//         for(int k=0;k<i;k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;
// int main(){
//     int limit,num;
//     cout<<"Enter a limit"<<endl;
//     cin>>limit;
//     cout<<"\n"<<endl;
//     num=0;
//     while (num <=limit){
//         cout<<num<<endl;
//         num++;
//     }

//     return 0;}

// int main(){
//     int limit,sum,num=1;
//     cout<<"Enter a limit"<<endl;
//     cin>>limit;
//     sum=0;
//     while (num <=limit){
//         sum+=num;
//         num++;
//     }
//     cout<<"The sum upto "<<limit<<" : "<<sum<<endl;

//     return 0;}

int main()
{
    int limit, sum, num = 1;
    cout << "Enter a limit" << endl;
    cin >> limit;
    sum = 0;
    while (num <= limit)
    {
        if (num % 2 == 0)
        {
            sum += num;
        }
        num++;
    }
    cout << "The sum upto " << limit << " : " << sum << endl;

    return 0;
}
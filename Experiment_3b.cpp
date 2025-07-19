//Name-Darshan Soni
//PRN-24070123034
//Exp3

//Calculate student's Grade

#include<iostream>
using namespace std;

int main(){
    int m,e,s,h,ss,sum,average;
    cout<<"Enter mathematics score:"<<endl;
    cin>>m;
    cout<<"Enter science score:"<<endl;
    cin>>s;
    cout<<"Enter english score:"<<endl;
    cin>>e;
    cout<<"Enter hindi score:"<<endl;
    cin>>h;
    cout<<"Enter social studies score:"<<endl;
    cin>>ss;

    sum=m+s+e+h+ss;
    average=sum/5;

    if(average>=90){
        cout<<"Grade=A!";
    }
    else if(average>=80 ){
        cout<<"Grade=B!";
    }
    else if(average>=70){
        cout<<"Grade=C!";
    }
    else if(average>=60){
        cout<<"Grade=D!";
    }
    else if(average>=50){
        cout<<"Grade=E!";
    }
    else {
        cout<<"Grade=F!";
    }
    return 0;
}


/*
Output
Enter mathematics score:
56
Enter science score:
89
Enter english score:
90
Enter hindi score:
56
Enter social studies score:
89
Grade=C!
*/
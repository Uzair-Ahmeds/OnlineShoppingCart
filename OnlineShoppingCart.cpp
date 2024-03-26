#include <iostream>
using namespace std;
int main(){int 
x,qnt_books,qnt_tshirt,qnt_shoes,book_qnt,shirt_qnt,shoes_qnt,price_shirt,price_book,price_shoes,tot
al_sum;
cout<<"1. books per item price i : 500"<<endl;
cout<<"2. T-shirt per item price i : 700"<<endl;
cout<<"3. shoes per pair price i : 1000"<<endl;
cout<<"0. to exit programe "<<endl;
cin>>x;
if(x==0)
{
cout<<endl<<"no matter next time";
return 0;}
for(;x>=1 && x<=3;){
if(x==1){
cout<<"enter the quantity of books : ";cin>>qnt_books;
book_qnt+=qnt_books;
price_book =qnt_books*500;}
else if (x==2)
{
cout<<endl<<"quantity for t shirts : ";cin>>qnt_tshirt;
shirt_qnt +=qnt_tshirt;
price_shirt += qnt_tshirt*700;
}
else if (x==3)
{
cout<<endl<<"quantity for shoes : ";cin>>qnt_shoes;
shoes_qnt +=qnt_shoes;
price_shoes=qnt_shoes*1000;}
else if (x==0)
break;
cout<<"1. books per item price i : 500"<<endl;
cout<<"2. T-shirt per item price i : 700"<<endl;
cout<<"3. shoes per pair price i : 1000"<<endl;
cout<<"0. to exit programe "<<endl;
cin>>x;
}
cout<<endl<<"quantity of books is : "<<book_qnt;
cout<<endl<<"quantity of shirt is : "<<shirt_qnt;
cout<<endl<<"quantity of shoes is : "<<shoes_qnt;
cout<<endl<<"total price is of book is : "<<price_book;
cout<<endl<<"total price is of shirt is : "<<price_shirt;
cout<<endl<<"total price is of shoes is : "<<price_shoes;
total_sum=price_book+price_shirt+price_shoes;
cout<<endl<<"total price is : "<<total_sum;
return 0;
}

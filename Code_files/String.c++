#include<iostream>
#include<string>

using namespace std;

int main()
{   
    // string str = "Vivek";
    // string::iterator it;
    // int count=0;
    // for (it = str.begin(); it != str.end(); it++){
    //     count++;
    // }
    // cout<<count;
    
    // for (int i = 0; i <=str.length(); i++)
    // {
    //     if (str[i]>=65 && str[i]<=90)
    //     {
    //         str[i]=str[i]+32;
    //     }
        
    // }
    // cout<<str;
    
    // string str="How many words";
    // int vowel=0;
    // int consonent=0;
    // int space=1;
    // for (int i = 0; i <=str.length(); i++)
    // {
    //     if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i' || str[i]=='o'|| str[i]=='u'){
    //         vowel++;
    //     }
    //     else if(str[i]==' '){
    //         space++;
    //     }
    //     else{
    //         consonent++;
    //     }
    // }
    // cout<<"vowel="<<vowel<<endl;
    // cout<<"consonent="<<consonent<<endl;
    // cout<<"words="<<space<<endl;

    // string str="MADAM";

    // string rev="";

    // int len=(int)str.length();
    // rev.resize(len);

    // for (int i = 0, j = len-1;i<len; i++,j--)
    // {
    //     rev[i]=str[j];

    // }
    // rev[len]='\0';

    // if(str.compare(rev)==0){
    //     cout<<"palindrome";
    // }
    // else {
    //     cout<<"not palindrome";
    // }

    string email="rajakvivek080@gmail.com";

    int i=(int)email.find('@');

    string uname=email.substr(0,i);

    cout<<"Username is "<<uname<<endl;

    
    
    
    return 0;


}
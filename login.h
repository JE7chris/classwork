#ifndef Login_H
#define Login_H

#include<fstream>
#include<string>
#include<iostream>
#include<regex>
using namespace std;

bool check_login(string username,string passwd);

bool check_login(string username,string passwd)
{
    
}

class UserLogin{
    public:
    UserLogin(string username,string passwd)
    :username(username),passwd(passwd){
    }
    int Login()
    {
        fstream file("user.txt",ios::in);

        if(!file)
        {
            cout<<"打开用户信息文件失败！"<<endl;
            return 0;
        }

        string content;
        regex pattern("^" + username + "," + passwd + "$");

        while(getline(file,content))
            {
            getline(file,content);
            int pos = content.find(',');
            string username_txt = content.substr(0, pos);
            string passwd_txt = content.substr(pos + 1);

            if(passwd == passwd_txt &&username == username_txt)
            {
                cout<<"登陆成功！"<<endl;
                return 1;
            }
        }
        cout<<"登陆失败！"<<endl;
        return 0;
    }
      

    private:
    string username;
    string passwd;
};

#endif
#include "menu.h"
#include "signup.h"
#include "login.h"

int main(int argc, char const *argv[])
{
    PrintMenu menu;
    int n;

    n = menu.MainMenu();
    
    if(n == 1)
    {
        
    }



    else if(n == 2)
    {
        string username,passwd;
        cout<<"输入你要登陆的用户名称:"<<endl;
        cin>>username;
        cout<<"输入你的密码:"<<endl;
        cin>>passwd;
        UserLogin login(username,passwd);
        if(login.Login())
        {
            switch(menu.UserMenu())
            {
                //等待完善。。。。。
                case 1 : cout<<1;break;
                case 2: cout<<2;break;
                case 3: cout<<3;break;
            }

        }
    }

    else if(n == 3)
    {;
        string username;
        string passwd;
        cout<<"请输入用户名: 只包含数字和字母并且小于十位"<<endl;
        cin>>username;
        cout<<"请输入用户密码: 至少包含一个大写字母，小写字母和$@$!%*?&之内的特殊字符并且大于八位"<<endl;
        cin>>passwd;
        UserInfo info(username,passwd);
        info.signup();
        

    }

    else if(n == 4)
    {
        cout<<"退出成功";
        return 0;
    }

    else{
        cout<<"非法输入！！！";
    }
    return 0;
}

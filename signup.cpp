#include "signup.h"

        bool check_username(const std::string& username) {
    // 用户名不能大于十个字符，且只包含数字和字母
    std::regex pattern("^[a-zA-Z0-9]{1,10}$");
    return std::regex_match(username, pattern);
}

        bool check_password(const std::string& password) {
    // 密码大于八个字符，且至少带有一个大写字母，一个小写字母，一个特殊符号
    std::regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*[1-9])(?=.*[$@$!%*?&])[A-Za-z1-9$@$!%*?&]{8,}");
    return std::regex_match(password, pattern);
}
         
    void UserInfo::signup()
        {
            std::ofstream file;
            file.open("user.txt",std::ios::app);
             
             //检查文件是否打开
            if(!file)
            {
                std::cout<<"打开文件失败！"<<std::endl;
                return;
            }
            
            bool isvalid;

            isvalid = check_username(username);

        if(!check_username(username))
        {
            std::cout<<"格式不正确！"<<std::endl;
            return;
        } 

        if(!check_password(passwd))
        {
            std::cout<<"密码格式不正确！"<<std::endl;
            return;
        } 

            file<<username<<","<<passwd<<std::endl;
            std::cout<<"注册成功！"<<std::endl;
        } 

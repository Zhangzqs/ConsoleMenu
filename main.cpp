#include <iostream>

#include "Menu.hpp"

using namespace zzq;
int main() {
    Menu menu("主菜单");
    
    menu.addItem(new MenuItem("菜单项1",[](){
        std::cout<<"菜单项1被打开"<<std::endl;
    }));
    menu.addItem(new MenuItem("菜单项2",[](){
        Menu menu2("菜单项2的子菜单");     //创建次级菜单
        menu2.addItem("子菜单1",[](){
            std::cout<<"子菜单1被打开"<<std::endl;
        });
        menu2.addItem("子菜单2",[](){
            std::cout<<"子菜单2被打开"<<std::endl;
        });
        menu2.addExitItem("Exit");  //自定义退出选项的文本
        menu2.loop();
    }));

    menu.addExitItem();
    menu.loop();
    return 0;
}

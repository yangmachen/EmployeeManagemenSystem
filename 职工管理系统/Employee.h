#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;

class Employee:public Worker
{
public:
    Employee(int id, string name, int dept_id);
    // 显示信息
    void show_info();
    // 获取岗位名称
    string get_dept_name();

    ~Employee();
};
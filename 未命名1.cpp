#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	cout<<"pandownload超级修改版启动完毕，在关闭pandownload之前请勿关闭本窗口！！！"<<endl<<endl;
	cout<<"项目更新地址："<<endl;
	cout<<"https://github.com/iamnottsh/PanDownloadSuperModified"<<endl; 
	cout<<"在此向蔡某萌致敬"<<endl<<endl; 
	cout<<"若您没有丰富的电脑经验，请不要更改软件内的任何设置"<<endl; 
	cout<<"使用过程中出现错误请把log文件夹下的log.out发送至我的邮箱kusualflare@gmail.com并简单说明问题";
	freopen("log\\log.out","w",stdout);
	WinExec("PanDownload\\pandownload.exe",SW_SHOWMAXIMIZED);
	WinExec("pdproxy\\pdproxy.exe",SW_SHOWMAXIMIZED);
	WinExec("pdproxy\\proxyset.exe",SW_SHOWMAXIMIZED);
} 

#include "Client.h"

//获取当前时间戳
string Client::C_TS()
{
	time_t now;
	struct tm pt;
	time(&now);
	localtime_s(&pt, &now);
	string ts;
	string year, mon, day, hour, min, sec;
	year = to_string(pt.tm_year - 100);
	if (year.length() == 1)
	{
		year = "0" + year;
	}
	mon = to_string(pt.tm_mon + 1);
	if (mon.length() == 1)
	{
		mon = "0" + mon;
	}
	day = to_string(pt.tm_mday);
	if (day.length() == 1)
	{
		day = "0" + day;
	}
	hour = to_string(pt.tm_hour);
	if (hour.length() == 1)
	{
		hour = "0" + hour;
	}
	min = to_string(pt.tm_min);
	if (min.length() == 1)
	{
		min = "0" + min;
	}
	sec = to_string(pt.tm_sec);
	if (sec.length() == 1)
	{
		sec = "0" + sec;
	}
	ts = year + mon + day + hour + min + sec;
	return ts;
}

//AS通信数据封装函数，根据Client向AS所需发送的数据进行封装加密 20位
string Client::C_ASDataEncapsulation(string IDTGS)
{
	string tgsid = "2001";
	//TGSid默认2001
	string C_AS = "";
	string ts1=C_TS();
	C_AS += IDTGS;
	C_AS += tgsid;
	C_AS += ts1;
	return C_AS;
}

//AS通信数据解封装函数，根据AS发来的数据包，进行解密拆分
string Client::C_ASDataDeEncapsulation()
{

}

//TGS通信数据封装函数，根据Client向TGS所需发送的数据进行封装加密
string Client::C_TGSDataEncapsulation(string IDV, string TicketTGS)
{
	
}

//TGS通信数据解封装函数，根据TGS发来的数据包，进行解密拆分
string Client::C_TGSDataDeEncapsulation()
{

}

//客户服务器通信数据封装函数，根据Client向服务器所需发送的数据进行封装加密
string Client::C_VDataEncapsulation(string TicketV)
{

}

//客户服务器通信数据解封装函数，根据TGS发来的数据包，进行解密拆分
string Client::C_VDataDeEncapsulation()
{

}
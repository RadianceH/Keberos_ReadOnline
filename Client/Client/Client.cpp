#include "Client.h"

//��ȡ��ǰʱ���
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

//ASͨ�����ݷ�װ����������Client��AS���跢�͵����ݽ��з�װ���� 20λ
string Client::C_ASDataEncapsulation(string IDTGS)
{
	string tgsid = "2001";
	//TGSidĬ��2001
	string C_AS = "";
	string ts1=C_TS();
	C_AS += IDTGS;
	C_AS += tgsid;
	C_AS += ts1;
	return C_AS;
}

//ASͨ�����ݽ��װ����������AS���������ݰ������н��ܲ��
string Client::C_ASDataDeEncapsulation()
{

}

//TGSͨ�����ݷ�װ����������Client��TGS���跢�͵����ݽ��з�װ����
string Client::C_TGSDataEncapsulation(string IDV, string TicketTGS)
{
	
}

//TGSͨ�����ݽ��װ����������TGS���������ݰ������н��ܲ��
string Client::C_TGSDataDeEncapsulation()
{

}

//�ͻ�������ͨ�����ݷ�װ����������Client����������跢�͵����ݽ��з�װ����
string Client::C_VDataEncapsulation(string TicketV)
{

}

//�ͻ�������ͨ�����ݽ��װ����������TGS���������ݰ������н��ܲ��
string Client::C_VDataDeEncapsulation()
{

}
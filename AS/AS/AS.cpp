<<<<<<< HEAD
#include"AS.h"
#include<iostream>




=======
#include "AS.h"

string ASserver::GetTicketTGS(string KeyCTGS, string IDC, string CAddr, string IDTGS, int LifeTime2)
//��װ��������Client��TGS��֤����Ҫ��TicketTGS
{
	string ticketTGS="";
	ticketTGS += KeyCTGS;
	ticketTGS += IDC;
	
	ticketTGS += LifeTime2;
	ticketTGS+=
	return ticketTGS;
}

string ASserver::AS_CDataEncapsulation(string TicketTGS, string KeyCTGS, string IDTGS, int LifeTime2)
//��װ����������������Ҫ����Client�����ݰ�
{

}

string ASserver::AS_CDataDeEncapsulation()
//��Client���������ݰ����н��װ
{
	
}
>>>>>>> 3fdc692d67a0939321ff262c215ff6feb6b716dc

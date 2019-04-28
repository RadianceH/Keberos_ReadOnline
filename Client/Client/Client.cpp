#include"Client.h"
#include<iostream>

Client::Client(string Addr)
{
	CAddr = Addr;
}

void Client::SocketLink(string SockAddr, int SockPort)
{
	const char SAddr[15]=SockAddr.data;
	WSADATA wsd;
	WSAStartup(MAKEWORD(2, 2), &wsd);
	ClientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	SOCKADDR_IN  ClientAddr;

	ClientAddr.sin_family = AF_INET;
	ClientAddr.sin_addr.S_un.S_addr = inet_addr(SAddr);
	ClientAddr.sin_port = htons(SockPort);

	int n = 0;
	n = connect(ClientSocket, (struct sockaddr*)&ClientAddr, sizeof(ClientAddr));
	if (n == SOCKET_ERROR) {
		cout << "����ʧ��" << endl;
		return ;
	}
	cout << "���ӳɹ���" << endl;
	return;
}

void Client::SendData(string info)
{
	char SendBuff[1024] = info.data;
	int n = 0;
	n = send(ClientSocket, SendBuff, sizeof(SendBuff), 0);
	if (n < 0) {
		cout << "����ʧ��" << endl;
	}
	else cout << "���ͳɹ���" << endl;
}

string Client::RecvData()
{
	char RecvBuff[1024];
	string Recvdata;
	int n = 0;
	n = recv(ClientSocket, RecvBuff, sizeof(RecvBuff), 0);
	if (n > 0) {
		cout << "���յ����Է���������ϢΪ��" << RecvBuff << endl;
	    Recvdata = RecvBuff;
		return Recvdata;
	}
	else
	{
		cout << "δ���ܵ���Ϣ" << endl;
		return Recvdata;
	}
}

void Client::ExitSocket()
{
	closesocket(ClientSocket);
	WSACleanup();
}
#pragma once
#include"INetMediator.h"
class UdpMediator :public INetMediator
{
public:
	UdpMediator();
	 ~UdpMediator();//ʹ��ʱ������ָ��ָ�����࣬ʹ��������
	//��ʼ������
	 bool OpenNet() ;
	//�ر�����
	 void CloseNet() ;
	//��������
	 bool SendData(long lSendlp, const char* buf, int nLen);
	//��������
	 void DealData(long lSendlp, const char* buf, int nLen) ;
};
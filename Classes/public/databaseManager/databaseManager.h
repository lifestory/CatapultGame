#ifndef __DATABASE_MANAGER_H__
#define __DATABASE_MANAGER_H__

using namespace std;
#include"string"
#include"cocos2d.h"
USING_NS_CC;

#define database UserDefault::getInstance()
#define storeIntToXML UserDefault::getInstance()->setIntegerForKey
#define getIntFromXML UserDefault::getInstance()->getIntegerForKey

struct dataTemplete {
	int recordNum;//�ڼ�����¼
	int highestGameLevel;//��ߵ��ڼ���
	int totalScore;//�ܵ÷�

	//items:
	int bloodBottleNum;//Ѫƿ��
	int blueBottleNum;//��ƿ��
	int weapon1Num;//����1������
	int weapon2Num;//����2������
	int coinNum;//�����

	int currentArcherLevel;//���ֵĵȼ�
	int exp;

	string date;
};

class databaseManager {
public:
	static dataTemplete databaseSelete(int recordNum);
	static void databaseSave(dataTemplete);
	
};

#endif
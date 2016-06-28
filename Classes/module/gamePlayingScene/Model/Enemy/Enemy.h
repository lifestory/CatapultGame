#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "cocos2d.h"
#include "../archer/archer.h"
#include"../../../../public/parameterManager/ParameterManager.h"
#include"../../../../public/Constant/Constant.h"

USING_NS_CC;

#define pi 3.141592654

class Enemy :public cocos2d::Node{
public:
	void onEnter();
	void onExit();
	/*
	Ĭ����ͼ�����Ͻ�������һ��ģʽΪ2�ĵ���
	*/
	//CREATE_FUNC(Enemy);
	//virtual bool init();

	/*
	�ڣ�_locX, _locY����������һ��Ѫ����_blood��ģʽΪ_mode�ĵ���
	*/
	void setParameter(Vec2 initialLocation, int _blood);

	void createProgressTimer();
	ProgressTimer* getProgressTimer();
	Sprite* getEnemySprite();
	/*
	����һ���粼�֣�������Ϊ5��������������һ֧��ͨ�����ɻ�ɱ��
	*/
	//void createEnemyOne();

	/*
	����һ��սʿսʿ����ս������������Ϊ10���������������������ܻ�ɱ��
	*/
	//void createEnemyTwo();

	/*
	�����֣������ƶ�������Զ�̹�����������Ϊ10���������������������ܻ�ɱ��
	*/
	//void createEnemyArrow();

	/*
	ħ��ʦ��Զ�̹�����ÿ3��˲ʱ�ƶ�һ������λ�ã������ѻ�ɱ��һ����
	������Ϊ15���������������������ܻ�ɱ��
	*/
	//void createEnemyMagic(Enemy* _enemy);

	void setBlood(int _blood);

	int getPower();
	int getBlood();
	int getMode();
	int getShadowNumber();

	virtual void setLoc(float dt) = 0;
	virtual int attack() = 0;
	virtual void attackCancel() = 0;
	virtual Sprite* createDispearSprite(Vec2) = 0;

protected:
	//��ʼ��X����
	//float locX;

	//��ʼ��Y����
	//float locY;

	//	Ѫ��
	int blood;

	/*����ģʽ
	mode 0   Undefined
	mode 1   Move enemy
	mode 2   Arrow enemy
	*/
	int mode;
	int power;

	//����,falseΪ��trueΪ��
	bool direction;

	bool attackShadowExist;
	char trueNumber[20];
	int shadowNumber;
	Sprite* enemySprite;
	Sprite* attackSprite;
	Action* currentAttackAction;

	ProgressTimer* progressTimer;
};

#endif
#ifndef __ARCHER_H__
#define __ARCHER_H__

#include "cocos2d.h"
#include"../../../../public/Constant/Constant.h"
#include"../../../../public/ParameterManager/ParameterManager.h"
#include"../../../../public/Item/itemInformation.h"
USING_NS_CC;

class archer : public cocos2d::Sprite{
public:
	static archer* getInstance();
	CREATE_FUNC(archer);
	virtual bool init();
	void setParameter();

	void createModel();
	void createBloodBar();

	void aimAt(Vec2);

	//���Բ���
	void setBlood(int value);
	void setInitialBlood(int value);
	int getBlood();
	int getInitialBlood();

	void setBlue(int value);
	void setInitialBlue(int value);
	int getBlue();
	int getInitialBLue();

	void setExp(int value);
	void setTotalExp(int value);
	int getExp();
	int getTotalExp();
	void addExp(int); 

	void setWeapon(int m);
	int getWeapon();

	void setScore(int);
	int getScore();
	void addScore(int);

	bool getDirection();

	void killEnemy(int mode);

	void jump();
	void running(bool direction,bool isClimbing);
	void stopping();
	void attacked(int);
	void death();
	void climb();
	void notClimb(bool isRunning);
	void climbUp();
	void climbDown();
	void stoppingClimbing();

private:
	archer();
	~archer();
	static archer* archer_;

	Sprite *head, *hand, *body;
	//�ܲ�����
	Sprite *runner;
	//��������
	Sprite *deathSprite;
	//Sprite *hand1, *hand2, *hand3;
	//climb����
	Sprite *climbSprite;
	Sprite *hpBgSprite;
	ProgressTimer *hpBar;
	Sprite *hpBar_back;
	Sprite *hpBar_fore;

	//Ѫ��
	int hpValue;
	int initialHpValue;
	//����
	int blueValue;
	int initialBlueValue;
	//����ֵ
	int expValue;
	int totalExpValue;
	//��������1,2,3
	int weapon;
	//���ص÷�
	int score;

	//����������Ϊfalse����Ϊtrue
	bool direction;
};

#endif
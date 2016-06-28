#ifndef __PARAMETER_MANAGER_H__
#define __PARAMETER_MANAGER_H__


#include"cocos2d.h"
USING_NS_CC;

struct ArcherParameter{
	cocos2d::Vec2 initialPosition;
	ArcherParameter();
	ArcherParameter(cocos2d::Vec2 _initialPosition);
};

struct EnemyParameter {
	cocos2d::Vec2 initialPosition;
	int mode;
	int blood;
	EnemyParameter();
	EnemyParameter(cocos2d::Vec2 _initialPosition, int _blood, int _mode);
};

struct EdgeParameter {
	cocos2d::Vec2 firstPoint;
	cocos2d::Vec2 secondPoint;
	int type;
	EdgeParameter();
	EdgeParameter(cocos2d::Vec2 _firstPoint, cocos2d::Vec2 _secondPoint, int _type);
};

struct GameParameterForLevels{
	int levelNum;
	Size mapSize;
	ArcherParameter* archerParameter;
	std::vector<EnemyParameter*> enemyParameter;
	std::vector<EdgeParameter*> edgeParameter;
	GameParameterForLevels(int _levelNum, Size _mapSize, ArcherParameter* _archerParameter, std::vector<EnemyParameter*> _enemyParameter, std::vector<EdgeParameter*> _edgeParameter);
};

struct LevelParameter  {
	int levelNum;
	int blood;
	int blue;
	int power;
	int levelUpExp;
};

class ParameterManager {
public:
	//ȫ�ֲ���
	//��ȡ�������������
	static Vec2 getGravity();
	//��ȡ��Ļ��С
	static Size getVisibleSize();
	//��ȡÿһ������
	static GameParameterForLevels* getGameParameterInstance(int levelNum);
	//ÿһ���ȼ��Ĳ���
	static LevelParameter* getLevelParameterInstance(int levelNum);
	//deleteָ��
	static void deleteAll();

	static int getCurrentGameLevel();
	static void setCurrentGameLevel(int);
	//static int getUnlockedLevel();
	//static void setUnlockedLevel(int);
	static int getArcherLevel();
	static void setArcherLevel(int);

	//�ذ�
	static float getBottomGroundHeight();
	//����
	//��ȡ���������ٶ�
	static float getArrow1MaxVelocity();

	//����
	//��ȡ�����ƶ����ʱ��
	//static float getEnemyMovingTime();

private:
	//ȫ�ֲ���
	static Vec2 gravity;//����
	static Size visibleSize;//���ӷ�Χ�ĳߴ�
	static int currentGameLevel;//��������ڼ���

	static GameParameterForLevels* level1GameParameter;
	static GameParameterForLevels* level2GameParameter;
	static GameParameterForLevels* level3GameParameter;
	static GameParameterForLevels* level4GameParameter;
	static GameParameterForLevels* level5GameParameter;

	static LevelParameter* level1Parameter;
	static LevelParameter* level2Parameter;
	static LevelParameter* level3Parameter;
	static LevelParameter* level4Parameter;
	static LevelParameter* level5Parameter;
	static LevelParameter* levelDefaultParameter;

	//�ذ�
	static float bottomGroundHeight;
	//����
	static float arrow1MaxVelocity;//��һ�ֹ���������ٶ�

	//����
	//static float enemyMovingTime;

};

#endif
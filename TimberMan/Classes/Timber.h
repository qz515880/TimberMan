#ifndef __Timber__
#define __Timber__

#include "cocos2d.h"
#include "TreeModel.h"
#include "audio/include/SimpleAudioEngine.h"

USING_NS_CC;
using namespace CocosDenshion;

class Timber : public Node
{
public:
	static Timber* createTimber();
	void initTimber();
	void playAction(TreeBranchDirection enums);
	void setTimberDie();
	TreeBranchDirection getTimberDir();
	void onReset();
private:
	Sprite* body;
	TreeBranchDirection dir;
};

#endif

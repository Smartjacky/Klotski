#ifndef SCENE_H
#define SCENE_H

#include "../entities/entity.h"
#include <vector>

class Scene
{
public:
	Scene(void);
	virtual ~Scene(void) {};
	virtual void load(void) = 0;
	virtual void unload(void) = 0;

	void setEntities(std::vector<Entity*>);
	std::vector<Entity*>& getEntities(void);
private:
	std::vector<Entity*> entities;
};

#endif

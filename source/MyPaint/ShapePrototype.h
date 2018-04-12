#pragma once

#include <vector>
#include "CLine.h"
#include "CRectangle.h"
#include "CEllipse.h"



#define SHAPE_LINE 0
#define SHAPE_RECTANGLE 1
#define SHAPE_ELLIPSE 2


class ShapePrototype
{
private:
	vector<Shape *> m_Model;
	int m_curShapeType;
public:
	// Constructor 
	ShapePrototype();
	~ShapePrototype();

	//Function
	bool setCurShapeType(int curShapeType);

	int getCurShapeType();

	bool addModel(Shape * model);

	Shape* createNewObject();	// Tạo một đối tượng mới theo shape hiện hành
};


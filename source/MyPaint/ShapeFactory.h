#pragma once
#include "CLine.h"
#include "CRectangle.h"
#include "CEllipse.h"

enum TypeShape {
	LINE,
	RECTANGLE,
	ELLIPSE
};

class ShapeFactory
{
public:
	// Constructor, Destructor
	ShapeFactory();
	~ShapeFactory();

	static Shape* GetObjectType(TypeShape _type);
};


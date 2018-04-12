#include "stdafx.h"
#include "ShapeFactory.h"

// Constructor, Destructor
ShapeFactory::ShapeFactory()
{
}

ShapeFactory::~ShapeFactory()
{
}

Shape* ShapeFactory::GetObjectType(TypeShape _type)
{
	switch (_type)
	{
		case LINE:
		{
			return new CLine();
		}
		break;
		case RECTANGLE:
		{
			return new CRectangle();
		}
		break;
		case ELLIPSE:
		{
			return new CEllipse();
		}
		break;
	}
	return NULL;
}

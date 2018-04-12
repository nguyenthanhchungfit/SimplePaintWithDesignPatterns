#include "stdafx.h"
#include "Shape.h"


Shape::Shape()
{
}


Shape::~Shape()
{
}

void Shape::setToaDo(Point LeftTop, Point RightBottom)
{
	this->m_LeftTop = LeftTop;
	this->m_RightBottom = RightBottom;
}

int Shape::getType()
{
	return this->type;
}

Point Shape::GetFirstPoint()
{
	return this->m_LeftTop;
}

Point Shape::GetSecondPoint()
{
	return this->m_RightBottom;
}

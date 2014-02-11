#pragma once

class Object
{
	public:
		int ID;
};


class Area
{
	public:
	float x,y;
	float w,h;
};

class QuadTree
{
	public:
		int north;
		int south;
		int west;
		int east;
		
	QuadTree *nw, *ne, *sw, *se;
	
	void add(Object object, Area area);
	

};
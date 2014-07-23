#ifndef __OBJLOADER_H_INCLUDED__
#define __OBJLOADER_H_INCLUDED__

#include <string>

class objloader{

// 
struct point{
	float x;
	float y;
	float z;
};

struct ptlistelement{
	point A;
	int position;

	ptlistelement * next;
};

public:
	struct triangle{
		point A;
		point B;
		point C;

		triangle * next;
	};

private:
	char filename[];

public:

	int size;
	triangle * list;

	objloader(char fn[]);
	void build_list();



	point getPoint(ptlistelement * head, int pos);
};

#endif
#ifndef COMMON_H
#define COMMON_H

//线条类型
#define SOLID_LINE	0xffff//实线
#define DASH_LINE	0xf8f8//虚线
#define DOT_LINE	0x8888//点线

#define ROUND(a) ((int)(a+0.5))
#define MAX(x,y)  ((x)>(y)?(x):(y))

typedef struct{
	float x,y;
}vec2f,wcPt2D;

typedef struct{
	float x,y,z;
}vec3f,wcPt3D;

//两数互换
inline void swap(int& ia,int& ib)
{
	ia=ia^ib;
	ib=ib^ia;
	ia=ia^ib;
}

#endif
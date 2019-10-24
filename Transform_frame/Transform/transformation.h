#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

// ����ƽ��(tx,ty,tz)�ľ���Txyz 
void matTxyz(float Txyz[][4],float tx,float ty,float tz);

// ������x����תtheta�ǣ���λΪ���ȣ��ľ���Rx 
void matRx(float Rx[4][4],float theta);

// ������y����תtheta�ǵľ���Ry 
void matRy(float Ry[4][4],float theta);

// ������z����תtheta�ǵľ���Rz 
void matRz(float Rz[4][4],float theta);

//��ָ����(���(0,0,0),�յ�(x,y,z))��תtheta�ǵľ���R
void matR(float R[4][4],float theta,float x,float y,float z);

// �������ž���Sxyz
void matSxyz(float Sxyz[4][4],float sx,float sy,float sz);

// 4�׷������ R=A*B 
void MatMul(float R[4][4],float A[4][4],float B[4][4]);

// 4�׷�����4ά������� PV=Mat*Vector 
void MVMul(float PV[],float Mat[][4],float Vector[]);

#endif
#include <stdio.h>
#include "font.h"

int main(void)
{
	//��ʾ"000-����-����"�ַ���
	Init_Font();

	
	Clean_Area(200,//x������ʼ��
                 0,//y������ʼ��
				 400,//���ƵĿ��
				 200,//���Ƶĸ߶�
				 0x00000000);//����Ļָ������������ɫ
				 
	Display_characterX(200,//x������ʼ��
                        0,//y������ʼ��
						"000-����-����",//GB2312 �����ַ���
						0x00ffffff ,//�������ɫֵ
						2);//����Ŵ��� 1~8

	UnInit_Font();	
	return 0;
}
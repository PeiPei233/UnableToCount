#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <stddef.h>

//���������ʾ
typedef struct {
    int row;  //��λ��
    int column;  //��λ��
}RCNode;

extern double winHeight, winWidth;	//���ڸ߶ȺͿ���

/*
    ��ȡĿǰ�������Ͻǵ�����λ��
*/
RCNode getWindowCurrentRC();

/*
    ����Ŀǰ�������Ͻǵ�����λ��
*/
void setWindowCurrentRC(RCNode newWindowCurrent);

/*
    ���ݴ���Ĳ������ù��λ��
*/
void setCursorRC(RCNode newCursor);

/*
    ��ȡ���λ��
*/
RCNode getCursorRC();

/*
    ��ȡѡ��Χ��ʼλ��
*/
RCNode getSelectStartRC();

/*
    ��ȡѡ��Χ��ֹλ��
*/
RCNode getSelectEndRC();

/*
    ����ѡ��Χ��ʼλ��
*/
void setSelectStartRC(RCNode newStartSelect);

/*
    ������ʵ��Χ��ֹλ��
*/
void setSelectEndRC(RCNode newEndSelect);

/*
	�Ƚ������ڵ����ַ������е�λ��ǰ��
	start��endǰ����1����ȷ���0�����򷵻�-1 
*/
int RCcompare(RCNode start,RCNode end);

/**
 * ���㴫���ַ��Ľ�������
 * ���뿪ʼ���������м���ַ���
 * */
RCNode endPos(RCNode startPos, char *str);

/**
 * �������malloc
 */ 
void *mallocDIY(size_t size);

#endif
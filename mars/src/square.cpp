/********************************************************************
	----------------------------------------------------------------
    软件许可证 － GPL
	版权所有 (C) 2005-2008 极速人工智能研究
	----------------------------------------------------------------
	这一程序是自由软件，你可以遵照自由软件基金会出版的GNU 通用公共许
	可证条款来修改和重新发布这一程序。或者用许可证的第二版，或者（根
	据你的选择）用任何更新的版本。
    发布这一程序的目的是希望它有用，但没有任何担保。甚至没有适合特定
	目地的隐含的担保。更详细的情况请参阅GNU通用公共许可证。
    你应该已经和程序一起收到一份GNU通用公共许可证的副本（本目录
	GPL.txt文件）。如果还没有，写信给：
    The Free Software Foundation, Inc.,  675  Mass Ave,  Cambridge,
    MA02139,  USA
	----------------------------------------------------------------
	如果你在使用本软件时有什么问题或建议，请用以下地址与我们取得联系：
			http://www.jsmaster.com
	或发信到：
			jschess##163.com
	----------------------------------------------------------------
	本文件用途：	略
	
	  
	本文件编写人：	
				顾剑辉			jschess##163.com
		
	本文件版本：	03
	最后修改于：	2006-1-16
		  
	注：以上E-Mail地址中的##请用@替换，这样做是为了抵制恶意的E-Mail
	地址收集软件。
	----------------------------------------------------------------
	修正历史：
			
		  2006-1		第一版发布
********************************************************************/
#include "square.h"


const int SquareFrom90[90] = {
   A0, B0, C0, D0, E0, F0, G0, H0, I0, //黑
   A1, B1, C1, D1, E1, F1, G1, H1, I1, //黑
   A2, B2, C2, D2, E2, F2, G2, H2, I2, //黑
   A3, B3, C3, D3, E3, F3, G3, H3, I3, //黑
   A4, B4, C4, D4, E4, F4, G4, H4, I4, //黑
   A5, B5, C5, D5, E5, F5, G5, H5, I5, //红
   A6, B6, C6, D6, E6, F6, G6, H6, I6, //红
   A7, B7, C7, D7, E7, F7, G7, H7, I7, //红
   A8, B8, C8, D8, E8, F8, G8, H8, I8, //红
   A9, B9, C9, D9, E9, F9, G9, H9, I9, //红
};

int SquareTo90[SquareNb];

void square_init()
{
	int sq;

   for (sq = 0; sq < SquareNb; sq++) SquareTo90[sq] = -1;

   for (sq = 0; sq < 90; sq++) {
      SquareTo90[SquareFrom90[sq]] = sq;
   }
  
}
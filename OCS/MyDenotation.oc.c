

#line 1 "MyDenotation.impl"
#include "BUILTIN.h"
extern OBJ __ADenotation_4;
extern OBJ __ADenotation_11;
extern OBJ __ADenotation_12;
extern OBJ __ADenotation_15;
extern OBJ __ADenotation_23;
extern OBJ __ANat_5;
extern OBJ __ANat_8;
extern OBJ __ANat_61;
extern OBJ __ANat_62;
extern OBJ __ANat_81;
extern OBJ __AChar_15;
extern OBJ __AChar_32;
extern OBJ _AMyDenotation_1(OBJ);OBJ __AMyDenotation_1; /* reverse */
extern OBJ _AMyDenotation_2(OBJ,OBJ,OBJ);OBJ __AMyDenotation_2; /* replaceChar */
extern OBJ _AMyDenotation_3(OBJ,OBJ);OBJ __AMyDenotation_3; /* findChar */
extern OBJ _AMyDenotation_4(OBJ,OBJ,OBJ);OBJ __AMyDenotation_4; /* findCharRek */
OBJ __AMyDenotation_5; /* reverse'5 */
extern OBJ _AMyDenotation_6(OBJ);OBJ __AMyDenotation_6; /* reverse'6 */
OBJ __AMyDenotation_7; /* replaceChar'7 */
extern OBJ _AMyDenotation_8(OBJ,OBJ,OBJ);OBJ __AMyDenotation_8; /* replaceChar'8 */
extern OBJ _AMyDenotation_9(OBJ,OBJ);OBJ __AMyDenotation_9; /* findChar'9 */
extern OBJ _AMyDenotation_10(OBJ,OBJ,OBJ);OBJ __AMyDenotation_10; /* findCharRek'10 */

extern OBJ _AMyDenotation_1(OBJ x1) /* reverse */
{OBJ r;
 CPCLS(__AMyDenotation_6,1);
#line 6
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__AMyDenotation_6,1))(__AMyDenotation_6,x1);
#line 6
 return r;}

extern OBJ _AMyDenotation_2(OBJ x1,OBJ x2,OBJ x3) /* replaceChar */
{OBJ r;
 CPCLS(__AMyDenotation_8,1);
#line 17
 r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_8,3))(__AMyDenotation_8,x1,x2,x3);
#line 17
 return r;}

extern OBJ _AMyDenotation_3(OBJ x1,OBJ x2) /* findChar */
{OBJ r;
 CPCLS(__AMyDenotation_9,1);
#line 28
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AMyDenotation_9,2))(__AMyDenotation_9,x1,x2);
#line 28
 return r;}

extern OBJ _AMyDenotation_4(OBJ x1,OBJ x2,OBJ x3) /* findCharRek */
{OBJ r;
 CPCLS(__AMyDenotation_10,1);
#line 33
 r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_10,3))(__AMyDenotation_10,x1,x2,x3);
#line 33
 return r;}

extern OBJ _AMyDenotation_6(OBJ x1) /* reverse'6 */
{OBJ r;
 CPCLS(__ADenotation_15,1);
 COPY(__ANat_5,1);
 CPCLS(__ANat_81,1);
 CPPRD(x1,1);
#line 6
 {OBJ x2;OBJ x3;
#line 7
  x2=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_15,1))(__ADenotation_15,x1);
#line 7
  COPY(x2,1);
#line 7
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x2,__ANat_5);
#line 7
  if(ISTGPRM(x3,1)){
#line 7
   CPPRD(x1,1);
#line 7
   CPCLS(__AMyDenotation_1,1);
#line 7
   CPCLS(__ADenotation_4,1);
#line 7
   CPCLS(__ADenotation_11,1);
#line 7
   CPCLS(__ADenotation_12,1);
#line 7
   COPY(__ANat_8,1);
#line 7
   CPCLS(__ANat_62,1);
#line 7
   {OBJ x4;OBJ x5;OBJ x6;OBJ x7;
#line 8
    x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x2,__ANat_8);
#line 8
    COPY(x4,3);
#line 8
    x5=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_11,3))(__ADenotation_11,x1,x4,x4);
#line 8
    x6=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_12,3))(__ADenotation_12,x1,x4,x4);
#line 8
    x7=(*(OBJ(*)(OBJ,OBJ))METHOD(__AMyDenotation_1,1))(__AMyDenotation_1,x6);
#line 8
    r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x5,x7);}
#line 8
  }else{
#line 8
   FRPRD(x1,1);
#line 8
   FREE(x2,1);
#line 8
   CPPRD(__AMyDenotation_5,1);
#line 8
   r=__AMyDenotation_5;}}
#line 8
 return r;}

extern OBJ _AMyDenotation_8(OBJ x1,OBJ x2,OBJ x3) /* replaceChar'8 */
{OBJ r;
 CPCLS(__AChar_15,1);
 COPY(x2,1);
 COPY(x3,1);
#line 17
 {OBJ x4;
#line 18
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AChar_15,2))(__AChar_15,x2,x3);
#line 18
  if(ISTGPRM(x4,1)){
#line 18
   FREE(x2,1);
#line 18
   FREE(x3,1);
#line 18
   r=x1;
#line 18
  }else{
#line 18
   CPPRD(x1,1);
#line 18
   CPCLS(__ADenotation_15,1);
#line 18
   COPY(__ANat_5,1);
#line 18
   CPCLS(__ANat_81,1);
#line 18
   {OBJ x5;OBJ x6;
#line 20
    x5=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_15,1))(__ADenotation_15,x1);
#line 20
    x6=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x5,__ANat_5);
#line 20
    if(ISTGPRM(x6,1)){
#line 20
     CPPRD(x1,1);
#line 20
     COPY(x2,1);
#line 20
     CPCLS(__ADenotation_11,1);
#line 20
     CPCLS(__ADenotation_12,1);
#line 20
     COPY(__ANat_5,4);
#line 20
     CPCLS(__AChar_15,1);
#line 20
     CPCLS(__AChar_32,1);
#line 20
     {OBJ x7;OBJ x8;OBJ x9;OBJ x10;
#line 21
      x7=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_11,3))(__ADenotation_11,x1,__ANat_5,__ANat_5);
#line 21
      CPPRD(x7,1);
#line 21
      x8=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_12,3))(__ADenotation_12,x1,__ANat_5,__ANat_5);
#line 21
      x9=(*(OBJ(*)(OBJ,OBJ))METHOD(__AChar_32,1))(__AChar_32,x7);
#line 21
      x10=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AChar_15,2))(__AChar_15,x9,x2);
#line 21
      if(ISTGPRM(x10,1)){
#line 21
       FRPRD(x7,1);
#line 21
       COPY(x3,1);
#line 21
       CPCLS(__AMyDenotation_2,1);
#line 21
       CPCLS(__ADenotation_4,1);
#line 21
       CPCLS(__ADenotation_23,1);
#line 21
       {OBJ x11;OBJ x12;
#line 21
	x11=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_23,1))(__ADenotation_23,x3);
#line 21
	x12=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_2,3))(__AMyDenotation_2,x8,x2,x3);
#line 21
	r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x11,x12);}
#line 21
      }else{
#line 21
       CPCLS(__AMyDenotation_2,1);
#line 21
       CPCLS(__ADenotation_4,1);
#line 21
       {OBJ x13;
#line 21
	x13=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_2,3))(__AMyDenotation_2,x8,x2,x3);
#line 22
	r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x7,x13);}}}
#line 22
    }else{
#line 22
     FRPRD(x1,1);
#line 22
     FREE(x2,1);
#line 22
     FREE(x3,1);
#line 22
     CPPRD(__AMyDenotation_7,1);
#line 22
     r=__AMyDenotation_7;}}}}
#line 22
 return r;}

extern OBJ _AMyDenotation_9(OBJ x1,OBJ x2) /* findChar'9 */
{OBJ r;
 CPCLS(__AMyDenotation_4,1);
 COPY(__ANat_8,1);
#line 28
 r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_4,3))(__AMyDenotation_4,x1,x2,__ANat_8);
#line 28
 return r;}

extern OBJ _AMyDenotation_10(OBJ x1,OBJ x2,OBJ x3) /* findCharRek'10 */
{OBJ r;
 CPCLS(__ADenotation_15,1);
 COPY(__ANat_5,1);
 CPCLS(__ANat_81,1);
 CPPRD(x1,1);
#line 33
 {OBJ x4;OBJ x5;
#line 34
  x4=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_15,1))(__ADenotation_15,x1);
#line 34
  x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x4,__ANat_5);
#line 34
  if(ISTGPRM(x5,1)){
#line 34
   CPPRD(x1,1);
#line 34
   COPY(x2,1);
#line 34
   CPCLS(__ADenotation_11,1);
#line 34
   COPY(__ANat_5,2);
#line 34
   CPCLS(__AChar_15,1);
#line 34
   CPCLS(__AChar_32,1);
#line 34
   {OBJ x6;OBJ x7;OBJ x8;
#line 35
    x6=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_11,3))(__ADenotation_11,x1,__ANat_5,__ANat_5);
#line 35
    x7=(*(OBJ(*)(OBJ,OBJ))METHOD(__AChar_32,1))(__AChar_32,x6);
#line 35
    x8=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AChar_15,2))(__AChar_15,x7,x2);
#line 35
    if(ISTGPRM(x8,1)){
#line 35
     FRPRD(x1,1);
#line 35
     FREE(x2,1);
#line 35
     r=x3;
#line 35
    }else{
#line 35
     CPCLS(__AMyDenotation_4,1);
#line 35
     CPCLS(__ADenotation_12,1);
#line 35
     COPY(__ANat_5,2);
#line 35
     COPY(__ANat_8,1);
#line 35
     CPCLS(__ANat_61,1);
#line 35
     {OBJ x9;OBJ x10;
#line 36
      x9=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_12,3))(__ADenotation_12,x1,__ANat_5,__ANat_5);
#line 36
      x10=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_61,2))(__ANat_61,x3,__ANat_8);
#line 36
      r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__AMyDenotation_4,3))(__AMyDenotation_4,x9,x2,x10);}}}
#line 36
  }else{
#line 36
   FRPRD(x1,1);
#line 36
   FREE(x2,1);
#line 36
   FREE(x3,1);
#line 36
   COPY(__ANat_5,1);
#line 38
   r=__ANat_5;}}
#line 38
 return r;}

static OBJ _mt_1_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 return r;}
static OBJ _mt_1_0_1_l(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 COPY(r,1);LZYCLS(t,r);
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

static OBJ _mt_3_0_3(OBJ t,OBJ t1,OBJ t2,OBJ t3) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))ENTRY(t))(t1,t2,t3);
 return r;}

init_AMyDenotation()
{
 static int visited=0; if(visited) return; visited=1;
 init_ADenotation();
 init_ANat();
 init_AChar();
 CLS(3,_AMyDenotation_10,__AMyDenotation_10);
 CLS(2,_AMyDenotation_9,__AMyDenotation_9);
 CLS(3,_AMyDenotation_8,__AMyDenotation_8);
 DEN("",__AMyDenotation_7);
 CLS(1,_AMyDenotation_6,__AMyDenotation_6);
 DEN("",__AMyDenotation_5);
 CLS(3,_AMyDenotation_4,__AMyDenotation_4);
 CLS(2,_AMyDenotation_3,__AMyDenotation_3);
 CLS(3,_AMyDenotation_2,__AMyDenotation_2);
 CLS(1,_AMyDenotation_1,__AMyDenotation_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);
 MTH(3,0,3,_mt_3_0_3);LZYMTH(3,0,3,_mt_3_0_3);}


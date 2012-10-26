

#line 1 "MyDenotation.impl"
#include "BUILTIN.h"
extern OBJ __ADenotation_4;
extern OBJ __ADenotation_11;
extern OBJ __ADenotation_12;
extern OBJ __ADenotation_15;
extern OBJ __ANat_5;
extern OBJ __ANat_8;
extern OBJ __ANat_62;
extern OBJ __ANat_81;
extern OBJ _AMyDenotation_1(OBJ);OBJ __AMyDenotation_1; /* reverse */
OBJ __AMyDenotation_2; /* reverse'2 */
extern OBJ _AMyDenotation_3(OBJ);OBJ __AMyDenotation_3; /* reverse'3 */

extern OBJ _AMyDenotation_1(OBJ x1) /* reverse */
{OBJ r;
 CPCLS(__AMyDenotation_3,1);
#line 6
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__AMyDenotation_3,1))(__AMyDenotation_3,x1);
#line 6
 return r;}

extern OBJ _AMyDenotation_3(OBJ x1) /* reverse'3 */
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
   CPPRD(__AMyDenotation_2,1);
#line 8
   r=__AMyDenotation_2;}}
#line 8
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

init_AMyDenotation()
{
 static int visited=0; if(visited) return; visited=1;
 init_ADenotation();
 init_ANat();
 init_AChar();
 CLS(1,_AMyDenotation_3,__AMyDenotation_3);
 DEN("",__AMyDenotation_2);
 CLS(1,_AMyDenotation_1,__AMyDenotation_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);}


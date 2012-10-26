

#ifndef AMyDenotation_included
#define AMyDenotation_included

#define __AMyDenotation_Areverse __AMyDenotation_1
#define _AMyDenotation_Areverse _AMyDenotation_1
extern OBJ __AMyDenotation_Areverse;
extern OBJ _AMyDenotation_Areverse(OBJ);

#define __AMyDenotation_AreplaceChar __AMyDenotation_2
#define _AMyDenotation_AreplaceChar _AMyDenotation_2
extern OBJ __AMyDenotation_AreplaceChar;
extern OBJ _AMyDenotation_AreplaceChar(OBJ,OBJ,OBJ);

#ifndef AMyDenotation_Areverse
#define AMyDenotation_Areverse(x1,x2) {x2=_AMyDenotation_Areverse(x1);}
#endif

#ifndef AMyDenotation_AreplaceChar
#define AMyDenotation_AreplaceChar(x1,x2,x3,x4) {x4=_AMyDenotation_AreplaceChar(x1,x2,x3);}
#endif

#ifndef AMyDenotation_Areverse_L4
#define AMyDenotation_Areverse_L4(x1,x8) {x8=_AMyDenotation_Areverse_L4(x1);}
#endif

#ifndef AMyDenotation_AreplaceChar_L6
#define AMyDenotation_AreplaceChar_L6(x1,x2,x3,x14) {x14=_AMyDenotation_AreplaceChar_L6(x1,x2,x3);}
#endif

#endif

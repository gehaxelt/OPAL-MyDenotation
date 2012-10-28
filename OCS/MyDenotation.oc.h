

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

#define __AMyDenotation_AfindChar __AMyDenotation_3
#define _AMyDenotation_AfindChar _AMyDenotation_3
extern OBJ __AMyDenotation_AfindChar;
extern OBJ _AMyDenotation_AfindChar(OBJ,OBJ);

#define __AMyDenotation_AfindCharRek __AMyDenotation_4
#define _AMyDenotation_AfindCharRek _AMyDenotation_4
extern OBJ __AMyDenotation_AfindCharRek;
extern OBJ _AMyDenotation_AfindCharRek(OBJ,OBJ,OBJ);

#ifndef AMyDenotation_Areverse
#define AMyDenotation_Areverse(x1,x2) {x2=_AMyDenotation_Areverse(x1);}
#endif

#ifndef AMyDenotation_AreplaceChar
#define AMyDenotation_AreplaceChar(x1,x2,x3,x4) {x4=_AMyDenotation_AreplaceChar(x1,x2,x3);}
#endif

#ifndef AMyDenotation_AfindChar
#define AMyDenotation_AfindChar(x1,x2,x3) {x3=_AMyDenotation_AfindChar(x1,x2);}
#endif

#ifndef AMyDenotation_AfindCharRek
#define AMyDenotation_AfindCharRek(x1,x2,x3,x4) {x4=_AMyDenotation_AfindCharRek(x1,x2,x3);}
#endif

#ifndef AMyDenotation_Areverse_L6
#define AMyDenotation_Areverse_L6(x1,x8) {x8=_AMyDenotation_Areverse_L6(x1);}
#endif

#ifndef AMyDenotation_AreplaceChar_L8
#define AMyDenotation_AreplaceChar_L8(x1,x2,x3,x14) {x14=_AMyDenotation_AreplaceChar_L8(x1,x2,x3);}
#endif

#ifndef AMyDenotation_AfindChar_L9
#define AMyDenotation_AfindChar_L9(x1,x2,x3) {x3=_AMyDenotation_AfindChar_L9(x1,x2);}
#endif

#ifndef AMyDenotation_AfindCharRek_L10
#define AMyDenotation_AfindCharRek_L10(x1,x2,x3,x11) {x11=_AMyDenotation_AfindCharRek_L10(x1,x2,x3);}
#endif

#endif

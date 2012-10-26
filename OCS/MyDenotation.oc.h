

#ifndef AMyDenotation_included
#define AMyDenotation_included

#define __AMyDenotation_Areverse __AMyDenotation_1
#define _AMyDenotation_Areverse _AMyDenotation_1
extern OBJ __AMyDenotation_Areverse;
extern OBJ _AMyDenotation_Areverse(OBJ);

#ifndef AMyDenotation_Areverse
#define AMyDenotation_Areverse(x1,x2) {x2=_AMyDenotation_Areverse(x1);}
#endif

#ifndef AMyDenotation_Areverse_L3
#define AMyDenotation_Areverse_L3(x1,x8) {x8=_AMyDenotation_Areverse_L3(x1);}
#endif

#endif

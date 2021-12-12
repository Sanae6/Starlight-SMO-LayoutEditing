#include "al/LiveActor/LiveActor.h"
#include "al/util.hpp"
#include "al/layout/LayoutActor.h"
#include "game/StageScene/StageScene.h"
#include "game/Layouts/CoinCounter.h"
#include "rs/util.hpp"
#include <cmath>
#include <stdio.h>

#include "debugMenu.hpp"

class BootLayout {
    void appear();
};

void stageSceneHook() {

    __asm ("MOV X19, X0");

    StageScene *stageScene;
    __asm ("MOV %[result], X0" : [result] "=r" (stageScene));

    isInGame = true;

    if(al::isPadTriggerUp(-1)) {
        showMenu = !showMenu;
    }

    __asm ("MOV X0, %[input]" : [input] "=r" (stageScene));
}

//void JIT_Execute_Init();
//void MetaData_Init();
//void Type_Init();
//void Heap_Init();
//void Finalizer_Init();
//void Socket_Init();
//
//#include "dna/CLIFile.h"
//#include "dna/MetaData.h"
//#include "dna/Type.h"

int returnValueFuckYeah = -1;
int stage = 0;

void bootLayoutHook() {
    __asm ("MOV X19, X0");

//    BootLayout *layout;
//    __asm ("MOV %[result], X0" : [result] "=r" (layout));

//    JIT_Execute_Init();
//    MetaData_Init();
//    Type_Init();
//    Heap_Init();
//    Finalizer_Init();
//    Socket_Init();

//    tMetaData *pAssemblyMetadata = CLIFile_GetMetaDataForLoadedAssembly((unsigned char*) "smoentry");

    // Find any overload of the named method; assume it's the right one.
    // Specifying it exactly (type generic args, method generic args, arguments themselves, picking the
    // inherited methods if needed), is complex and not required at the moment.
//    tMD_TypeDef *pTypeDef = MetaData_GetTypeDefFromName(pAssemblyMetadata, (unsigned char*) "TestProject", (unsigned char*) "Program", nullptr, /* assertExists */ 1);
//    MetaData_Fill_TypeDef(pTypeDef, nullptr, nullptr);

//    tCLIFile* entryDll = CLIFile_Load("smoentry");
//    stage = 1;
//    if (entryDll->entryPoint) {
//        stage = 2;
//        returnValueFuckYeah = CLIFile_Execute(entryDll, 0, nullptr);
//        stage = 3;
//    }

//    __asm ("MOV X0, %[input]" : [input] "=r" (layout));
}
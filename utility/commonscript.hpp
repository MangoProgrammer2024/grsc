/*
*   *Common_Script.hpp*
*/
#pragma once

#ifndef COMMONSCRIPT
#define COMMONSCRIPT

typedef void Thread;

const char * ThreadName(Thread)const;

typedef struct CommonScript{

  enum CScriptType{
    GameScript = 0,
    ModelScript = 1,
    EngineScript = 2
  };

  typedef std::string SCRIPT;

  void Script_Name(SCRIPT*);

  const char * GSExtension == "gsrc";
  const char * GSEExtension == "gesrc";
  const char * GSExportable == "gsrcexportable";

  bool GSReadScript(CommonScript);

  void Engine_ReadScript(CommonScript * current_script, const char * scriptExtension);
  void CallThread(Thread*);

  #define DEBUG_SCRIPT_ZONE 0x80

  CommonScript * script_gsprintf(){
    const Thread gsprintf(std::printf())const;
    CommonScript * Script = (CommonScript*)malloc(sizeof(CommonScript));
    return Script;
  };

  /*****************
  *Script Local Zone
  *****************/
  const char * Script_Zone(CommonScript script)const;
   
};
#endif

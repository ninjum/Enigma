/*
** Lua binding: enigma
** Generated automatically by tolua++-1.0.93 on Sun Sep 13 19:23:47 2026.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_enigma_open (lua_State* tolua_S);

#include "server.hh"
#include "video.hh"
#include "world.hh"
#include "resource_cache.hh"
#include "ecl_font.hh"
#include "lev/PersistentIndex.hh"
using namespace enigma;
using std::string;
using namespace server;
using namespace lev;
using namespace enigma;
#include "SoundEffectManager.hh"
using namespace sound;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Object");
}

/* function: date */
#ifndef TOLUA_DISABLE_tolua_enigma_enigma_date00
static int tolua_enigma_enigma_date00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* format = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   const char* tolua_ret = (const char*)  date(format);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'date'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ShowLoadingScreen */
#ifndef TOLUA_DISABLE_tolua_enigma_enigma_ShowLoadingScreen00
static int tolua_enigma_enigma_ShowLoadingScreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  int progress = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   ShowLoadingScreen(text,progress);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowLoadingScreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: AddLevelPack */
#ifndef TOLUA_DISABLE_tolua_enigma_enigma_AddLevelPack00
static int tolua_enigma_enigma_AddLevelPack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* init_file = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   AddLevelPack(init_file,name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddLevelPack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: AddZippedLevelPack */
#ifndef TOLUA_DISABLE_tolua_enigma_enigma_AddZippedLevelPack00
static int tolua_enigma_enigma_AddZippedLevelPack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* zipfile = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   AddZippedLevelPack(zipfile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddZippedLevelPack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: MakeObject */
#ifndef TOLUA_DISABLE_tolua_enigma_world_MakeObject00
static int tolua_enigma_world_MakeObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* kind = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   Object* tolua_ret = (Object*)  MakeObject(kind);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: GetNamedObject */
#ifndef TOLUA_DISABLE_tolua_enigma_world_GetNamedObject00
static int tolua_enigma_world_GetNamedObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   Object* tolua_ret = (Object*)  GetNamedObject(name);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNamedObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Resize */
#ifndef TOLUA_DISABLE_tolua_enigma_world_Resize00
static int tolua_enigma_world_Resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,1,0));
  int h = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DefineSoundEffect */
#ifndef TOLUA_DISABLE_tolua_enigma_sound_DefineSoundEffect00
static int tolua_enigma_sound_DefineSoundEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,13,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string table = ((string)  tolua_tocppstring(tolua_S,1,0));
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string filename = ((string)  tolua_tocppstring(tolua_S,3,0));
  double volume = ((double)  tolua_tonumber(tolua_S,4,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,5,0));
  bool global = ((bool)  tolua_toboolean(tolua_S,6,0));
  int priority = ((int)  tolua_tonumber(tolua_S,7,0));
  double damp_max = ((double)  tolua_tonumber(tolua_S,8,0));
  double damp_inc = ((double)  tolua_tonumber(tolua_S,9,0));
  double damp_mult = ((double)  tolua_tonumber(tolua_S,10,0));
  double damp_min = ((double)  tolua_tonumber(tolua_S,11,0));
  double damp_tick = ((double)  tolua_tonumber(tolua_S,12,0));
  string silence_string = ((string)  tolua_tocppstring(tolua_S,13,0));
  {
   DefineSoundEffect(table,name,filename,volume,loop,global,priority,damp_max,damp_inc,damp_mult,damp_min,damp_tick,silence_string);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DefineSoundEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: SetActiveSoundSet */
#ifndef TOLUA_DISABLE_tolua_enigma_sound_SetActiveSoundSet00
static int tolua_enigma_sound_SetActiveSoundSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string table = ((string)  tolua_tocppstring(tolua_S,1,0));
  {
   SetActiveSoundSet(table);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActiveSoundSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_enigma_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"enigma",0);
  tolua_beginmodule(tolua_S,"enigma");
   tolua_constant(tolua_S,"NODIR",NODIR);
   tolua_constant(tolua_S,"NORTH",NORTH);
   tolua_constant(tolua_S,"EAST",EAST);
   tolua_constant(tolua_S,"SOUTH",SOUTH);
   tolua_constant(tolua_S,"WEST",WEST);
   tolua_function(tolua_S,"date",tolua_enigma_enigma_date00);
   tolua_function(tolua_S,"ShowLoadingScreen",tolua_enigma_enigma_ShowLoadingScreen00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"enigma",0);
  tolua_beginmodule(tolua_S,"enigma");
   tolua_function(tolua_S,"AddLevelPack",tolua_enigma_enigma_AddLevelPack00);
   tolua_function(tolua_S,"AddZippedLevelPack",tolua_enigma_enigma_AddZippedLevelPack00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"world",0);
  tolua_beginmodule(tolua_S,"world");
   tolua_cclass(tolua_S,"Object","Object","",NULL);
   tolua_beginmodule(tolua_S,"Object");
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"MakeObject",tolua_enigma_world_MakeObject00);
   tolua_function(tolua_S,"GetNamedObject",tolua_enigma_world_GetNamedObject00);
   tolua_function(tolua_S,"Resize",tolua_enigma_world_Resize00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"sound",0);
  tolua_beginmodule(tolua_S,"sound");
   tolua_function(tolua_S,"DefineSoundEffect",tolua_enigma_sound_DefineSoundEffect00);
   tolua_function(tolua_S,"SetActiveSoundSet",tolua_enigma_sound_SetActiveSoundSet00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_enigma (lua_State* tolua_S) {
 return tolua_enigma_open(tolua_S);
};
#endif


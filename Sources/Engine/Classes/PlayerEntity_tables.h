/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CPlayerEntity

CEntityProperty CPlayerEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000004<<8)+1, _offsetof(CPlayerEntity, en_tmPing), "", 0, 0, 0),
};
#define CPlayerEntity_propertiesct ARRAYCOUNT(CPlayerEntity_properties)

CEntityComponent CPlayerEntity_components[] = {
  CEntityComponent()
};
#define CPlayerEntity_componentsct 0


CEventHandlerEntry CPlayerEntity_handlers[] = {
 {0x00040000, -1, CEntity::pEventHandler(&CPlayerEntity::
#line 145 "/home/terminator/VBoxShare/TEMP/SeriousSamAlphaRemake/Sources/Engine/Classes/PlayerEntity.es"
Dummy),DEBUGSTRING("CPlayerEntity::Dummy")},
};
#define CPlayerEntity_handlersct ARRAYCOUNT(CPlayerEntity_handlers)

CEntity *CPlayerEntity_New(void) { return NULL; };
void CPlayerEntity_OnInitClass(void) {};
void CPlayerEntity_OnEndClass(void) {};
void CPlayerEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerEntity_OnWorldEnd(CWorld *pwo) {};
void CPlayerEntity_OnWorldInit(CWorld *pwo) {};
void CPlayerEntity_OnWorldTick(CWorld *pwo) {};
void CPlayerEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerEntity, CMovableModelEntity, "PlayerEntity", "", 0x00000004);
DECLARE_CTFILENAME(_fnmCPlayerEntity_tbn, "");

/*
 *	server/zone/objects/tangible/TangibleObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef TANGIBLEOBJECT_H_
#define TANGIBLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/Message.h"

#include "../../packets/scene/AttributeListMessage.h"

class Zone;

class SceneObject;

class CreatureObject;

class Player;

class DraftSchematicValues;

#include "../scene/SceneObject.h"

class TangibleObject : public SceneObject {
public:
	TangibleObject(unsigned long long oid, int tp = 0);

	TangibleObject(unsigned long long oid, const unicode& n, const string& tempname, unsigned int tempCRC, int tp = 0);

	TangibleObject(CreatureObject* creature, const unicode& n, const string& tempname, unsigned int tempCRC, int tp = 0);

	void generateAttributes(Player* player);

	void updateCraftingValues(DraftSchematicValues* craftingValues);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void close(Player* player);

	void setEquipped(bool eqp);

	void setContainer(SceneObject* cont, unsigned int type = 04);

	void sendTo(Player* player, bool doClose = true);

	void sendDeltas(Player* player);

	void repairItem(Player* player);

	void decay(int decayRate);

	void parseItemAttributes();

	bool isPersistent();

	bool isUpdated();

	bool isEquipped();

	bool isWeapon();

	bool isArmor();

	bool isClothing();

	bool isInstrument();

	bool isAttachment();

	bool isResource();

	bool isTicket();

	bool isTicketCollector();

	bool isSurveyTool();

	bool isLair();

	bool isCraftingStation();

	bool isComponent();

	void setCraftersName(string& n);

	void setCraftedSerial(string& s);

	SceneObject* getContainer();

	unicode& getName();

	string& getTemplateName();

	string& getTemplateTypeName();

	void getCustomizationString(string& appearance);

	int getObjectSubType();

	unsigned int getTemplateID();

	int getObjectCount();

	int getConditionDamage();

	int getMaxCondition();

	int getCondition();

	string& getCraftersName();

	string& getCraftedSerial();

	void setAttributes(string& attributestring);

	string& getAttributes();

	void addAttributes(AttributeListMessage* alm);

	void setName(const string& n);

	void setTemplateName(const string& tempName);

	void setTemplateTypeName(const string& tempTypeName);

	void setObjectSubType(const int type);

	void setPersistent(bool pers);

	void setUpdated(bool upd);

	void setConditionDamage(int damage);

	void setCustomizationString(string& cust);

	void setCustomizationVariable(unsigned char type, unsigned int value);

	void setObjectCount(const int count);

protected:
	TangibleObject(DummyConstructorParameter* param);

	virtual ~TangibleObject();

	string _return_getAttributes;
	string _return_getCraftedSerial;
	string _return_getCraftersName;
	string _return_getTemplateName;
	string _return_getTemplateTypeName;

	unicode _return_getName;

	friend class TangibleObjectHelper;
};

class TangibleObjectImplementation;

class TangibleObjectAdapter : public SceneObjectAdapter {
public:
	TangibleObjectAdapter(TangibleObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void generateAttributes(Player* player);

	void updateCraftingValues(DraftSchematicValues* craftingValues);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void close(Player* player);

	void setEquipped(bool eqp);

	void setContainer(SceneObject* cont, unsigned int type);

	void sendTo(Player* player, bool doClose);

	void sendDeltas(Player* player);

	void repairItem(Player* player);

	void decay(int decayRate);

	void parseItemAttributes();

	bool isPersistent();

	bool isUpdated();

	bool isEquipped();

	bool isWeapon();

	bool isArmor();

	bool isClothing();

	bool isInstrument();

	bool isAttachment();

	bool isResource();

	bool isTicket();

	bool isTicketCollector();

	bool isSurveyTool();

	bool isLair();

	bool isCraftingStation();

	bool isComponent();

	void setCraftersName(string& n);

	void setCraftedSerial(string& s);

	SceneObject* getContainer();

	unicode& getName();

	string& getTemplateName();

	string& getTemplateTypeName();

	void getCustomizationString(string& appearance);

	int getObjectSubType();

	unsigned int getTemplateID();

	int getObjectCount();

	int getConditionDamage();

	int getMaxCondition();

	int getCondition();

	string& getCraftersName();

	string& getCraftedSerial();

	void setAttributes(string& attributestring);

	string& getAttributes();

	void addAttributes(AttributeListMessage* alm);

	void setName(const string& n);

	void setTemplateName(const string& tempName);

	void setTemplateTypeName(const string& tempTypeName);

	void setObjectSubType(const int type);

	void setPersistent(bool pers);

	void setUpdated(bool upd);

	void setConditionDamage(int damage);

	void setCustomizationString(string& cust);

	void setCustomizationVariable(unsigned char type, unsigned int value);

	void setObjectCount(const int count);

protected:
	string _param0_setCraftersName__string_;
	string _param0_setCraftedSerial__string_;
	string _param0_getCustomizationString__string_;
	string _param0_setAttributes__string_;
	string _param0_setName__string_;
	string _param0_setTemplateName__string_;
	string _param0_setTemplateTypeName__string_;
	string _param0_setCustomizationString__string_;
};

class TangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<TangibleObjectHelper> {
	static TangibleObjectHelper* staticInitializer;

public:
	TangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<TangibleObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class TangibleObjectServant : public SceneObjectImplementation {
public:
	TangibleObject* _this;

public:
	TangibleObjectServant();
	TangibleObjectServant(unsigned long long oid);
	virtual ~TangibleObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*TANGIBLEOBJECT_H_*/

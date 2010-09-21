/*
 *	server/zone/managers/structure/StructureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "StructureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

/*
 *	StructureManagerStub
 */

StructureManager::StructureManager(Zone* zone, ZoneProcessServerImplementation* processor) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new StructureManagerImplementation(zone, processor);
	_impl->_setStub(this);
}

StructureManager::StructureManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

StructureManager::~StructureManager() {
}


void StructureManager::loadStructures() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->loadStructures();
}

int StructureManager::placeStructureFromDeed(PlayerCreature* player, unsigned long long deedID, float x, float y, int angle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(deedID);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return method.executeWithSignedIntReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->placeStructureFromDeed(player, deedID, x, y, angle);
}

int StructureManager::placeStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((StructureManagerImplementation*) _impl)->placeStructure(player, structureObject, structureTemplate, deedID, x, y, direction);
}

int StructureManager::constructStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((StructureManagerImplementation*) _impl)->constructStructure(player, structureObject, structureTemplate, deedID, x, y, direction);
}

int StructureManager::destroyStructure(PlayerCreature* player, StructureObject* structureObject) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addObjectParameter(structureObject);

		return method.executeWithSignedIntReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->destroyStructure(player, structureObject);
}

int StructureManager::redeedStructure(PlayerCreature* player, StructureObject* structureObject, bool destroy) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addObjectParameter(structureObject);
		method.addBooleanParameter(destroy);

		return method.executeWithSignedIntReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->redeedStructure(player, structureObject, destroy);
}

int StructureManager::declareResidence(PlayerCreature* player, StructureObject* structureObject) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addObjectParameter(structureObject);

		return method.executeWithSignedIntReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->declareResidence(player, structureObject);
}

int StructureManager::changePrivacy(PlayerCreature* player, StructureObject* structureObject) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addObjectParameter(structureObject);

		return method.executeWithSignedIntReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->changePrivacy(player, structureObject);
}

String StructureManager::getTimeString(unsigned int timestamp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedIntParameter(timestamp);

		method.executeWithAsciiReturn(_return_getTimeString);
		return _return_getTimeString;
	} else
		return ((StructureManagerImplementation*) _impl)->getTimeString(timestamp);
}

/*
 *	StructureManagerImplementation
 */

StructureManagerImplementation::StructureManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


StructureManagerImplementation::~StructureManagerImplementation() {
}


void StructureManagerImplementation::finalize() {
}

void StructureManagerImplementation::_initializeImplementation() {
	_setClassHelper(StructureManagerHelper::instance());

	_serializationHelperMethod();
}

void StructureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StructureManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* StructureManagerImplementation::_getStub() {
	return _this;
}

StructureManagerImplementation::operator const StructureManager*() {
	return _this;
}

void StructureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StructureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StructureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StructureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StructureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StructureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StructureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StructureManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("StructureManager");

	addSerializableVariable("zone", &zone);
}

void StructureManagerImplementation::loadStructures() {
	// server/zone/managers/structure/StructureManager.idl(97):  		Logger.info("loading structures...", true);
	Logger::info("loading structures...", true);
	// server/zone/managers/structure/StructureManager.idl(99):  		listOfStaticBuildings.setNoDuplicateInsertPlan();
	(&listOfStaticBuildings)->setNoDuplicateInsertPlan();
	// server/zone/managers/structure/StructureManager.idl(101):  		loadStaticBuildings();
	loadStaticBuildings();
	// server/zone/managers/structure/StructureManager.idl(102):  		loadPlayerStructures();
	loadPlayerStructures();
	// server/zone/managers/structure/StructureManager.idl(103):  		loadStaticBanks();
	loadStaticBanks();
	// server/zone/managers/structure/StructureManager.idl(104):  		loadStaticBazaars();
	loadStaticBazaars();
	// server/zone/managers/structure/StructureManager.idl(105):  		loadStaticMissionTerminals();
	loadStaticMissionTerminals();
	// server/zone/managers/structure/StructureManager.idl(106):  		loadStaticCraftingStations();
	loadStaticCraftingStations();
	// server/zone/managers/structure/StructureManager.idl(107):  		loadStaticGarages();
	loadStaticGarages();
}

/*
 *	StructureManagerAdapter
 */

StructureManagerAdapter::StructureManagerAdapter(StructureManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* StructureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		loadStructures();
		break;
	case 7:
		resp->insertSignedInt(placeStructureFromDeed((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter()));
		break;
	case 8:
		resp->insertSignedInt(destroyStructure((PlayerCreature*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter()));
		break;
	case 9:
		resp->insertSignedInt(redeedStructure((PlayerCreature*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 10:
		resp->insertSignedInt(declareResidence((PlayerCreature*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter()));
		break;
	case 11:
		resp->insertSignedInt(changePrivacy((PlayerCreature*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter()));
		break;
	case 12:
		resp->insertAscii(getTimeString(inv->getUnsignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void StructureManagerAdapter::loadStructures() {
	((StructureManagerImplementation*) impl)->loadStructures();
}

int StructureManagerAdapter::placeStructureFromDeed(PlayerCreature* player, unsigned long long deedID, float x, float y, int angle) {
	return ((StructureManagerImplementation*) impl)->placeStructureFromDeed(player, deedID, x, y, angle);
}

int StructureManagerAdapter::destroyStructure(PlayerCreature* player, StructureObject* structureObject) {
	return ((StructureManagerImplementation*) impl)->destroyStructure(player, structureObject);
}

int StructureManagerAdapter::redeedStructure(PlayerCreature* player, StructureObject* structureObject, bool destroy) {
	return ((StructureManagerImplementation*) impl)->redeedStructure(player, structureObject, destroy);
}

int StructureManagerAdapter::declareResidence(PlayerCreature* player, StructureObject* structureObject) {
	return ((StructureManagerImplementation*) impl)->declareResidence(player, structureObject);
}

int StructureManagerAdapter::changePrivacy(PlayerCreature* player, StructureObject* structureObject) {
	return ((StructureManagerImplementation*) impl)->changePrivacy(player, structureObject);
}

String StructureManagerAdapter::getTimeString(unsigned int timestamp) {
	return ((StructureManagerImplementation*) impl)->getTimeString(timestamp);
}

/*
 *	StructureManagerHelper
 */

StructureManagerHelper* StructureManagerHelper::staticInitializer = StructureManagerHelper::instance();

StructureManagerHelper::StructureManagerHelper() {
	className = "StructureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StructureManagerHelper::finalizeHelper() {
	StructureManagerHelper::finalize();
}

DistributedObject* StructureManagerHelper::instantiateObject() {
	return new StructureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* StructureManagerHelper::instantiateServant() {
	return new StructureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StructureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureManagerAdapter((StructureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


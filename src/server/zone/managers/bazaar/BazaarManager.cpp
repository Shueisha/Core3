/*
 *	server/zone/managers/bazaar/BazaarManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/managers/bazaar/BazaarAuctionsMap.h"

#include "server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.h"

#include "server/zone/objects/tangible/terminal/bazaar/AuctionItem.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	BazaarManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_CHECKAUCTIONS__,RPC_ADDSALEITEM__PLAYERCREATURE_LONG_LONG_UNICODESTRING_INT_INT_BOOL_,RPC_CREATEAUCTIONITEM__PLAYERCREATURE_SCENEOBJECT_BAZAARTERMINAL_UNICODESTRING_INT_INT_BOOL_,RPC_CHECKSALEITEM__PLAYERCREATURE_SCENEOBJECT_INT_,RPC_GETITEMATTRIBUTES__PLAYERCREATURE_LONG_,RPC_GETBAZAARDATA__PLAYERCREATURE_INT_LONG_INT_INT_INT_INT_,RPC_GETALLBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_,RPC_GETPLANETBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_,RPC_GETREGIONBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_,RPC_CHECKRETRIEVE__PLAYERCREATURE_LONG_BAZAARTERMINAL_,RPC_RETRIEVEITEM__PLAYERCREATURE_LONG_LONG_,RPC_BUYITEM__PLAYERCREATURE_LONG_INT_INT_,RPC_DOAUCTIONBID__PLAYERCREATURE_AUCTIONITEM_INT_INT_,RPC_DOINSTANTBUY__PLAYERCREATURE_AUCTIONITEM_INT_INT_,RPC_CHECKBIDAUCTION__PLAYERCREATURE_AUCTIONITEM_INT_INT_,};

BazaarManager::BazaarManager(ZoneServer* server) : ManagedService(DummyConstructorParameter::instance()) {
	BazaarManagerImplementation* _implementation = new BazaarManagerImplementation(server);
	_impl = _implementation;
	_impl->_setStub(this);
}

BazaarManager::BazaarManager(DummyConstructorParameter* param) : ManagedService(param) {
}

BazaarManager::~BazaarManager() {
}


void BazaarManager::initialize() {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void BazaarManager::checkAuctions() {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKAUCTIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->checkAuctions();
}

void BazaarManager::addSaleItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid, const UnicodeString& description, int price, unsigned int duration, bool auction) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDSALEITEM__PLAYERCREATURE_LONG_LONG_UNICODESTRING_INT_INT_BOOL_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addUnsignedLongParameter(bazaarid);
		method.addUnicodeParameter(description);
		method.addSignedIntParameter(price);
		method.addUnsignedIntParameter(duration);
		method.addBooleanParameter(auction);

		method.executeWithVoidReturn();
	} else
		_implementation->addSaleItem(player, objectid, bazaarid, description, price, duration, auction);
}

AuctionItem* BazaarManager::createAuctionItem(PlayerCreature* player, SceneObject* objectToSell, BazaarTerminal* terminal, const UnicodeString& description, int price, unsigned int duration, bool auction) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEAUCTIONITEM__PLAYERCREATURE_SCENEOBJECT_BAZAARTERMINAL_UNICODESTRING_INT_INT_BOOL_);
		method.addObjectParameter(player);
		method.addObjectParameter(objectToSell);
		method.addObjectParameter(terminal);
		method.addUnicodeParameter(description);
		method.addSignedIntParameter(price);
		method.addUnsignedIntParameter(duration);
		method.addBooleanParameter(auction);

		return (AuctionItem*) method.executeWithObjectReturn();
	} else
		return _implementation->createAuctionItem(player, objectToSell, terminal, description, price, duration, auction);
}

int BazaarManager::checkSaleItem(PlayerCreature* player, SceneObject* object, int price) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKSALEITEM__PLAYERCREATURE_SCENEOBJECT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(object);
		method.addSignedIntParameter(price);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->checkSaleItem(player, object, price);
}

void BazaarManager::getItemAttributes(PlayerCreature* player, unsigned long long objectid) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEMATTRIBUTES__PLAYERCREATURE_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);

		method.executeWithVoidReturn();
	} else
		_implementation->getItemAttributes(player, objectid);
}

void BazaarManager::getBazaarData(PlayerCreature* player, int extent, unsigned long long bazaarObjectid, int screen, unsigned int category, int count, int offset) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAARDATA__PLAYERCREATURE_INT_LONG_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(extent);
		method.addUnsignedLongParameter(bazaarObjectid);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getBazaarData(player, extent, bazaarObjectid, screen, category, count, offset);
}

void BazaarManager::getAllBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETALLBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(terminal);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getAllBazaarData(player, terminal, screen, category, count, offset);
}

void BazaarManager::getPlanetBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLANETBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(terminal);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getPlanetBazaarData(player, terminal, screen, category, count, offset);
}

void BazaarManager::getRegionBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGIONBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(terminal);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getRegionBazaarData(player, terminal, screen, category, count, offset);
}

int BazaarManager::checkRetrieve(PlayerCreature* player, unsigned long long objectIdToRetrieve, BazaarTerminal* terminal) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKRETRIEVE__PLAYERCREATURE_LONG_BAZAARTERMINAL_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectIdToRetrieve);
		method.addObjectParameter(terminal);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->checkRetrieve(player, objectIdToRetrieve, terminal);
}

void BazaarManager::retrieveItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RETRIEVEITEM__PLAYERCREATURE_LONG_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addUnsignedLongParameter(bazaarid);

		method.executeWithVoidReturn();
	} else
		_implementation->retrieveItem(player, objectid, bazaarid);
}

void BazaarManager::buyItem(PlayerCreature* player, unsigned long long objectid, int price1, int price2) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BUYITEM__PLAYERCREATURE_LONG_INT_INT_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->buyItem(player, objectid, price1, price2);
}

void BazaarManager::doAuctionBid(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOAUCTIONBID__PLAYERCREATURE_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->doAuctionBid(player, item, price1, price2);
}

void BazaarManager::doInstantBuy(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOINSTANTBUY__PLAYERCREATURE_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->doInstantBuy(player, item, price1, price2);
}

int BazaarManager::checkBidAuction(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKBIDAUCTION__PLAYERCREATURE_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->checkBidAuction(player, item, price1, price2);
}

AuctionQueryHeadersResponseMessage* BazaarManager::fillAuctionQueryHeadersResponseMessage(PlayerCreature* player, VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* items, int screen, unsigned int category, int count, int offset) {
	BazaarManagerImplementation* _implementation = (BazaarManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->fillAuctionQueryHeadersResponseMessage(player, items, screen, category, count, offset);
}

DistributedObjectServant* BazaarManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void BazaarManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BazaarManagerImplementation
 */

BazaarManagerImplementation::BazaarManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


BazaarManagerImplementation::~BazaarManagerImplementation() {
}


void BazaarManagerImplementation::finalize() {
}

void BazaarManagerImplementation::_initializeImplementation() {
	_setClassHelper(BazaarManagerHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void BazaarManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarManagerImplementation::_getStub() {
	return _this;
}

BazaarManagerImplementation::operator const BazaarManager*() {
	return _this;
}

void BazaarManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("BazaarManager");

}

void BazaarManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BazaarManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BazaarManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "auctionMap") {
		TypeInfo<ManagedReference<BazaarAuctionsMap* > >::parseFromBinaryStream(&auctionMap, stream);
		return true;
	}

	if (_name == "zoneServer") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;
	}


	return false;
}

void BazaarManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BazaarManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BazaarManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "auctionMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<BazaarAuctionsMap* > >::toBinaryStream(&auctionMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "zoneServer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + ManagedServiceImplementation::writeObjectMembers(stream);
}

BazaarManagerImplementation::BazaarManagerImplementation(ZoneServer* server) {
	_initializeImplementation();
	// server/zone/managers/bazaar/BazaarManager.idl():  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/bazaar/BazaarManager.idl():  		Logger.setLoggingName("BazaarManager");
	Logger::setLoggingName("BazaarManager");
	// server/zone/managers/bazaar/BazaarManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/bazaar/BazaarManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

/*
 *	BazaarManagerAdapter
 */

BazaarManagerAdapter::BazaarManagerAdapter(BazaarManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* BazaarManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_CHECKAUCTIONS__:
		checkAuctions();
		break;
	case RPC_ADDSALEITEM__PLAYERCREATURE_LONG_LONG_UNICODESTRING_INT_INT_BOOL_:
		addSaleItem((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getUnicodeParameter(_param3_addSaleItem__PlayerCreature_long_long_UnicodeString_int_int_bool_), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_CREATEAUCTIONITEM__PLAYERCREATURE_SCENEOBJECT_BAZAARTERMINAL_UNICODESTRING_INT_INT_BOOL_:
		resp->insertLong(createAuctionItem((PlayerCreature*) inv->getObjectParameter(), (SceneObject*) inv->getObjectParameter(), (BazaarTerminal*) inv->getObjectParameter(), inv->getUnicodeParameter(_param3_createAuctionItem__PlayerCreature_SceneObject_BazaarTerminal_UnicodeString_int_int_bool_), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case RPC_CHECKSALEITEM__PLAYERCREATURE_SCENEOBJECT_INT_:
		resp->insertSignedInt(checkSaleItem((PlayerCreature*) inv->getObjectParameter(), (SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_GETITEMATTRIBUTES__PLAYERCREATURE_LONG_:
		getItemAttributes((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case RPC_GETBAZAARDATA__PLAYERCREATURE_INT_LONG_INT_INT_INT_INT_:
		getBazaarData((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_GETALLBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_:
		getAllBazaarData((PlayerCreature*) inv->getObjectParameter(), (BazaarTerminal*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_GETPLANETBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_:
		getPlanetBazaarData((PlayerCreature*) inv->getObjectParameter(), (BazaarTerminal*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_GETREGIONBAZAARDATA__PLAYERCREATURE_BAZAARTERMINAL_INT_INT_INT_INT_:
		getRegionBazaarData((PlayerCreature*) inv->getObjectParameter(), (BazaarTerminal*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CHECKRETRIEVE__PLAYERCREATURE_LONG_BAZAARTERMINAL_:
		resp->insertSignedInt(checkRetrieve((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), (BazaarTerminal*) inv->getObjectParameter()));
		break;
	case RPC_RETRIEVEITEM__PLAYERCREATURE_LONG_LONG_:
		retrieveItem((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter());
		break;
	case RPC_BUYITEM__PLAYERCREATURE_LONG_INT_INT_:
		buyItem((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_DOAUCTIONBID__PLAYERCREATURE_AUCTIONITEM_INT_INT_:
		doAuctionBid((PlayerCreature*) inv->getObjectParameter(), (AuctionItem*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_DOINSTANTBUY__PLAYERCREATURE_AUCTIONITEM_INT_INT_:
		doInstantBuy((PlayerCreature*) inv->getObjectParameter(), (AuctionItem*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CHECKBIDAUCTION__PLAYERCREATURE_AUCTIONITEM_INT_INT_:
		resp->insertSignedInt(checkBidAuction((PlayerCreature*) inv->getObjectParameter(), (AuctionItem*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void BazaarManagerAdapter::initialize() {
	((BazaarManagerImplementation*) impl)->initialize();
}

void BazaarManagerAdapter::checkAuctions() {
	((BazaarManagerImplementation*) impl)->checkAuctions();
}

void BazaarManagerAdapter::addSaleItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid, const UnicodeString& description, int price, unsigned int duration, bool auction) {
	((BazaarManagerImplementation*) impl)->addSaleItem(player, objectid, bazaarid, description, price, duration, auction);
}

AuctionItem* BazaarManagerAdapter::createAuctionItem(PlayerCreature* player, SceneObject* objectToSell, BazaarTerminal* terminal, const UnicodeString& description, int price, unsigned int duration, bool auction) {
	return ((BazaarManagerImplementation*) impl)->createAuctionItem(player, objectToSell, terminal, description, price, duration, auction);
}

int BazaarManagerAdapter::checkSaleItem(PlayerCreature* player, SceneObject* object, int price) {
	return ((BazaarManagerImplementation*) impl)->checkSaleItem(player, object, price);
}

void BazaarManagerAdapter::getItemAttributes(PlayerCreature* player, unsigned long long objectid) {
	((BazaarManagerImplementation*) impl)->getItemAttributes(player, objectid);
}

void BazaarManagerAdapter::getBazaarData(PlayerCreature* player, int extent, unsigned long long bazaarObjectid, int screen, unsigned int category, int count, int offset) {
	((BazaarManagerImplementation*) impl)->getBazaarData(player, extent, bazaarObjectid, screen, category, count, offset);
}

void BazaarManagerAdapter::getAllBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	((BazaarManagerImplementation*) impl)->getAllBazaarData(player, terminal, screen, category, count, offset);
}

void BazaarManagerAdapter::getPlanetBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	((BazaarManagerImplementation*) impl)->getPlanetBazaarData(player, terminal, screen, category, count, offset);
}

void BazaarManagerAdapter::getRegionBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset) {
	((BazaarManagerImplementation*) impl)->getRegionBazaarData(player, terminal, screen, category, count, offset);
}

int BazaarManagerAdapter::checkRetrieve(PlayerCreature* player, unsigned long long objectIdToRetrieve, BazaarTerminal* terminal) {
	return ((BazaarManagerImplementation*) impl)->checkRetrieve(player, objectIdToRetrieve, terminal);
}

void BazaarManagerAdapter::retrieveItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid) {
	((BazaarManagerImplementation*) impl)->retrieveItem(player, objectid, bazaarid);
}

void BazaarManagerAdapter::buyItem(PlayerCreature* player, unsigned long long objectid, int price1, int price2) {
	((BazaarManagerImplementation*) impl)->buyItem(player, objectid, price1, price2);
}

void BazaarManagerAdapter::doAuctionBid(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	((BazaarManagerImplementation*) impl)->doAuctionBid(player, item, price1, price2);
}

void BazaarManagerAdapter::doInstantBuy(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	((BazaarManagerImplementation*) impl)->doInstantBuy(player, item, price1, price2);
}

int BazaarManagerAdapter::checkBidAuction(PlayerCreature* player, AuctionItem* item, int price1, int price2) {
	return ((BazaarManagerImplementation*) impl)->checkBidAuction(player, item, price1, price2);
}

/*
 *	BazaarManagerHelper
 */

BazaarManagerHelper* BazaarManagerHelper::staticInitializer = BazaarManagerHelper::instance();

BazaarManagerHelper::BazaarManagerHelper() {
	className = "BazaarManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void BazaarManagerHelper::finalizeHelper() {
	BazaarManagerHelper::finalize();
}

DistributedObject* BazaarManagerHelper::instantiateObject() {
	return new BazaarManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarManagerHelper::instantiateServant() {
	return new BazaarManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarManagerAdapter((BazaarManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessory : HMFObject <HMDBackingStoreObjectProtocol, HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSMutableSet * _accessoryProfiles;
    unsigned long long  _accessoryReprovisionState;
    HMDApplicationData * _appData;
    HMDApplicationRegistry * _appRegistry;
    bool  _blocked;
    HMAccessoryCategory * _category;
    NSNumber * _categoryIdentifier;
    unsigned long long  _configNumber;
    NSString * _configurationAppIdentifier;
    NSString * _configuredName;
    HMDAccessoryVersion * _firmwareVersion;
    HMDHome * _home;
    NSString * _identifier;
    NSString * _manufacturer;
    NSString * _model;
    HMFMessageDispatcher * _msgDispatcher;
    bool  _primary;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _providedName;
    bool  _reachable;
    bool  _remoteAccessEnabled;
    bool  _remotelyReachable;
    HMDRoom * _room;
    NSString * _serialNumber;
    HMDAccessoryTransaction * _transaction;
    bool  _unblockPending;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSArray *accessoryProfiles;
@property (nonatomic) unsigned long long accessoryReprovisionState;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) HMDApplicationRegistry *appRegistry;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, retain) HMAccessoryCategory *category;
@property (nonatomic, retain) NSNumber *categoryIdentifier;
@property (nonatomic) unsigned long long configNumber;
@property (nonatomic, copy) NSString *configurationAppIdentifier;
@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (getter=isCurrentAccessory, readonly) bool currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HMDAccessoryVersion *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) NSString *providedName;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, readonly) long long reachableTransports;
@property (getter=isRemoteAccessEnabled, nonatomic) bool remoteAccessEnabled;
@property (getter=isRemotelyReachable, nonatomic) bool remotelyReachable;
@property (readonly) bool requiresHomeAppForManagement;
@property (nonatomic, retain) HMDRoom *room;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) bool supportsUserManagement;
@property (nonatomic, retain) HMDAccessoryTransaction *transaction;
@property (nonatomic) bool unblockPending;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly, copy) HMDVendorModelEntry *vendorInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createCameraProfiles:(id)arg1;
- (void)_handleGetAccessoryAdvertisingParams:(id)arg1;
- (void)_handleIdentify:(id)arg1;
- (void)_handleListPairings:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(bool)arg1 remoteAccessChanged:(bool)arg2;
- (void)_registerForMessages;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)_remoteAccessEnabled:(bool)arg1;
- (void)_sendBlockedNotification:(bool)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)_updateCategory:(id)arg1 notifyClients:(bool)arg2;
- (id)_updateRoom:(id)arg1 message:(id*)arg2;
- (id)accessoryProfiles;
- (unsigned long long)accessoryReprovisionState;
- (void)addAccessoryProfile:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (id)appData;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (id)appRegistry;
- (id)assistantObject;
- (id)assistantUniqueIdentifier;
- (id)backingStoreObjects:(long long)arg1;
- (void)blockWithError:(id)arg1;
- (id)category;
- (id)categoryIdentifier;
- (unsigned long long)configNumber;
- (id)configurationAppIdentifier;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (id)configuredName;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (void)dealloc;
- (id)description;
- (void)didEncounterError:(id)arg1;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)getConfiguredName;
- (void)handleReachabilityChange:(bool)arg1;
- (void)handleRemoteReachabilityChange:(bool)arg1;
- (void)handleUpdatedName:(id)arg1;
- (id)hashRouteID;
- (id)home;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (bool)isBlocked;
- (bool)isCurrentAccessory;
- (bool)isPrimary;
- (bool)isReachable;
- (bool)isReachableForXPCClients;
- (bool)isRemoteAccessEnabled;
- (bool)isRemotelyReachable;
- (void)logDuetRoomEvent;
- (id)logIdentifier;
- (id)manufacturer;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (id)model;
- (id)msgDispatcher;
- (id)name;
- (void)notifyAccessoryNameChanged:(bool)arg1;
- (void)pairingsWithCompletionHandler:(id /* block */)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)propertyQueue;
- (id)providedName;
- (bool)providesHashRouteID;
- (long long)reachableTransports;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)remoteAccessEnabled:(bool)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)removeAdvertisement:(id)arg1;
- (bool)requiresHomeAppForManagement;
- (id)room;
- (id)serialNumber;
- (void)setAccessoryProfiles:(id)arg1;
- (void)setAccessoryReprovisionState:(unsigned long long)arg1;
- (void)setAppData:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setConfigNumber:(unsigned long long)arg1;
- (void)setConfigurationAppIdentifier:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setRemoteAccessEnabled:(bool)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setRoom:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUnblockPending:(bool)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldEnableDaemonRelaunch;
- (bool)supportsMinimumUserPrivilege;
- (bool)supportsUserManagement;
- (void)takeOwnershipOfAppData:(id)arg1;
- (id)transaction;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (bool)unblockPending;
- (void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unconfigure;
- (id)updateAppData:(id)arg1;
- (void)updateCategory:(id)arg1;
- (void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4;
- (void)updateMediaSession:(id)arg1;
- (void)updateProvidedName:(id)arg1;
- (void)updateRoom:(id)arg1;
- (void)updateRoom:(id)arg1 message:(id)arg2;
- (id)url;
- (id)uuid;
- (id)vendorInfo;
- (id)workQueue;

@end

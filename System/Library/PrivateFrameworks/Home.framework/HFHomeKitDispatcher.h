/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMResidentDeviceDelegate.h>
#import <libobjc.A.dylib/HMCameraSnapshotControlDelegate.h>
#import <libobjc.A.dylib/HMCameraStreamControlDelegate.h>
#import <libobjc.A.dylib/HMMediaProfileDelegate.h>
#import <libobjc.A.dylib/HFLocationSensingCoordinatorDelegate.h>
#import <libobjc.A.dylib/HFHomeAppInstallStateArbiterObserver.h>
#import <libobjc.A.dylib/HMSoftwareUpdateControllerDelegate.h>
#import <libobjc.A.dylib/HMAccessorySettingsDelegate.h>
#import <libobjc.A.dylib/HMSoftwareUpdateDelegate.h>
#import <libobjc.A.dylib/_HFSettingsObserverTupleOwning.h>
#import <libobjc.A.dylib/HMSymptomsHandlerDelegate.h>
#import <libobjc.A.dylib/HMUserDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>
#import <libobjc.A.dylib/HMAccessoryDelegatePrivate.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFMediaSessionObserver.h>

@class HMHomeManager, HMHome, HFLocationSensingCoordinator, NSTimer, NSMutableDictionary, NSHashTable, NSMutableArray, NAFuture, NSString;

@interface HFHomeKitDispatcher : NSObject <HMResidentDeviceDelegate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMMediaProfileDelegate, HFLocationSensingCoordinatorDelegate, HFHomeAppInstallStateArbiterObserver, HMSoftwareUpdateControllerDelegate, HMAccessorySettingsDelegate, HMSoftwareUpdateDelegate, _HFSettingsObserverTupleOwning, HMSymptomsHandlerDelegate, HMUserDelegatePrivate, HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HFMediaObjectObserver, HFMediaSessionObserver> {

	BOOL _hasLoadedHomes;
	int _homeKitPreferencesChangedNotifyToken;
	HMHomeManager* _homeManager;
	HMHome* _home;
	HMHome* _overrideHome;
	HMHome* _selectedHome;
	HFLocationSensingCoordinator* _locationCoordinator;
	NSTimer* _homeSensingIdleTimer;
	NSMutableDictionary* _remoteAccessStateByHomeID;
	NSHashTable* _homeObservers;
	NSHashTable* _homeManagerObservers;
	NSHashTable* _accessoryObservers;
	NSHashTable* _residentDeviceObservers;
	NSHashTable* _cameraObservers;
	NSHashTable* _mediaObjectObservers;
	NSHashTable* _mediaSessionObservers;
	NSHashTable* _softwareUpdateControllerObservers;
	NSHashTable* _softwareUpdateObservers;
	NSHashTable* _userObservers;
	NSHashTable* _symptomsHandlerObservers;
	NSMutableArray* _settingsObservers;
	NSMutableArray* _requestedSoftwareUpdates;
	NSMutableArray* _homePromises;
	NSMutableArray* _firstHomeAddedPromises;
	NSMutableArray* _allHomesPromises;
	NAFuture* _locationCoordinatorSetupFuture;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                           //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HMHome * selectedHome;                                           //@synthesize selectedHome=_selectedHome - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedHomes;                                             //@synthesize hasLoadedHomes=_hasLoadedHomes - In the implementation block
@property (nonatomic,retain) HFLocationSensingCoordinator * locationCoordinator;              //@synthesize locationCoordinator=_locationCoordinator - In the implementation block
@property (nonatomic,retain) NSTimer * homeSensingIdleTimer;                                  //@synthesize homeSensingIdleTimer=_homeSensingIdleTimer - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangedNotifyToken;                        //@synthesize homeKitPreferencesChangedNotifyToken=_homeKitPreferencesChangedNotifyToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteAccessStateByHomeID;                 //@synthesize remoteAccessStateByHomeID=_remoteAccessStateByHomeID - In the implementation block
@property (nonatomic,retain) NSHashTable * homeObservers;                                     //@synthesize homeObservers=_homeObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * homeManagerObservers;                              //@synthesize homeManagerObservers=_homeManagerObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * accessoryObservers;                                //@synthesize accessoryObservers=_accessoryObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * residentDeviceObservers;                           //@synthesize residentDeviceObservers=_residentDeviceObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * cameraObservers;                                   //@synthesize cameraObservers=_cameraObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * mediaObjectObservers;                              //@synthesize mediaObjectObservers=_mediaObjectObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * mediaSessionObservers;                             //@synthesize mediaSessionObservers=_mediaSessionObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * softwareUpdateControllerObservers;                 //@synthesize softwareUpdateControllerObservers=_softwareUpdateControllerObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * softwareUpdateObservers;                           //@synthesize softwareUpdateObservers=_softwareUpdateObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * userObservers;                                     //@synthesize userObservers=_userObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * symptomsHandlerObservers;                          //@synthesize symptomsHandlerObservers=_symptomsHandlerObservers - In the implementation block
@property (nonatomic,retain) NSMutableArray * settingsObservers;                              //@synthesize settingsObservers=_settingsObservers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * requestedSoftwareUpdates;                     //@synthesize requestedSoftwareUpdates=_requestedSoftwareUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * homePromises;                                   //@synthesize homePromises=_homePromises - In the implementation block
@property (nonatomic,retain) NSMutableArray * firstHomeAddedPromises;                         //@synthesize firstHomeAddedPromises=_firstHomeAddedPromises - In the implementation block
@property (nonatomic,retain) NSMutableArray * allHomesPromises;                               //@synthesize allHomesPromises=_allHomesPromises - In the implementation block
@property (nonatomic,retain) NAFuture * locationCoordinatorSetupFuture;                       //@synthesize locationCoordinatorSetupFuture=_locationCoordinatorSetupFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * homeFuture; 
@property (nonatomic,readonly) NAFuture * firstHomeAddedFuture; 
@property (nonatomic,readonly) NAFuture * allHomesFuture; 
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL selectedHomeFollowsLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_homeManagerCreationPolicy;
+(id)sharedDispatcher;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addHomeObserver:(id)arg1 ;
-(void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(BOOL)arg2 ;
-(void)coordinator:(id)arg1 homeSensingStatusDidChange:(BOOL)arg2 ;
-(NAFuture *)locationSensingAvailableFuture;
-(void)dispatchCameraObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)addMediaObjectObserver:(id)arg1 ;
-(void)addSettingObserver:(id)arg1 ;
-(void)addSettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3 ;
-(void)removeSettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(void)settingsWillUpdate:(id)arg1 ;
-(void)dispatchAccessoryObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateName:(id)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2 ;
-(void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateFixState:(long long)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateCanInitiateFix:(BOOL)arg2 ;
-(void)mediaSession:(id)arg1 willUpdatePlaybackState:(long long)arg2 ;
-(void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2 ;
-(void)mediaSession:(id)arg1 failedToUpdatePlaybackStateWithError:(id)arg2 ;
-(void)addMediaSessionObserver:(id)arg1 ;
-(void)dispatchMediaSessionObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(NAFuture *)allHomesFuture;
-(void)dispatchMediaObjectObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(NAFuture *)homeFuture;
-(void)addResidentDeviceObserver:(id)arg1 ;
-(void)addCameraObserver:(id)arg1 ;
-(void)addSoftwareUpdateObserver:(id)arg1 ;
-(void)addSoftwareUpdateControllerObserver:(id)arg1 ;
-(void)addSymptomsHandlerObserver:(id)arg1 ;
-(void)addUserObserver:(id)arg1 ;
-(void)removeHomeObserver:(id)arg1 ;
-(void)removeAccessoryObserver:(id)arg1 ;
-(void)removeResidentDeviceObserver:(id)arg1 ;
-(void)removeCameraObserver:(id)arg1 ;
-(void)removeMediaSessionObserver:(id)arg1 ;
-(void)removeMediaObjectObserver:(id)arg1 ;
-(void)removeSoftwareUpdateObserver:(id)arg1 ;
-(void)removeSoftwareUpdateControllerObserver:(id)arg1 ;
-(void)removeSettingObserver:(id)arg1 ;
-(void)removeSymptomsHandlerObserver:(id)arg1 ;
-(void)removeUserObserver:(id)arg1 ;
-(void)dispatchAccessorySettingMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)settingsObserverTupleWasInvalidated:(id)arg1 ;
-(void)dispatchHomeManagerObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)installStateArbiter:(id)arg1 installStateDidChange:(BOOL)arg2 ;
-(id)_setupLocationSensingCoordinator;
-(void)setLocationCoordinatorSetupFuture:(NAFuture *)arg1 ;
-(void)_createHomeManagerIfNecessary;
-(int)homeKitPreferencesChangedNotifyToken;
-(NSTimer *)homeSensingIdleTimer;
-(NSHashTable *)homeManagerObservers;
-(NSHashTable *)homeObservers;
-(NSHashTable *)accessoryObservers;
-(NSHashTable *)residentDeviceObservers;
-(NSHashTable *)cameraObservers;
-(NSMutableArray *)settingsObservers;
-(NSHashTable *)mediaObjectObservers;
-(void)removeMediaProfileObserver:(id)arg1 ;
-(NSHashTable *)mediaSessionObservers;
-(NSHashTable *)softwareUpdateControllerObservers;
-(NSHashTable *)softwareUpdateObservers;
-(NSHashTable *)userObservers;
-(NSHashTable *)symptomsHandlerObservers;
-(HMHome *)selectedHome;
-(void)_setDelegateForObjectsInCurrentHome:(id)arg1 ;
-(NSMutableArray *)firstHomeAddedPromises;
-(void)_finishFirstHomeAddedPromises:(id)arg1 ;
-(BOOL)hasLoadedHomes;
-(void)_requestSelectedHome:(id)arg1 notifyAndSaveIfNecessary:(BOOL)arg2 ;
-(void)updateStopHomeSensingIdleTimerState;
-(id)_primaryHome;
-(BOOL)_shouldPersistSelectedHomeToDefaults;
-(void)updateHome;
-(void)_finishHomePromises:(id)arg1 ;
-(NSMutableArray *)homePromises;
-(void)_finishAllHomesPromises:(id)arg1 ;
-(NSMutableArray *)allHomesPromises;
-(HFLocationSensingCoordinator *)locationCoordinator;
-(BOOL)selectedHomeFollowsLocation;
-(void)setLocationCoordinator:(HFLocationSensingCoordinator *)arg1 ;
-(NSMutableArray *)requestedSoftwareUpdates;
-(void)dispatchSoftwareUpdateMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)updateSelectedHome;
-(void)setHasLoadedHomes:(BOOL)arg1 ;
-(void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(BOOL)arg2 ;
-(void)setSelectedHome:(HMHome *)arg1 ;
-(NSMutableDictionary *)remoteAccessStateByHomeID;
-(id)homeSensingActiveFuture;
-(void)_setDelegate:(id)arg1 forAccessoryHierarchy:(id)arg2 ;
-(void)_setDelegate:(id)arg1 forMediaProfileContainer:(id)arg2 session:(id)arg3 ;
-(NAFuture *)locationCoordinatorSetupFuture;
-(void)startHomeSensingIdleTimer;
-(void)setHomeSensingIdleTimer:(NSTimer *)arg1 ;
-(void)addSettingObserver:(id)arg1 forSettings:(id)arg2 ;
-(void)removeSettingObserver:(id)arg1 forSettings:(id)arg2 ;
-(void)addMediaProfileObserver:(id)arg1 ;
-(void)dispatchSoftwareUpdateControllerMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchSymptomsHandlerMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(NAFuture *)firstHomeAddedFuture;
-(void)setSelectedHomeFollowsLocation:(BOOL)arg1 ;
-(void)setHomeKitPreferencesChangedNotifyToken:(int)arg1 ;
-(void)setRemoteAccessStateByHomeID:(NSMutableDictionary *)arg1 ;
-(void)setHomeObservers:(NSHashTable *)arg1 ;
-(void)setHomeManagerObservers:(NSHashTable *)arg1 ;
-(void)setAccessoryObservers:(NSHashTable *)arg1 ;
-(void)setResidentDeviceObservers:(NSHashTable *)arg1 ;
-(void)setCameraObservers:(NSHashTable *)arg1 ;
-(void)setMediaObjectObservers:(NSHashTable *)arg1 ;
-(void)setMediaSessionObservers:(NSHashTable *)arg1 ;
-(void)setSoftwareUpdateControllerObservers:(NSHashTable *)arg1 ;
-(void)setSoftwareUpdateObservers:(NSHashTable *)arg1 ;
-(void)setUserObservers:(NSHashTable *)arg1 ;
-(void)setSymptomsHandlerObservers:(NSHashTable *)arg1 ;
-(void)setSettingsObservers:(NSMutableArray *)arg1 ;
-(void)setHomePromises:(NSMutableArray *)arg1 ;
-(void)setFirstHomeAddedPromises:(NSMutableArray *)arg1 ;
-(void)setAllHomesPromises:(NSMutableArray *)arg1 ;
-(void)markUpdate:(id)arg1 asRequested:(BOOL)arg2 ;
-(void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)softwareUpdate:(id)arg1 didUpdateDocumentationAvailable:(BOOL)arg2 ;
-(void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2 ;
-(void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3 ;
-(void)dispatchUserObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForRoom:(id)arg2 ;
-(void)home:(id)arg1 didAddZone:(id)arg2 ;
-(void)home:(id)arg1 didRemoveZone:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForZone:(id)arg2 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3 ;
-(void)home:(id)arg1 didAddServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didRemoveServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didAddActionSet:(id)arg2 ;
-(void)home:(id)arg1 didRemoveActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didAddTrigger:(id)arg2 ;
-(void)home:(id)arg1 didRemoveTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUnblockAccessory:(id)arg2 ;
-(void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3 ;
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2 ;
-(void)homeDidUpdateApplicationData:(id)arg1 ;
-(void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2 ;
-(void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPassword:(id)arg2 ;
-(void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2 ;
-(void)dispatchHomeObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)addHomeManagerObserver:(id)arg1 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)homeManagerDidUpdateApplicationData:(id)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2 ;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2 ;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(void)homeManagerWillStartBatchNotifications:(id)arg1 ;
-(void)homeManagerDidEndBatchNotifications:(id)arg1 ;
-(void)warmup;
-(BOOL)hasRequestedUpdate:(id)arg1 ;
-(HMHome *)overrideHome;
-(void)setOverrideHome:(HMHome *)arg1 ;
-(void)addAccessoryObserver:(id)arg1 ;
-(void)accessoryDidUpdateName:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)accessory:(id)arg1 didAddProfile:(id)arg2 ;
-(void)accessory:(id)arg1 didRemoveProfile:(id)arg2 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2 ;
-(void)accessoryDidUpdateApplicationData:(id)arg1 ;
-(void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateBundleID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateStoreID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateSoftwareVersion:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateConfiguredNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateDefaultNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateServiceSubtypeForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateConfigurationStateForService:(id)arg2 ;
-(void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2 ;
-(void)removeHomeManagerObserver:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
@end

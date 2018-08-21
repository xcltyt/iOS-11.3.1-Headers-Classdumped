//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "CLLocationManagerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"

@class CLLocationManager, DarwinNotificationObsever, DeviceDetailViewController, FMDistanceCalculator, FMIPAccount, FMIPCommandContext, FMIPDevice, FMNetworkMonitor, FMReachability, HLPHelpViewController, MKMapView, MainViewController, NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSTimer, NSURL, NSValue, Session, SplitViewController, UIColor, UIWindow;

@interface AppDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate, CLLocationManagerDelegate>
{
    _Bool _needToPreloadImages;
    _Bool _wasStateRestored;
    _Bool _isForeground;
    _Bool _requiresLightStatusBar;
    _Bool _blockLoginUsername;
    int _authorizationStatus;
    int _daemonAuthorizationStatus;
    UIWindow *_window;
    MKMapView *_sharedMapView;
    DeviceDetailViewController *_deviceDetailViewController;
    unsigned long long _mapType;
    Session *_session;
    FMReachability *_legacyReachability;
    FMNetworkMonitor *_networkMonitor;
    id _reachabilityNotificationToken;
    SplitViewController *_splitViewController;
    FMDistanceCalculator *_distanceCalculator;
    NSURL *_urlToOpen;
    long long _notificationAuthStatus;
    NSString *_currentLanguage;
    FMIPDevice *_soundPendingDevice;
    FMIPCommandContext *_soundCommandContext;
    NSTimer *_soundPendingTimer;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_configuration;
    NSString *_currentRootViewControllerIdentifier;
    DarwinNotificationObsever *_dno;
    CDStruct_b7cb895d _lastCoordinateRegion;
}

+ (id)uniqueIdentifier;
+ (id)sharedInstance;
+ (id)satelliteOfflineAccuracyCircleColor;
+ (id)satelliteOnlineAccuracyCircleColor;
+ (id)satelliteLostModeFrameTintColor;
+ (id)satelliteOfflineFrameTintColor;
+ (id)satelliteOnlineFrameTintColor;
+ (id)satelliteLostModeFrameBorderColor;
+ (id)satelliteOfflineFrameBorderColor;
+ (id)satelliteOnlineFrameBorderColor;
+ (id)satelliteLostModeFrameBackgroundColor;
+ (id)satelliteOfflineFrameBackgroundColor;
+ (id)satelliteOnlineFrameBackgroundColor;
+ (id)standardOfflineAccuracyCircleColor;
+ (id)standardOnlineAccuracyCircleColor;
+ (id)standardLostModeFrameTintColor;
+ (id)standardOfflineFrameTintColor;
+ (id)standardOnlineFrameTintColor;
+ (id)standardLostModeFrameBorderColor;
+ (id)standardOfflineFrameBorderColor;
+ (id)standardOnlineFrameBorderColor;
+ (id)standardLostModeFrameBackgroundColor;
+ (id)standardOfflineFrameBackgroundColor;
+ (id)standardOnlineFrameBackgroundColor;
+ (id)meTintColor;
@property(retain, nonatomic) DarwinNotificationObsever *dno; // @synthesize dno=_dno;
@property(nonatomic) int daemonAuthorizationStatus; // @synthesize daemonAuthorizationStatus=_daemonAuthorizationStatus;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) NSString *currentRootViewControllerIdentifier; // @synthesize currentRootViewControllerIdentifier=_currentRootViewControllerIdentifier;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSTimer *soundPendingTimer; // @synthesize soundPendingTimer=_soundPendingTimer;
@property(retain, nonatomic) FMIPCommandContext *soundCommandContext; // @synthesize soundCommandContext=_soundCommandContext;
@property(retain, nonatomic) FMIPDevice *soundPendingDevice; // @synthesize soundPendingDevice=_soundPendingDevice;
@property(readonly, copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(nonatomic) _Bool blockLoginUsername; // @synthesize blockLoginUsername=_blockLoginUsername;
@property(nonatomic) long long notificationAuthStatus; // @synthesize notificationAuthStatus=_notificationAuthStatus;
@property(nonatomic) _Bool requiresLightStatusBar; // @synthesize requiresLightStatusBar=_requiresLightStatusBar;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(copy, nonatomic) NSURL *urlToOpen; // @synthesize urlToOpen=_urlToOpen;
@property(retain, nonatomic) FMDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property(retain, nonatomic) SplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(nonatomic) CDStruct_b7cb895d lastCoordinateRegion; // @synthesize lastCoordinateRegion=_lastCoordinateRegion;
@property(retain, nonatomic) id reachabilityNotificationToken; // @synthesize reachabilityNotificationToken=_reachabilityNotificationToken;
@property(retain, nonatomic) FMNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) FMReachability *legacyReachability; // @synthesize legacyReachability=_legacyReachability;
@property(nonatomic) _Bool wasStateRestored; // @synthesize wasStateRestored=_wasStateRestored;
@property(retain, nonatomic) Session *session; // @synthesize session=_session;
@property(nonatomic) _Bool needToPreloadImages; // @synthesize needToPreloadImages=_needToPreloadImages;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) __weak DeviceDetailViewController *deviceDetailViewController; // @synthesize deviceDetailViewController=_deviceDetailViewController;
@property(nonatomic) __weak MKMapView *sharedMapView; // @synthesize sharedMapView=_sharedMapView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)processNotificationInfo:(id)arg1 andAction:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setupUserNotifications;
- (void)showSafetyWarningWithConfirmActionHandler:(CDUnknownBlockType)arg1;
- (void)showBluetoothAlertIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)soundPendingTimerFired;
- (void)removeSoundPendingObserversForDevice:(id)arg1;
- (void)setSoundPendingObserversForDevice:(id)arg1;
- (void)setPendingPlaysoundViewControllerWithDevice:(id)arg1 andCommandContext:(id)arg2;
- (void)startEraseFlowForDevice:(id)arg1;
- (void)startLockForDevice:(id)arg1;
- (void)startLostModeFlowForDevice:(id)arg1;
- (void)startLockFlowForDevice:(id)arg1;
- (void)startPlaySoundFlowForDevice:(id)arg1;
- (id)deviceForId:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)cancelModalFlowIfNecessary;
- (void)pushTokenChanged:(id)arg1;
- (void)pushNotificationReceived:(id)arg1;
- (id)defaultUsername;
- (void)destroySessionAndDeleteAccount:(_Bool)arg1;
- (void)createSessionForUsername:(id)arg1 personId:(id)arg2;
- (void)createSessionForAccount:(id)arg1;
@property(readonly, nonatomic) FMIPAccount *ownerAccount;
@property(readonly, nonatomic) CLLocationManager *locationManager;
- (void)updateCurrentSecurityState;
@property(readonly, nonatomic) _Bool useLocationManagerFeatures;
@property(readonly, nonatomic) _Bool isFMIPSystemServicesEnabled;
- (void)checkDaemonAuthorizationStatus;
- (void)userIsActive;
@property(readonly, nonatomic, getter=isRTL) _Bool RTL;
- (void)hideNoNetworkView;
- (void)showNoNetworkView;
- (void)stopMonitoringReachability;
- (void)startMonitoringReachability;
- (long long)twoFactorFamilyActionsOverride;
- (long long)twoFactorFamilyRemoveOverride;
- (long long)twoFactorEraseOverride;
- (_Bool)enableLongPressGesture;
- (void)installDevelopmentNotificationHandlers;
- (void)migrateFromVersion:(id)arg1 toVersion:(id)arg2;
- (void)migrateToFirstPartyFromVersion:(id)arg1 toVersion:(id)arg2;
- (void)initialLaunchProcessing;
- (void)versionCheckProcessing;
@property(readonly, copy, nonatomic) NSURL *applicationDocumentsDirectory;
- (void)saveContext;
- (void)protectFileAtURL:(id)arg1;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)cacheDir;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)getDirectionsToDevice:(id)arg1;
- (void)dismissSplitViewOverlay;
- (void)showServerAlert:(id)arg1;
- (void)signoutClearingUsername:(_Bool)arg1;
- (void)signout:(id)arg1;
- (void)displayHelp:(id)arg1;
- (id)helpControllerForAPDID:(id)arg1;
@property(readonly, nonatomic) HLPHelpViewController *helpController;
- (id)localizedStringForKey:(id)arg1;
- (void)showCustomAppDeprecatedViewHierarchy;
- (void)showSiteDownViewHierarchy;
- (void)showSplitViewHierarchy;
- (void)showLoadingViewHierarchy;
- (void)showLoginViewHierarchy;
- (void)showViewControllerFromStoryboard:(id)arg1 withIdentifier:(id)arg2;
- (void)installRootViewController:(id)arg1 withIdentifier:(id)arg2;
- (void)_installRootViewController:(id)arg1;
- (void)chooseInitialRootViewController;
@property(readonly) MainViewController *mainViewController;
@property(readonly, copy, nonatomic) UIColor *offlineAccuracyColor;
@property(readonly, copy, nonatomic) UIColor *onlineAccuracyColor;
@property(readonly, copy, nonatomic) UIColor *warningTextColor;
@property(readonly, copy, nonatomic) UIColor *lostModeTintColor;
@property(readonly, copy, nonatomic) UIColor *primaryTintColor;
@property(readonly, nonatomic) NSValue *doneTextShadowOffset;
@property(readonly, nonatomic) UIColor *doneTextShadowColor;
@property(readonly, nonatomic) UIColor *doneTextColor;
@property(readonly, nonatomic) NSValue *secondaryTextShadowOffset;
@property(readonly, nonatomic) UIColor *secondaryTextShadowColor;
@property(readonly, nonatomic) UIColor *secondaryTextColor;
@property(readonly, nonatomic) UIColor *disabledTitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


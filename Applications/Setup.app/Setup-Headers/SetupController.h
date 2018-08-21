//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowDelegate.h"
#import "BFFFlowItemDelegate.h"
#import "BFFNavigationControllerDelegate.h"
#import "BuddyLanguageChangeObserverDelegate.h"
#import "EmergencyDialerDelegate.h"
#import "WFBuddyViewControllerDelegate.h"

@class BFFBackupDeviceController, BFFFlow, BFFNavigationController, BFFWindow, BYExpressSetupDataProvider, BuddyLanguageChangeObserver, BuddyLocaleController, BuddyMenuController, BuddyProximityPairingController, BuddyWiFiController, EmergencyDialer, NSArray, NSDate, NSMutableArray, NSString, NSTimer, PCPersistentTimer, ProximitySetupController, UIAlertController, UIView, UIViewController, UIViewController<BuddyLanguageController>, WFNetworkListController;

@interface SetupController : NSObject <BFFFlowDelegate, WFBuddyViewControllerDelegate, BFFFlowItemDelegate, BFFNavigationControllerDelegate, EmergencyDialerDelegate, BuddyLanguageChangeObserverDelegate>
{
    BFFWindow *_window;
    UIView *_windowView;
    NSMutableArray *_buddyControllers;
    UIViewController<BuddyLanguageController> *_languageController;
    BuddyLocaleController *_localeController;
    UIAlertController *_homeButtonMenuController;
    NSString *_languageAtStartup;
    NSString *_localeIdentifierAtStartup;
    _Bool _shouldAnimateLocaleScreen;
    _Bool _shouldIgnoreiTunesLanguagePushOnResume;
    _Bool _buddyDone;
    _Bool _supportsCellularActivation;
    _Bool _supportsCellularActivationInitialized;
    _Bool _userSelectedCellularActivation;
    _Bool _appleIDConfigured;
    PCPersistentTimer *_inactivityTimer;
    int _systemTimeUpdateStatus;
    NSMutableArray *_controllersToRemove;
    EmergencyDialer *_emergencyDialer;
    struct SBSAlertItemsSuppressionAssertion *_sbAlertItemsSuppressionAssertion;
    BuddyLanguageChangeObserver *_languageObserver;
    NSTimer *_TFDEPPollTimer;
    _Bool _isTapFreeSetup;
    BFFNavigationController *_nav;
    BuddyMenuController *_menuButtonConsumer;
    _Bool _inMiniBuddyFromBreadcrumb;
    BFFFlow *_passcodeFlow;
    _Bool _connectedOverWiFi;
    _Bool _showWiFiInMenu;
    NSDate *_buddyStartDate;
    NSDate *_lockStartDate;
    double _cumulativeLockedDuration;
    _Bool _wifiControllerInAdvancedMode;
    _Bool _networkReachable;
    _Bool _deviceRestoreChoiceIsiCloudRestore;
    _Bool _shouldRereadCloudConfigurationForControllersToSkip;
    _Bool _applyingProximitySettings;
    BYExpressSetupDataProvider *_expressSetupDataProvider;
    NSString *_iCloudAppleIdFromActivation;
    ProximitySetupController *_proximitySetupController;
    BFFBackupDeviceController *_backupDeviceController;
    NSArray *_viewControllersToRemoveOnPush;
    UIViewController *_topViewControllerForRemoving;
    id _cloudConfigurationChangeNotificationObserver;
    BuddyWiFiController *_wifiController;
    WFNetworkListController *_modalWifiManager;
    BuddyProximityPairingController *_proximityPairingController;
}

+ (void)localeCheck:(double)arg1;
+ (id)sharedSetupController;
+ (void)initialize;
@property(nonatomic) _Bool applyingProximitySettings; // @synthesize applyingProximitySettings=_applyingProximitySettings;
@property(retain, nonatomic) BuddyProximityPairingController *proximityPairingController; // @synthesize proximityPairingController=_proximityPairingController;
@property(retain, nonatomic) WFNetworkListController *modalWifiManager; // @synthesize modalWifiManager=_modalWifiManager;
@property(retain, nonatomic) BuddyWiFiController *wifiController; // @synthesize wifiController=_wifiController;
@property(retain, nonatomic) id cloudConfigurationChangeNotificationObserver; // @synthesize cloudConfigurationChangeNotificationObserver=_cloudConfigurationChangeNotificationObserver;
@property(nonatomic) _Bool shouldRereadCloudConfigurationForControllersToSkip; // @synthesize shouldRereadCloudConfigurationForControllersToSkip=_shouldRereadCloudConfigurationForControllersToSkip;
@property(retain, nonatomic) UIViewController *topViewControllerForRemoving; // @synthesize topViewControllerForRemoving=_topViewControllerForRemoving;
@property(copy, nonatomic) NSArray *viewControllersToRemoveOnPush; // @synthesize viewControllersToRemoveOnPush=_viewControllersToRemoveOnPush;
@property(retain) BFFBackupDeviceController *backupDeviceController; // @synthesize backupDeviceController=_backupDeviceController;
@property(retain) ProximitySetupController *proximitySetupController; // @synthesize proximitySetupController=_proximitySetupController;
@property(nonatomic) _Bool deviceRestoreChoiceIsiCloudRestore; // @synthesize deviceRestoreChoiceIsiCloudRestore=_deviceRestoreChoiceIsiCloudRestore;
@property(copy, nonatomic) NSString *iCloudAppleIdFromActivation; // @synthesize iCloudAppleIdFromActivation=_iCloudAppleIdFromActivation;
@property(retain, nonatomic) BYExpressSetupDataProvider *expressSetupDataProvider; // @synthesize expressSetupDataProvider=_expressSetupDataProvider;
@property(nonatomic) _Bool userSelectedCellularActivation; // @synthesize userSelectedCellularActivation=_userSelectedCellularActivation;
@property(readonly, nonatomic, getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
- (void).cxx_destruct;
- (void)handleDebugGesture;
- (void)setAppleIDConfigured;
- (void)activationControllerWantsWifiPicker;
- (void)deviceRestoreChoiceControllerWantsWifiPicker;
- (void)_addWifiToRoot;
- (void)_popToWifi;
- (id)topBuddyController;
- (void)flow:(id)arg1 finishedWithLastItem:(id)arg2 nextItem:(id)arg3;
- (void)flowItemDone:(id)arg1;
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;
- (void)_flowItemDone:(id)arg1 flow:(id)arg2 nextItemClass:(Class)arg3 nextItem:(id)arg4;
- (_Bool)_stackHasOnlyCloudConfigItems;
- (id)_cloudConfigViewControllerClasses;
- (_Bool)_hasWiFiControllerInTheStack;
- (void)endAdvertisingProximitySetup;
- (void)connectedToWiFiAfterProximity;
- (void)unableToApplyProximitySettings;
- (void)didApplyProximitySettings;
- (void)willApplyProximitySettings:(CDUnknownBlockType)arg1;
- (void)willPerformProximityHandshake;
- (void)skipProximitySetupConroller;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(id)arg1 language:(id)arg2 visual:(_Bool)arg3;
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;
- (id)popToBuddyControllerOffsetBy:(long long)arg1 fromControllerWithClass:(Class)arg2 animated:(_Bool)arg3;
- (Class)_possibleNextFlowItemClassFollowingClass:(Class)arg1;
- (void)setupFlowItem:(id)arg1;
- (id)createFlowItemForClass:(Class)arg1;
- (id)_flowItemFollowingClass:(Class)arg1;
- (void)_addItems:(id)arg1 toFlow:(id)arg2;
- (id)savedItemForClass:(Class)arg1;
- (void)pushBuddyItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;
- (void)pushBuddyItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;
- (void)removeViewControllersFromNavHierarchyOnNextPush:(id)arg1;
- (void)removeViewControllerFromNavHierarchy:(id)arg1;
- (id)_viewControllerForBuddyController:(id)arg1;
- (void)_presentViewControllerForBuddyController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_hideBackButtonIfNecessaryOnFlowItem:(id)arg1 withViewController:(id)arg2;
- (void)_localeChanged;
- (void)_activationStateChanged;
- (_Bool)suspendAppPostActivation;
- (_Bool)_restoreFromBackupJustFinished;
- (_Bool)_didRestoreIniTunes;
- (void)_languageChangeAlertDone;
- (void)_languageLocaleControllersDone;
- (void)_showMiniAlertWithRestart:(_Bool)arg1 withLanguage:(id)arg2;
- (void)_animateControllerGroup;
- (void)_setupStateChanged;
- (void)_setupSnapshotRemoved;
- (void)dialerDidDismiss:(id)arg1;
- (void)_removeSBAlertItemsSupressionAssertion;
- (void)_addSBAlertItemsSupressionAssertion;
- (void)_modalWifiControllerDone:(id)arg1;
- (void)showModalWiFiSettings;
- (void)menuButtonPressed;
- (void)dismissAlert:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAlert:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isAlertPresented:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)respring;
- (void)tearOutLanguageAndLocalePanes;
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;
- (_Bool)shouldTapFreeSetupSkipControllerClass:(Class)arg1;
- (_Bool)doesTapFreeSetupAffectsClass:(Class)arg1;
- (void)TFDEPPollTimerFired:(id)arg1;
- (_Bool)isTeslaEnrolled;
- (void)stopTFDEPPolling;
- (void)startTFDEPPolling;
- (_Bool)startedInFakeMode;
- (_Bool)networkReachable;
@property(nonatomic, getter=isConnectedOverWiFi) _Bool connectedOverWiFi;
- (int)systemTimeUpdateStatus;
- (void)_setSystemTime;
- (void)updateLoadingStatus;
- (void)didEnterBackground;
- (void)suspendApp;
- (void)resetBuddyPostActivation:(_Bool)arg1;
- (void)resume;
- (void)resign;
- (void)_refreshLanguage;
- (void)buddyWillFinish;
- (void)checkForUpdatedCarrierBundle;
- (void)_reachabilityChanged:(id)arg1;
- (void)updateSupportsCellularActivation;
- (void)buddyViewControllerDidPressAlternateSetupButton:(id)arg1;
- (_Bool)isWiFiInNavigationHistory;
- (_Bool)isShowingWiFiController;
- (void)run;
- (void)checkMiniBuddyBreadcrumbs;
- (void)_createNavInAirplaneMode:(_Bool)arg1;
- (void)_resumeDurationAnalyticsAfterLanguageChange;
- (void)_stashDurationAnalyticsBeforeLanguageChange;
- (_Bool)_isBackInBuddyAfterRestoreFromBackup:(_Bool)arg1;
- (_Bool)_isBackInBuddyForActivationOnly;
- (_Bool)_hasLocaleAndLanguage;
- (id)navigationController;
- (_Bool)isFirstRunWithoutCloudConfiguration;
- (void)exitBuddyWithRunType:(long long)arg1;
- (void)finishBuddyWithRunType:(long long)arg1;
- (void)setBuddyCompleteForRunType:(long long)arg1;
- (void)batteryStateDidChange;
- (void)_inactivityTimerFired:(id)arg1;
- (void)checkAndStartInactivityTimer;
- (void)stopInactivityTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


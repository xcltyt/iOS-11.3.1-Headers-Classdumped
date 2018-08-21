/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:58 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoard/BackBoard-Structs.h>
#import <libobjc.A.dylib/AXBackBoardServerInstance.h>

@protocol AXBackBoardServerInstance <NSObject>
@required
+(id)backBoardServerInstanceIfExists;
-(id)delegate;
-(BOOL)_inPreBoardMode;
-(BOOL)_inCheckerBoardMode;
-(BOOL)_sessionIsLoginSession;
-(BOOL)supportsBlueLightReduction;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(void)forceLoadGAXBundle;
-(void)resetAccessibilityFeatures;
-(BOOL)supportsAdaptation;

@end


@protocol AXBackBoardServerInstanceDelegate;
@class AXIPCServer, NSMutableArray, NSString;

@interface AXBackBoardServerInstance : NSObject <AXBackBoardServerInstance> {

	AXIPCServer* _server;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomListeners;
	CGRect _initialZoomFocusRect;
	NSMutableArray* _eventTapClients;
	id<AXBackBoardServerInstanceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXBackBoardServerInstanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backBoardServerInstance;
+(id)backBoardServerInstanceIfExists;
-(id)_handleEnableEventTap:(id)arg1 ;
-(id)_handleItemChooserVisible:(id)arg1 ;
-(void)eventListener:(id)arg1 ;
-(id)_gaxBackboard;
-(id)_handleRegisterZoomConflict:(id)arg1 ;
-(id)_handleZoomAdjustment:(id)arg1 ;
-(id)_handleConvertFrameFromContextId:(id)arg1 ;
-(id)_handleConvertFrameToContextId:(id)arg1 ;
-(id)_handleConvertFrameFromContextIdToContextId:(id)arg1 ;
-(id)_handleContextHostingIdForContextId:(id)arg1 ;
-(id)_handleContextIdForPosition:(id)arg1 ;
-(id)_handlePostEvent:(id)arg1 ;
-(id)_handleSetCapsLockLightOn:(id)arg1 ;
-(id)_handleEventListenerRegistration:(id)arg1 ;
-(id)_handleZoomAttributesListenerRegistration:(id)arg1 ;
-(id)_handleZoomAttributesChanged:(id)arg1 ;
-(id)_handleRegisterAssistiveTouchPID:(id)arg1 ;
-(id)_handleRegisterAccessibilityUIServerPID:(id)arg1 ;
-(id)_handleRegisterSiriViewServicePID:(id)arg1 ;
-(id)_handleAXUIServerPID:(id)arg1 ;
-(id)_handleAssistiveTouchPID:(id)arg1 ;
-(id)_handleLockScreenDimTimerEnabled:(id)arg1 ;
-(id)_handleGetGuidedAccessAvailability:(id)arg1 ;
-(id)_handleSetInPreBoardMode:(id)arg1 ;
-(id)_handleInPreBoardMode:(id)arg1 ;
-(id)_handleSetInCheckerBoardMode:(id)arg1 ;
-(id)_handleInCheckerBoardMode:(id)arg1 ;
-(id)_handleSessionIsLoginSession:(id)arg1 ;
-(id)_handleSetSessionIsLoginSession:(id)arg1 ;
-(id)_handleIsGuidedAccessActive:(id)arg1 ;
-(id)_handleIsGuidedAccessInWorkspace:(id)arg1 ;
-(id)_handleGuidedAccessEffectiveAppBundleIdentifier:(id)arg1 ;
-(id)_handleGuidedAccessIgnoredRegions:(id)arg1 ;
-(void)_handleGuidedAccessAutomationCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handleGuidedAccessCurrentModeAndSessionApp:(id)arg1 ;
-(id)_handleIsGuidedAccessSelfLockedToRequestingApp:(id)arg1 ;
-(void)_handleSetGuidedAccessEnabledByRequestingApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handleIsGuidedAccessUnmanagedSelfLocked:(id)arg1 ;
-(id)_handleInvertColorsChange:(id)arg1 ;
-(id)_setAXPreferenceAsMobile:(id)arg1 ;
-(id)_handleSetSwitchControlRendersDeviceUnusable:(id)arg1 ;
-(id)_handleSetSwitchControlHasScreenSwitch:(id)arg1 ;
-(id)_handleSetZoomInitialFocusRect:(id)arg1 ;
-(id)_handleGetZoomInitialFocusRect:(id)arg1 ;
-(id)_handleTripleClickHomeButtonFired:(id)arg1 ;
-(id)_handleHomeClickSwallowedForGuidedAccess:(id)arg1 ;
-(id)_handleIsHearingControlEnabled:(id)arg1 ;
-(id)_handleSupportsBlueLightReduction:(id)arg1 ;
-(id)_handleDisableBrightnessFilters:(id)arg1 ;
-(id)_handleBrightnessFiltersEnabled:(id)arg1 ;
-(id)_handleBlueLightStatusEnabled:(id)arg1 ;
-(id)_handleRestoreCachedBrightnessFilters:(id)arg1 ;
-(id)_handleAdaptationEnabled:(id)arg1 ;
-(id)_handleSupportsAdaptation:(id)arg1 ;
-(id)_handleResetAccessibilityFeatures:(id)arg1 ;
-(id)_handleToggleGuidedAccess:(id)arg1 ;
-(id<AXBackBoardServerInstanceDelegate>)delegate;
-(void)setDelegate:(id<AXBackBoardServerInstanceDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)_inPreBoardMode;
-(BOOL)_inCheckerBoardMode;
-(BOOL)_sessionIsLoginSession;
-(BOOL)supportsBlueLightReduction;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(void)forceLoadGAXBundle;
-(void)resetAccessibilityFeatures;
-(void)zoomAttributesChanged:(id)arg1 ;
-(BOOL)supportsAdaptation;
-(id)_initServer;
-(void)_initializeHandlers;
-(id)_handleLoadGAXBundleForUnmanagedASAM:(id)arg1 ;
-(id)_handleUserEventOccurred:(id)arg1 ;
@end

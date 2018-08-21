/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>
#import <UIKit/UIKBEmojiHitTestResponder.h>
#import <UIKit/UIKeyboardHandBiasTransitionCoordinatorDelegate.h>
#import <UIKit/UIKeyboardPinchGestureRecognizerDelegate.h>

@class UIKBTree, NSString, UIKBKeyplaneView, UIKBBackgroundView, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, NSMutableDictionary, NSMutableSet, UISwipeGestureRecognizer, UIKeyboardPinchGestureRecognizer, UIKeyboardSplitTransitionView, CADisplayLink, UIDelayedAction, UIKeyboardHandBiasTransitionCoordinator, UIView, NSTimer, _UIKeyboardTypingSpeedLogger, UIKBRenderConfig, NSMutableArray, NSNumber, NSDate, UIGestureKeyboardIntroduction, UIButton, NSLayoutConstraint, UISelectionFeedbackGenerator;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKeyboardHandBiasTransitionCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate> {

	UIKBTree* _keyboard;
	UIKBTree* _keyplane;
	NSString* _keyboardName;
	NSString* _keyplaneName;
	long long _appearance;
	UIKBTree* _activeKey;
	UIKBTree* _inactiveLanguageIndicator;
	UIKBKeyplaneView* _keyplaneView;
	UIKBBackgroundView* _backgroundView;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	double _prevTouchUpTime;
	double _prevTouchUpFinishedTime;
	double _prevTouchDownTime;
	unsigned long long _prevUpActions;
	NSMutableDictionary* _keyboards;
	NSMutableDictionary* _allKeyplaneViews;
	NSMutableSet* _allKeyplaneKeycaps;
	NSMutableSet* _validInputStrings;
	NSString* _localizedInputKey;
	CFDictionaryRef _extendedTouchInfoMap;
	int _preferredTrackingChangeCount;
	int _shiftTrackingChangeCount;
	NSMutableSet* _accentInfo;
	NSMutableSet* _hasAccents;
	id _spaceTarget;
	SEL _spaceAction;
	SEL _spaceLongAction;
	id _returnTarget;
	SEL _returnAction;
	SEL _returnLongAction;
	id _deleteTarget;
	SEL _deleteAction;
	SEL _deleteLongAction;
	BOOL _shift;
	BOOL _autoshift;
	BOOL _settingShift;
	BOOL _holdingShift;
	BOOL _didLongPress;
	NSString* _preTouchKeyplaneName;
	BOOL _revertKeyplaneAfterTouch;
	BOOL _wasShifted;
	BOOL _swipeDetected;
	BOOL _showIntlKey;
	BOOL _showDictationKey;
	BOOL _suppressDeactivateKeys;
	BOOL _suppressShiftKeyplaneAnimation;
	BOOL _isTrackpadMode;
	BOOL _shiftLockReady;
	double _shiftLockFirstTapTime;
	UISwipeGestureRecognizer* _rightSwipeRecognizer;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UISwipeGestureRecognizer* _upSwipeRecognizer;
	UIKeyboardPinchGestureRecognizer* _pinchGestureRecognizer;
	NSMutableDictionary* _activeKeyplaneTransitions;
	UIKeyboardSplitTransitionView* _transitionView;
	double _initialSplitProgress;
	double _finalSplitProgress;
	double _autoSplitLastUpdate;
	double _autoSplitElapsedTime;
	CADisplayLink* _displayLink;
	BOOL _ghostKeysEnabled;
	UIDelayedAction* _delayedCentroidUpdate;
	BOOL _isRebuilding;
	long long _currentHandBias;
	UIKeyboardHandBiasTransitionCoordinator* _handBiasTransitionCoordinator;
	NSString* _layoutTag;
	BOOL _preRotateShift;
	NSString* _preRotateKeyplaneName;
	BOOL _preRotateTrackpadMode;
	UIDelayedAction* _multitapAction;
	BOOL _unshiftAfterMultitap;
	int _multitapCount;
	UIKBTree* _multitapKey;
	UIView* _flickPopupView;
	NSMutableDictionary* _compositeImages;
	NSTimer* _flickPopuptimer;
	id _touchInfo;
	UIView* _dimKeyboardImageView;
	BOOL _keyboardImageViewIsDim;
	BOOL _isOutOfBounds;
	BOOL _inDealloc;
	NSMutableSet* _keysUnderIndicator;
	_UIKeyboardTypingSpeedLogger* _typingSpeedLogger;
	UIKBRenderConfig* _passcodeRenderConfig;
	long long _setKeyplaneViewCount;
	BOOL _inputTraitsPreventInitialReuse;
	BOOL _settingFloat;
	NSMutableSet* _leftKeySet;
	NSMutableSet* _rightKeySet;
	CGPoint _leftDriftOffset;
	CGPoint _rightDriftOffset;
	NSMutableArray* _leftSideReachability;
	NSMutableArray* _rightSideReachability;
	NSNumber* _homeRowHint;
	double _touchDownTimeSpan;
	NSDate* _prevTouchMoreKeyTime;
	NSString* _lastInputMode;
	BOOL _pendingDictationReload;
	BOOL _hasPeekedGestureKey;
	BOOL _lastInputIsGestureKey;
	UIGestureKeyboardIntroduction* _gestureKeyboardIntroduction;
	BOOL _dictationUsingServerManualEndpointing;
	UIButton* _biasEscapeButton;
	NSLayoutConstraint* _biasEscapeButtonLeftConstraint;
	NSLayoutConstraint* _biasEscapeButtonRightConstraint;
	BOOL _muteNextKeyClickSound;
	int playKeyClickSoundOn;
	UIKBRenderConfig* _renderConfig;
	UIView* _modalDisplayView;
	UISelectionFeedbackGenerator* _slideBehaviour;
	double _lastTwoFingerTapTimestamp;

}

@property (assign,nonatomic) int playKeyClickSoundOn; 
@property (assign,nonatomic) BOOL muteNextKeyClickSound;                                 //@synthesize muteNextKeyClickSound=_muteNextKeyClickSound - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * slideBehaviour;              //@synthesize slideBehaviour=_slideBehaviour - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyboard;                                      //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane;                                      //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,copy) NSString * keyboardName;                                      //@synthesize keyboardName=_keyboardName - In the implementation block
@property (nonatomic,copy) NSString * keyplaneName;                                      //@synthesize keyplaneName=_keyplaneName - In the implementation block
@property (nonatomic,readonly) NSString * localizedInputMode; 
@property (nonatomic,copy) NSString * localizedInputKey;                                 //@synthesize localizedInputKey=_localizedInputKey - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKey;                                       //@synthesize activeKey=_activeKey - In the implementation block
@property (assign,nonatomic) BOOL shift;                                                 //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) BOOL autoShift;                                             //@synthesize autoshift=_autoshift - In the implementation block
@property (assign,nonatomic) BOOL didLongPress;                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=isRotating,nonatomic,readonly) BOOL rotating; 
@property (nonatomic,readonly) BOOL showsInternationalKey;                               //@synthesize showIntlKey=_showIntlKey - In the implementation block
@property (nonatomic,readonly) BOOL showsDictationKey;                                   //@synthesize showDictationKey=_showDictationKey - In the implementation block
@property (nonatomic,copy) NSString * preTouchKeyplaneName;                              //@synthesize preTouchKeyplaneName=_preTouchKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                            //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) NSString * layoutTag;                                       //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,retain) UIView * modalDisplayView;                                  //@synthesize modalDisplayView=_modalDisplayView - In the implementation block
@property (assign,nonatomic) double lastTwoFingerTapTimestamp;                           //@synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(Class)_subclassForScreenTraits:(id)arg1 ;
+(void)accessibilitySensitivityChanged;
+(id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2 ;
+(id)keyboardWithName:(id)arg1 screenTraits:(id)arg2 ;
+(id)sharedRivenKeyplaneGenerator;
+(id)sharedPunctuationCharacterSet;
-(id)currentKeyplane;
-(id)currentKeyplaneView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)removeFromSuperview;
-(UIKBRenderConfig *)renderConfig;
-(id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 inputFlags:(int)arg3 ;
-(id)keyViewAnimator;
-(void)dismissGestureKeyboardIntroduction;
-(void)setShift:(BOOL)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)emojiKeyManager;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)deactivateActiveKey;
-(double)lastTouchUpTimestamp;
-(double)lastTouchDownTimestamp;
-(BOOL)isRotating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)setDidLongPress:(BOOL)arg1 ;
-(BOOL)didLongPress;
-(UIKBTree *)keyboard;
-(void)setSplitProgress:(double)arg1 ;
-(void)logHandwritingData;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(id)candidateList;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(void)clearTransientState;
-(BOOL)shouldMergeAssistantBarWithKeyboardLayout;
-(BOOL)isAlphabeticPlane;
-(BOOL)hasCandidateKeys;
-(BOOL)hasAccentKey;
-(BOOL)canMultitap;
-(BOOL)diacriticForwardCompose;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(BOOL)pinchDetected;
-(BOOL)pinchSplitGestureEnabled;
-(void)showSplitTransitionView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(BOOL)arg1 ;
-(BOOL)keyplaneContainsEmojiKey;
-(void)willRotate;
-(void)didRotate;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)updateUndoKeyState;
-(BOOL)performReturnAction;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(CGSize)stretchFactor;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)updateKeyCentroids;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(unsigned long long)textEditingKeyMask;
-(void)setTextEditingTraits:(id)arg1 ;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(BOOL)canProduceString:(id)arg1 ;
-(double)hitBuffer;
-(BOOL)shouldShowDictationKey;
-(void)longPressAction;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(BOOL)usesAutoShift;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(void)setSplit:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)finishSplitTransitionWithProgress:(double)arg1 ;
-(long long)currentHandBias;
-(double)biasedKeyboardWidthRatio;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(id)internationalKeyDisplayStringOnEmojiKeyboard;
-(NSString *)keyplaneName;
-(NSString *)keyboardName;
-(NSString *)localizedInputMode;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchCancelled:(id)arg1 forResting:(BOOL)arg2 executionContext:(id)arg3 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5 ;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1 ;
-(unsigned char)getHandRestRecognizerState;
-(void)resetHRRLayoutState;
-(void)setNeedsVirtualDriftUpdate;
-(BOOL)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)willBeginIndirectSelectionGesture;
-(void)didEndIndirectSelectionGesture;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)isEmojiKeyplane;
-(BOOL)supportsEmoji;
-(void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1 ;
-(void)setKeyboardBias:(long long)arg1 ;
-(void)installGestureRecognizers;
-(CGImageRef)renderedImageWithToken:(id)arg1 ;
-(BOOL)showsInternationalKey;
-(BOOL)showsDictationKey;
-(BOOL)isTrackpadMode;
-(void)prepareSliderBehaviorFeedback;
-(void)provideSliderBehaviorFeedback;
-(void)finishSliderBehaviorFeedback;
-(UIKBTree *)keyplane;
-(void)refreshForDictationAvailablityDidChange;
-(void)nextToUseInputModeDidChange:(id)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)cancelMultitapTimer;
-(void)accessibilitySensitivityChanged;
-(BOOL)shouldDeactivateWithoutWindow;
-(UIView *)modalDisplayView;
-(void)setModalDisplayView:(UIView *)arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(void)clearAllTouchInfo;
-(void)handleDismissFlickView:(id)arg1 ;
-(void)setActiveKey:(UIKBTree *)arg1 ;
-(void)setPreTouchKeyplaneName:(NSString *)arg1 ;
-(id)defaultNameForKeyplaneName:(id)arg1 ;
-(id)splitNameForKeyplaneName:(id)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2 ;
-(int)visualStyleForKeyboardIfSplit:(BOOL)arg1 ;
-(void)updateBackgroundIfNeeded;
-(void)setLocalizedInputKey:(NSString *)arg1 ;
-(void)setKeyplaneName:(NSString *)arg1 ;
-(void)refreshForRivenPreferences;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2 ;
-(int)displayTypeHintForShiftKey;
-(int)displayTypeHintForMoreKey;
-(void)updateInputModeLocalizedKeysForKeyplane:(id)arg1 ;
-(void)updateAutolocalizedKeysForKeyplane:(id)arg1 ;
-(BOOL)shouldMatchCaseForDomainKeys;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)updateLocalizedKeysForKeyplane:(id)arg1 updateAllKeyplanes:(BOOL)arg2 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg1 ;
-(id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(BOOL)arg2 ;
-(CGImageRef)cachedCompositeImageWithCacheKey:(id)arg1 ;
-(CGImageRef)renderedImageWithStateFallbacksForToken:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(void)willBeginIndirectSelectionGesture:(BOOL)arg1 ;
-(void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)arg1 ;
-(void)didEndIndirectSelectionGesture:(BOOL)arg1 ;
-(BOOL)handwritingPlane;
-(id)keyHitTestClosestToPoint:(CGPoint)arg1 ;
-(UIKBTree *)activeKey;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)setLastTwoFingerTapTimestamp:(double)arg1 ;
-(BOOL)stretchKeyboardToFitKeyplane:(id)arg1 ;
-(BOOL)stretchKeyboardToFit;
-(double)stretchFactorHeight;
-(BOOL)_allowPaddle;
-(BOOL)canReuseKeyplaneView;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(unsigned long long)keyplaneShiftState;
-(BOOL)shouldMergeKey:(id)arg1 ;
-(id)splitNameForKeyplane:(id)arg1 ;
-(void)_setBiasEscapeButtonVisible:(BOOL)arg1 ;
-(void)updateKeyboardForKeyplane:(id)arg1 ;
-(id)defaultKeyplaneForKeyplane:(id)arg1 ;
-(void)clearKeyAnnotationsIfNecessary;
-(void)annotateKeysWithDeveloperPunctuation;
-(void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg1 ;
-(void)mergeKeysIfNeeded;
-(int)stateForShiftKey:(id)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(int)stateForMultitapReverseKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(int)stateForDictationKey:(id)arg1 ;
-(int)stateForStylingKey:(id)arg1 ;
-(int)stateForManipulationKey:(id)arg1 ;
-(void)updateLayoutTags;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateGlobeKeyDisplayString;
-(void)setKeyboardDim:(BOOL)arg1 ;
-(void)rebuildSplitTransitionView;
-(BOOL)is10KeyRendering;
-(BOOL)useDismissForMessagesWriteboard;
-(BOOL)useUndoForMessagesWriteboard;
-(void)_setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)updateTransitionWithFlags:(unsigned long long)arg1 ;
-(BOOL)_stringContainsCurrencyCharacters:(id)arg1 ;
-(void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2 ;
-(id)keyWithRepresentedString:(id)arg1 ;
-(BOOL)supportStylingWithKey:(id)arg1 ;
-(id)highlightedVariantListForStylingKey:(id)arg1 ;
-(void)updateMoreAndInternationalKeys;
-(void)relayoutForWriteboardKey;
-(void)updateReturnKeysIfNeeded;
-(id)keylistContainingKey:(id)arg1 ;
-(BOOL)ignoreWriteboard;
-(id)inputModeToMergeCapsLockKey;
-(void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(long long)arg2 ;
-(void)setToInitialKeyplane;
-(BOOL)shouldUseDefaultShiftStateFromLayout;
-(id)initialKeyplaneNameWithKBStarName:(id)arg1 ;
-(UISelectionFeedbackGenerator *)slideBehaviour;
-(void)setSlideBehaviour:(UISelectionFeedbackGenerator *)arg1 ;
-(BOOL)shouldHitTestKey:(id)arg1 ;
-(id)keyViewHitTestForPoint:(CGPoint)arg1 ;
-(id)keyHitTestContainingPoint:(CGPoint)arg1 ;
-(id)keyHitTestWithoutCharging:(CGPoint)arg1 ;
-(id)keyHitTest:(CGPoint)arg1 ;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(int)keycodeForKey:(id)arg1 ;
-(BOOL)isLongPressedKey:(id)arg1 ;
-(id)currentRepresentedStringForDualDisplayKey:(id)arg1 ;
-(BOOL)isDeadkeyInput:(id)arg1 ;
-(void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2 ;
-(id)multitapCompleteKeys;
-(void)multitapInterrupted;
-(void)endMultitapForKey:(id)arg1 ;
-(void)multitapExpired;
-(void)handleMultitapTimerFired;
-(id)activeMultitapCompleteKey;
-(id)touchInfoForKey:(id)arg1 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)showMenu:(id)arg1 forKey:(id)arg2 ;
-(void)playKeyClickSoundForKey:(id)arg1 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3 ;
-(id)_keyplaneVariantsKeyForString:(id)arg1 ;
-(id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2 ;
-(BOOL)keyHasAccentedVariants:(id)arg1 ;
-(unsigned long long)upActionFlagsForKey:(id)arg1 ;
-(id)handRestRecognizerGetHomeRowHint;
-(id)getSortedKeysForDisplayRowHint:(int)arg1 ;
-(void)setMuteNextKeyClickSound:(BOOL)arg1 ;
-(void)_didTapBiasEscapeButton:(id)arg1 ;
-(void)flushKeyCache:(id)arg1 ;
-(void)prepareForSplitTransition;
-(void)setPlayKeyClickSoundOn:(int)arg1 ;
-(void)finishSplitTransitionWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitTransition;
-(id)infoForTouchUUID:(id)arg1 ;
-(void)clearInfoForTouch:(id)arg1 ;
-(void)_autoSplit:(id)arg1 ;
-(BOOL)_handleTouchForEmojiInputView;
-(CGRect)_paddedKeyUnionFrame;
-(double)lastTwoFingerTapTimestamp;
-(id)generateInfoForTouch:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3 ;
-(void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(CGPoint)arg2 ;
-(id)flickPopupStringForKey:(id)arg1 withString:(id)arg2 ;
-(void)handlePopupView:(id)arg1 ;
-(void)touchDownWithKey:(id)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(BOOL)muteNextKeyClickSound;
-(int)playKeyClickSoundOn;
-(BOOL)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideMenu:(id)arg1 forKey:(id)arg2 ;
-(void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(CGPoint)arg3 ;
-(BOOL)isMultitapKey:(id)arg1 ;
-(void)playKeyClickSoundOnDownForKey:(id)arg1 ;
-(BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1 ;
-(void)incrementPunctuationIfNeeded:(id)arg1 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(BOOL)shouldShowGestureKeyboardIntroduction;
-(NSString *)preTouchKeyplaneName;
-(id)keyplaneNameForRevertAfterTouch;
-(void)downActionShiftWithKey:(id)arg1 ;
-(void)refreshDualStringKeys;
-(BOOL)showGestureKeyboardIntroductionIfNeeded;
-(id)synthesizeTouchUpEventForKey:(id)arg1 ;
-(void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2 ;
-(id)infoForTouch:(id)arg1 ;
-(BOOL)touchPassesDragThreshold:(id)arg1 ;
-(void)updatePanAlternativesForTouchInfo:(id)arg1 ;
-(BOOL)handleFlick:(id)arg1 ;
-(void)setKeyboardDim:(BOOL)arg1 amount:(double)arg2 withDuration:(double)arg3 ;
-(BOOL)shouldRetestTouchDraggedFromKey:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2 ;
-(void)refreshGhostKeyState;
-(void)resetPanAlternativesForEndedTouch:(id)arg1 ;
-(BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(id)activeTouchInfoForShift;
-(void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4 ;
-(BOOL)shouldSendTouchUpToInputManager:(id)arg1 ;
-(void)presentModalDisplayForKey:(id)arg1 ;
-(void)touchMultitapTimer;
-(BOOL)shouldSendStringForFlick:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg1 direction:(int)arg2 ;
-(void)_recordKeystrokeStatisticForKeyPress;
-(void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(CGPoint)arg1 finalPoint:(CGPoint)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 ;
-(void)upActionShift;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3 ;
-(void)setMultitapReverseKeyState;
-(void)handleKeyboardMenusForTouch:(id)arg1 ;
-(void)clearInfoForTouch:(id)arg1 forResting:(BOOL)arg2 ;
-(void)updateShiftKeyState;
-(void)swipeDetected:(id)arg1 ;
-(void)pinchHandler:(id)arg1 ;
-(void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(BOOL)arg2 ;
-(void)divideKeysIntoLeft:(id)arg1 right:(id)arg2 ;
-(CGPoint)applyError:(CGPoint)arg1 toKey:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 forHandBiasCoordinator:(id)arg2 ;
-(id)prepareTransition:(id)arg1 forTargetHandBias:(long long)arg2 coordinator:(id)arg3 ;
-(void)finishHandBiasTransitionWithFinalBias:(long long)arg1 ;
-(long long)currentHandBiasWithCoordinator:(id)arg1 ;
-(id)hostViewForHandBiasTransition:(id)arg1 ;
-(BOOL)pinchCanBeginWithTouches:(id)arg1 ;
-(void)didDetectPinchWithSeparation:(double)arg1 ;
-(void)pinchDidConsumeTouch:(id)arg1 ;
-(CGImageRef)renderedKeyplaneWithToken:(id)arg1 split:(BOOL)arg2 ;
-(void)handleDelayedCentroidUpdate;
-(void)setKeyboardName:(NSString *)arg1 ;
-(BOOL)shift;
-(BOOL)autoShift;
-(void)setAutoShift:(BOOL)arg1 ;
-(NSString *)localizedInputKey;
-(CGRect)frameForKeyWithRepresentedString:(id)arg1 ;
-(CGRect)frameForLastKeyWithRepresentedString:(id)arg1 ;
-(id)popupKeyViews;
-(void)setKeyForTouchInfo:(id)arg1 key:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3 ;
-(void)populateFlickPopupsForKey:(id)arg1 ;
-(void)handlePopupView;
-(void)handleDismissFlickView;
@end

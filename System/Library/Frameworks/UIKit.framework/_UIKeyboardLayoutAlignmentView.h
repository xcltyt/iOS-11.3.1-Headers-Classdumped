/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {

	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_removeConstraints;
-(void)_createConstraints;
-(void)_matchInitialKeyboardFrame;
-(void)_keyboardChanged:(id)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
@end

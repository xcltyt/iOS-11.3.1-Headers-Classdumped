/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class _UIBackdropView, NSLock, NSHashTable, NSString;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {

	_UIBackdropView* _backdropView;
	NSLock* _observersLock;
	NSHashTable* _observers;
	BOOL _overridesContentOverlayInsets;

}

@property (assign,nonatomic) BOOL overridesContentOverlayInsets;              //@synthesize overridesContentOverlayInsets=_overridesContentOverlayInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_observers;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
-(void)setOverridesContentOverlayInsets:(BOOL)arg1 ;
-(BOOL)overridesContentOverlayInsets;
@end

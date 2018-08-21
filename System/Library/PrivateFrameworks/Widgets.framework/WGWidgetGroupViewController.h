/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetListViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetGroupViewControllerDelegate;
@class WGWidgetDiscoveryController, WGMajorListViewController, NSString, UIScrollView;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGWidgetExtensionVisibilityProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	WGMajorListViewController* _majorColumnListViewController;
	unsigned long long _lastWidgetCount;
	BOOL _shouldBlurContent;
	id<WGWidgetGroupViewControllerDelegate> _delegate;
	unsigned long long _location;
	UIEdgeInsets _contentOccludingInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WGWidgetGroupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) UIScrollView * majorScrollView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                               //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOccludingInset;                                   //@synthesize contentOccludingInset=_contentOccludingInset - In the implementation block
-(id<WGWidgetGroupViewControllerDelegate>)delegate;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)setDelegate:(id<WGWidgetGroupViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldBlurContent;
-(CGSize)widgetListViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(UIEdgeInsets)widgetListViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(id)initWithWidgetDiscoveryController:(id)arg1 ;
-(unsigned long long)widgetCount;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(void)editViewWillAppear:(id)arg1 ;
-(void)editViewDidAppear:(id)arg1 ;
-(void)editViewWillDisappear:(id)arg1 ;
-(void)editViewDidDisappear:(id)arg1 ;
-(id)_scrollViewForListViewController:(id)arg1 ;
-(void)_loadWidgetListViewController;
-(void)invalidateVisibleWidgets;
-(long long)_layoutModeForSize:(CGSize)arg1 ;
-(UIEdgeInsets)contentOccludingInset;
-(UIScrollView *)majorScrollView;
-(long long)_activeLayoutMode;
-(void)setContentOccludingInset:(UIEdgeInsets)arg1 ;
-(void)presentEditViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
@end

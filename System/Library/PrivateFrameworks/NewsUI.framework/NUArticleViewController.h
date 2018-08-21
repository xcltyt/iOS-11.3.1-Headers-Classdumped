/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SXScrollViewControllerDelegate.h>
#import <libobjc.A.dylib/SXAnalyticsReporting.h>
#import <libobjc.A.dylib/NUEndOfArticleDataProviderDelegate.h>
#import <libobjc.A.dylib/NUDynamicTypeObserving.h>
#import <libobjc.A.dylib/NULoadable.h>

@protocol NULoadingDelegate, SXAnalyticsReporting, NUArticleDataProvider, NUEndOfArticleDataProvider, NUDynamicTypeProviding, NUScrollViewKeyCommandHandler;
@class FCObservable, NUMultiDelegate, NSString, SXScrollViewController, NUArticleAdManager, NUEventManager;

@interface NUArticleViewController : UIViewController <SXScrollViewControllerDelegate, SXAnalyticsReporting, NUEndOfArticleDataProviderDelegate, NUDynamicTypeObserving, NULoadable> {

	BOOL _articleIsPresentingFullscreen;
	id<NULoadingDelegate> _loadingDelegate;
	id<SXAnalyticsReporting> _analyticsReporting;
	FCObservable* _articleViewStyler;
	NUMultiDelegate* _multiScrollViewDelegate;
	NSString* _anchorFragment;
	SXScrollViewController* _scrollViewController;
	id<NUArticleDataProvider> _articleDataProvider;
	id<NUEndOfArticleDataProvider> _endOfArticleDataProvider;
	NUArticleAdManager* _adManager;
	id<NUDynamicTypeProviding> _dynamicTypeProviding;
	NUEventManager* _eventManager;
	id<NUScrollViewKeyCommandHandler> _keyCommandHandler;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) SXScrollViewController * scrollViewController;                        //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,readonly) id<NUArticleDataProvider> articleDataProvider;                        //@synthesize articleDataProvider=_articleDataProvider - In the implementation block
@property (nonatomic,readonly) id<NUEndOfArticleDataProvider> endOfArticleDataProvider;              //@synthesize endOfArticleDataProvider=_endOfArticleDataProvider - In the implementation block
@property (nonatomic,readonly) NUArticleAdManager * adManager;                                       //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,readonly) id<NUDynamicTypeProviding> dynamicTypeProviding;                      //@synthesize dynamicTypeProviding=_dynamicTypeProviding - In the implementation block
@property (assign,nonatomic) BOOL articleIsPresentingFullscreen;                                     //@synthesize articleIsPresentingFullscreen=_articleIsPresentingFullscreen - In the implementation block
@property (nonatomic,readonly) NUEventManager * eventManager;                                        //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) id<NUScrollViewKeyCommandHandler> keyCommandHandler;                  //@synthesize keyCommandHandler=_keyCommandHandler - In the implementation block
@property (assign,nonatomic,__weak) id<SXAnalyticsReporting> analyticsReporting;                     //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (nonatomic,readonly) FCObservable * articleViewStyler;                                     //@synthesize articleViewStyler=_articleViewStyler - In the implementation block
@property (nonatomic,readonly) NUMultiDelegate * multiScrollViewDelegate;                            //@synthesize multiScrollViewDelegate=_multiScrollViewDelegate - In the implementation block
@property (nonatomic,copy) NSString * anchorFragment;                                                //@synthesize anchorFragment=_anchorFragment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                             //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;                           //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(SXScrollViewController *)scrollViewController;
-(id<SXAnalyticsReporting>)analyticsReporting;
-(void)reportEvent:(id)arg1 ;
-(void)scrollViewControllerRequestsFullscreen:(id)arg1 ;
-(void)scrollViewControllerDidLayoutContent:(id)arg1 ;
-(double)navigationBarHeightForScrollViewController:(id)arg1 ;
-(double)toolBarHeightForScrollViewController:(id)arg1 ;
-(void)scrollViewController:(id)arg1 enableNavigation:(BOOL)arg2 ;
-(void)scrollViewControllerDismissFullscreen:(id)arg1 ;
-(id<NUDynamicTypeProviding>)dynamicTypeProviding;
-(id<NUScrollViewKeyCommandHandler>)keyCommandHandler;
-(id)initWithArticleDataProvider:(id)arg1 endOfArticleDataProvider:(id)arg2 scrollViewController:(id)arg3 articleAdManager:(id)arg4 dynamicTypeProviding:(id)arg5 appStateMonitor:(id)arg6 keyCommandHandler:(id)arg7 ;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(void)endOfArticleDataProviderDidLoadContent:(id)arg1 ;
-(void)endOfArticleDataProviderDidChangeContent:(id)arg1 ;
-(id<NUEndOfArticleDataProvider>)endOfArticleDataProvider;
-(id)currentEndOfArticleSettings;
-(id<NUArticleDataProvider>)articleDataProvider;
-(NUArticleAdManager *)adManager;
-(FCObservable *)articleViewStyler;
-(void)updatePresentationAttributes;
-(void)restoreScrollPositionIfNeeded;
-(void)handleScrollKeyCommand:(id)arg1 ;
-(void)setArticleIsPresentingFullscreen:(BOOL)arg1 ;
-(BOOL)articleIsPresentingFullscreen;
-(NSString *)anchorFragment;
-(id)currentPresentationAttributes;
-(void)dynamicTypeDidChange:(id)arg1 ;
-(void)setAnchorFragment:(NSString *)arg1 ;
-(void)setAnalyticsReporting:(id<SXAnalyticsReporting>)arg1 ;
-(NUMultiDelegate *)multiScrollViewDelegate;
-(NUEventManager *)eventManager;
@end

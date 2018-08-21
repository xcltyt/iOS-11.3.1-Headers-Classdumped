/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NUViewControllerEndOfArticleProviding.h>

@protocol NUViewControllerEndOfArticleProvidingDelegate, OS_dispatch_group;
@class NUANFEndOfArticlePublisherDataProvider, NUFeedViewController, NUCanvas, NUViewNode, NSObject, NSString;

@interface NUANFEndOfArticlePublisherViewController : UIViewController <NUViewControllerEndOfArticleProviding> {

	BOOL isVisible;
	id<NUViewControllerEndOfArticleProvidingDelegate> delegate;
	NUANFEndOfArticlePublisherDataProvider* _dataProvider;
	NUFeedViewController* _feedViewController;
	NUCanvas* _canvas;
	NUViewNode* _hairlineViewNode;
	NUViewNode* _titleLabelNode;
	NUViewNode* _publisherNameButtonNode;
	NSObject*<OS_dispatch_group> _loadLayoutGroup;

}

@property (nonatomic,readonly) NUANFEndOfArticlePublisherDataProvider * dataProvider;                        //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) NUFeedViewController * feedViewController;                                    //@synthesize feedViewController=_feedViewController - In the implementation block
@property (nonatomic,readonly) NUCanvas * canvas;                                                            //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,readonly) NUViewNode * hairlineViewNode;                                                //@synthesize hairlineViewNode=_hairlineViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * titleLabelNode;                                                  //@synthesize titleLabelNode=_titleLabelNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * publisherNameButtonNode;                                         //@synthesize publisherNameButtonNode=_publisherNameButtonNode - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> loadLayoutGroup;                                 //@synthesize loadLayoutGroup=_loadLayoutGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NUViewControllerEndOfArticleProvidingDelegate> delegate; 
@property (assign,nonatomic) BOOL isVisible; 
-(id<NUViewControllerEndOfArticleProvidingDelegate>)delegate;
-(void)setDelegate:(id<NUViewControllerEndOfArticleProvidingDelegate>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(NUCanvas *)canvas;
-(BOOL)isVisible;
-(NUANFEndOfArticlePublisherDataProvider *)dataProvider;
-(id)sectionItemViewController;
-(id)initWithDataProvider:(id)arg1 ;
-(double)sectionItemHeightFor:(double)arg1 ;
-(NUFeedViewController *)feedViewController;
-(NSObject*<OS_dispatch_group>)loadLayoutGroup;
-(NUViewNode *)titleLabelNode;
-(NUViewNode *)hairlineViewNode;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)whenLoaded:(/*^block*/id)arg1 ;
-(void)doMoreFromPublisher:(id)arg1 ;
-(void)loadLayoutWithLoadGroup:(id)arg1 andArticle:(id)arg2 andSettings:(id)arg3 ;
-(id)buildCanvasForPublisherOperationResult:(id)arg1 andScale:(double)arg2 andSettings:(id)arg3 ;
-(NUViewNode *)publisherNameButtonNode;
@end

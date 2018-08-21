/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SearchUIResultViewDelegate;
@class SearchUIResultTableViewController, SearchUIReplicatorView, UIView, SearchUISearchField, NSString;

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate> {

	SearchUIResultTableViewController* _resultTableViewController;
	SearchUIReplicatorView* _replicatorView;
	id<SearchUIResultViewDelegate> _delegate;

}

@property (retain) SearchUIResultTableViewController * resultTableViewController;              //@synthesize resultTableViewController=_resultTableViewController - In the implementation block
@property (retain) SearchUIReplicatorView * replicatorView;                                    //@synthesize replicatorView=_replicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideResultsUnderKeyboard; 
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,retain) UIView * footerView; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (nonatomic,retain) SearchUISearchField * searchField; 
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SearchUIResultViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUIResultViewDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(SearchUISearchField *)searchField;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)didTap;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)updateWithResultSections:(id)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3 ;
-(void)setReplicatorView:(SearchUIReplicatorView *)arg1 ;
-(SearchUIReplicatorView *)replicatorView;
-(void)setResultTableViewController:(SearchUIResultTableViewController *)arg1 ;
-(SearchUIResultTableViewController *)resultTableViewController;
-(void)setSearchField:(SearchUISearchField *)arg1 ;
-(void)setShouldHideResultsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideResultsUnderKeyboard;
-(double)distanceToTopOfAppIcons;
@end

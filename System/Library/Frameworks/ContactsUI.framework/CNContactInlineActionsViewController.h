/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewController.h>

@protocol CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate, CNCustomPresentation, CNSchedulerProvider;
@class CNContact, NSArray, CNActionsView, NSDictionary, CNContactActionsController, CNUIUserActionListDataSource, NSString, UIView;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController> {

	BOOL _displaysUnavailableActionTypes;
	BOOL _displaysTitles;
	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
	CNContact* _contact;
	NSArray* _supportedActionTypes;
	double _actionTypesInterspace;
	long long _viewStyle;
	id<CNContactInlineActionsViewControllerDelegate> _delegate;
	NSArray* _actionItems;
	CNActionsView* _actionsView;
	NSArray* _tokens;
	NSDictionary* _defaultActionPerType;
	id<CNCustomPresentation> _actionsControllerPresentation;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactActionsController* _actionsController;
	CNUIUserActionListDataSource* _actionListDataSource;

}

@property (nonatomic,copy) NSArray * actionItems;                                                                   //@synthesize actionItems=_actionItems - In the implementation block
@property (assign,nonatomic,__weak) CNActionsView * actionsView;                                                    //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                                                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultActionPerType;                                                     //@synthesize defaultActionPerType=_defaultActionPerType - In the implementation block
@property (nonatomic,retain) id<CNCustomPresentation> actionsControllerPresentation;                                //@synthesize actionsControllerPresentation=_actionsControllerPresentation - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                                             //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) double throttleDelay; 
@property (nonatomic,retain) CNContactActionsController * actionsController;                                        //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionListDataSource;                                   //@synthesize actionListDataSource=_actionListDataSource - In the implementation block
@property (assign,nonatomic) BOOL displaysUnavailableActionTypes;                                                   //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (assign,nonatomic) BOOL displaysTitles;                                                                   //@synthesize displaysTitles=_displaysTitles - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                   //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * supportedActionTypes;                                                          //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (assign,nonatomic) double actionTypesInterspace;                                                          //@synthesize actionTypesInterspace=_actionTypesInterspace - In the implementation block
@property (assign,nonatomic) long long viewStyle;                                                                   //@synthesize viewStyle=_viewStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactInlineActionsViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(id)descriptorForRequiredKeys;
-(id<CNContactInlineActionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNContactInlineActionsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)tokens;
-(NSArray *)actionItems;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(NSArray *)supportedActionTypes;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(id)initWithActionListDataSource:(id)arg1 ;
-(void)setDisplaysTitles:(BOOL)arg1 ;
-(void)setDisplaysUnavailableActionTypes:(BOOL)arg1 ;
-(void)setSupportedActionTypes:(NSArray *)arg1 ;
-(void)setViewStyle:(long long)arg1 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(CNActionsView *)actionsView;
-(CNContactActionsController *)actionsController;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(void)updateDesiredTitleFontSizeIfNeeded;
-(void)displayAllSupportedTypesDisabled;
-(BOOL)displaysTitles;
-(BOOL)displaysUnavailableActionTypes;
-(CNUIUserActionListDataSource *)actionListDataSource;
-(void)processModels:(id)arg1 ;
-(void)discoverAvailableActionTypes;
-(double)actionTypesInterspace;
-(long long)viewStyle;
-(void)displayAdditionalActionItems:(id)arg1 ;
-(double)throttleDelay;
-(void)setTokens:(NSArray *)arg1 ;
-(id)allModelsObservable;
-(NSDictionary *)defaultActionPerType;
-(void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(BOOL)arg3 ;
-(void)removeActionForType:(id)arg1 ;
-(void)setDefaultActionPerType:(NSDictionary *)arg1 ;
-(id)existingActionItemForType:(id)arg1 ;
-(id)makeActionItemForType:(id)arg1 ;
-(void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2 ;
-(void)updateVisibleActionItems:(id)arg1 ;
-(void)setActionItems:(NSArray *)arg1 ;
-(void)removeVisibleActionItems:(id)arg1 ;
-(void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2 ;
-(id<CNCustomPresentation>)actionsControllerPresentation;
-(void)setActionsControllerPresentation:(id<CNCustomPresentation>)arg1 ;
-(void)setActionTypesInterspace:(double)arg1 ;
-(void)setActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)performAction:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
@end

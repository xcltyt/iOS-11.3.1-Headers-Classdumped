/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionListDataSource.h>

@protocol CNUIUserActionListDataSource <NSObject>
@property (assign,nonatomic) BOOL tracksChanges; 
@required
+(id)allSupportedActionTypesWithCapabilities:(id)arg1;
+(id)allSupportedActionTypes;
+(id)allActionTypes;
-(id)actionTypesForConsumer:(id)arg1;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(/*^block*/id)arg3;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
-(id)thirdPartyActionsForContactProperty:(id)arg1;
-(id)thirdPartyTargetsForActionTypes:(id)arg1;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
-(void)setTracksChanges:(BOOL)arg1;
-(BOOL)tracksChanges;

@end


@protocol CNSchedulerProvider;
@class CNContact, CNCache, CNUIUserActionDisambiguationModeler, NSString;

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {

	BOOL _tracksChanges;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContact* _contact;
	CNCache* _models;
	CNUIUserActionDisambiguationModeler* _modeler;

}

@property (nonatomic,copy) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNCache * models;                                           //@synthesize models=_models - In the implementation block
@property (nonatomic,retain) CNUIUserActionDisambiguationModeler * modeler;              //@synthesize modeler=_modeler - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic) BOOL tracksChanges;                                         //@synthesize tracksChanges=_tracksChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allSupportedActionTypesWithCapabilities:(id)arg1 ;
+(id)displayNameForDisambiguationForActionType:(id)arg1 ;
+(id)displayNameForButtonForActionType:(id)arg1 ;
+(id)allSupportedActionTypes;
+(id)allActionTypes;
+(id)descriptorForRequiredKeys;
-(void)dealloc;
-(id)initWithContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(CNUIUserActionDisambiguationModeler *)modeler;
-(BOOL)shouldUseLabelForButtonWithDefaultAction:(id)arg1 ;
-(id)modelsForActionType:(id)arg1 ;
-(id)makeModelObservableForActionType:(id)arg1 ;
-(id)actionTypesForConsumer:(id)arg1 ;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2 ;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2 ;
-(id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2 ;
-(void)setModeler:(CNUIUserActionDisambiguationModeler *)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithDiscoveringEnvironment:(id)arg1 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2 ;
-(id)thirdPartyActionsForContactProperty:(id)arg1 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3 ;
-(CNContact *)contact;
-(void)setTracksChanges:(BOOL)arg1 ;
-(BOOL)tracksChanges;
-(void)setContactStore:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setModels:(CNCache *)arg1 ;
-(CNCache *)models;
@end

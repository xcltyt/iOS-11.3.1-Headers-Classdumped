/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoListProvider.h>

@protocol BLTSectionInfoListProviderDelegate;
@class NSDate, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListProvider> {

	opaque_pthread_mutex_t _lock;
	NSDate* _lastKnownBridgeSettingsChangeDate;
	id<BLTSectionInfoListProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadUpdatedOverrides;
-(void)_reloadUpdatedOverridesWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadOverridesChangedSince:(id)arg1 ;
-(void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
@end

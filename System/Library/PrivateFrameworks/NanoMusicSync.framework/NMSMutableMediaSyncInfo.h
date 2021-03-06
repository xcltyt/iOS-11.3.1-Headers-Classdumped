/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NMSMediaSyncInfo.h>

@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {

	BOOL _needsUpdateAggregateContainerInfo;

}

@property (nonatomic,retain) NSMutableDictionary * info; 
-(void)synchronize;
-(id)initWithTarget:(unsigned long long)arg1 ;
-(id)_info;
-(unsigned long long)statusForContainer:(id)arg1 ;
-(float)progressForContainer:(id)arg1 ;
-(unsigned long long)playabilityForContainer:(id)arg1 ;
-(void)_updateAggregateContainerInfoIfNeeded;
-(id)_infoForContainer:(id)arg1 ;
-(id)_infoForItem:(id)arg1 ;
-(void)_writeInfo;
-(void)_notifyInfoChanged;
-(unsigned long long)_persistingOptions;
-(void)setItems:(id)arg1 forContainer:(id)arg2 ;
-(void)setStatus:(unsigned long long)arg1 forItem:(id)arg2 ;
-(void)setProgressBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 forItem:(id)arg3 ;
-(void)setUserInfo:(id)arg1 forContainer:(id)arg2 ;
-(void)setUserInfo:(id)arg1 forItem:(id)arg2 ;
@end


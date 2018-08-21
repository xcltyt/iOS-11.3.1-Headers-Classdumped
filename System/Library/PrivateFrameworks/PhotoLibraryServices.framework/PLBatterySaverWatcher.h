/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface PLBatterySaverWatcher : NSObject {

	int _notifyBatterySaverModeToken;
	NSHashTable* _delegates;

}

@property (nonatomic,readonly) BOOL batterySaverModeEnabled; 
+(id)sharedBatterySaverWatcher;
-(void)dealloc;
-(unsigned)registerToBatterySaverModeNotification;
-(void)unregisterToBatterySaverModeNotification;
-(BOOL)batterySaverModeEnabled;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDZoneGatekeeperWaiter, OS_os_activity;
@class NSArray, NSObject;

@interface CKWaiterWrapper : NSObject {

	id<CKDZoneGatekeeperWaiter> _waiter;
	NSArray* _zoneIDs;
	/*^block*/id _completionHandler;
	NSObject*<OS_os_activity> _activity;

}

@property (nonatomic,retain) id<CKDZoneGatekeeperWaiter> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;                               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSObject*<OS_os_activity>)activity;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)CKPropertiesDescription;
-(id<CKDZoneGatekeeperWaiter>)waiter;
-(void)setWaiter:(id<CKDZoneGatekeeperWaiter>)arg1 ;
@end

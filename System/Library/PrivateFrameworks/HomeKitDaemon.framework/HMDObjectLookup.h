/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface HMDObjectLookup : HMFObject <HMFLogging> {

	NSMapTable* _uuidToObjectMapping;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMapTable * uuidToObjectMapping;                    //@synthesize uuidToObjectMapping=_uuidToObjectMapping - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithWorkQueue:(id)arg1 ;
-(NSMapTable *)uuidToObjectMapping;
-(id)_lookupObjectWithUUID:(id)arg1 applyObjectChange:(id)arg2 previous:(id)arg3 result:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)applyChange:(id)arg1 previous:(id)arg2 onObject:(id)arg3 result:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_scanThroughObjects;
-(void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

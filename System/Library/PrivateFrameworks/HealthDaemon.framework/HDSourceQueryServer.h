/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {

	BOOL _deliversUpdates;
	NSMutableSet* _sources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 ;
-(void)_queue_start;
-(id)requiredEntitlements;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)sourceClientProxy;
-(void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_sourceAdded:(id)arg1 ;
-(BOOL)_shouldListenForUpdates;
@end

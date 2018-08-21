/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableArray, NSString;

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _forceReconcileQueue;
	NSXPCListener* _listener;
	NSMutableArray* _reconcileArray;

}

@property (retain) NSXPCListener * listener;                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * reconcileArray;              //@synthesize reconcileArray=_reconcileArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(unsigned long long)delayForNewForceReconcileRequest;
-(NSMutableArray *)reconcileArray;
-(void)setReconcileArray:(NSMutableArray *)arg1 ;
@end

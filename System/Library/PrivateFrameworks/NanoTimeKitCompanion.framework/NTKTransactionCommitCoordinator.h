/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject {

	NSMutableArray* _commitHandlers;

}
+(id)_sharedInstance;
+(BOOL)addImplicitTransactionCommitHandler:(/*^block*/id)arg1 ;
+(void)flushCommitHandlers;
-(id)init;
-(BOOL)_addImplicitTransactionCommitHandler:(/*^block*/id)arg1 ;
-(void)_registerCATransactionCommitHandler;
@end

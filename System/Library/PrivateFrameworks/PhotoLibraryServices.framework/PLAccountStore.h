/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccountStore.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount;

@interface PLAccountStore : ACAccountStore {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccount* _cachedPrimaryAppleAccount;

}

@property (readonly) ACAccount * cachedPrimaryAppleAccount; 
+(id)pl_sharedAccountStore;
-(id)init;
-(void)dealloc;
-(void)clearCachedProperties;
-(void)accountDidChange:(id)arg1 ;
-(ACAccount *)cachedPrimaryAppleAccount;
@end

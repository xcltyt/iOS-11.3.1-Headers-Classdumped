/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSAssertion.h>

@class NSString, BKSTerminationContext;

@interface BKSTerminationAssertion : BKSAssertion {

	NSString* _bundleIdentifier;
	unsigned long long _efficacy;
	BKSTerminationContext* _context;

}

@property (nonatomic,readonly) unsigned long long efficacy; 
@property (nonatomic,copy,readonly) NSString * targetBundleIdentifier; 
@property (nonatomic,copy,readonly) BKSTerminationContext * context; 
-(id)_clientQueue_destroyEvent;
-(id)_clientQueue_createEvent;
-(id)_clientQueue_updateEvent;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSString *)targetBundleIdentifier;
-(unsigned long long)efficacy;
-(void)dealloc;
-(BKSTerminationContext *)context;
@end

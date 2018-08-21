/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider;
@class CNFuture, NSDictionary;

@interface ABSAddressBookSettings : NSObject {

	int _policy;
	CNFuture* _contactStoreFuture;
	NSDictionary* _options;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNFuture * contactStoreFuture;                          //@synthesize contactStoreFuture=_contactStoreFuture - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int policy;                                             //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
-(id)init;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithOptions:(id)arg1 policy:(int)arg2 ;
-(id)initWithOptions:(id)arg1 policy:(int)arg2 contactStoreFuture:(id)arg3 schedulerProvider:(id)arg4 ;
-(CNFuture *)contactStoreFuture;
-(id)initWithContactStoreFuture:(id)arg1 ;
-(id)newFaultHandlerWithStorage:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(int)policy;
@end

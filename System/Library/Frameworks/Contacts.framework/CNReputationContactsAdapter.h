/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider, CNScheduler;
@class CNContactStore;

@interface CNReputationContactsAdapter : NSObject {

	CNContactStore* _contactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _storeScheduler;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> storeScheduler;                         //@synthesize storeScheduler=_storeScheduler - In the implementation block
-(id)init;
-(id)contactsForEmailAddress:(id)arg1 ;
-(id)contactsForPhoneNumber:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactsForPredicate:(id)arg1 keys:(id)arg2 ;
-(id<CNScheduler>)storeScheduler;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
@end

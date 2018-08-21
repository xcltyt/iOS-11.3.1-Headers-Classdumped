/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	NSMutableDictionary* _addressBookCache;

}

@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)registerForContactsNotifications;
-(void)revertAddressBook:(id)arg1 ;
-(NSMutableDictionary *)addressBookCache;
-(void)cleanUpAddressBookCache_sync;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
@end

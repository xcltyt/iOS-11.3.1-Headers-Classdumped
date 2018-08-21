/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSString, CKNotificationInfo;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation {

	NSString* _subscriptionID;
	CKNotificationInfo* _notificationInfo;
	/*^block*/id _saveDatabaseSubscriptionCompletionBlock;

}

@property (nonatomic,copy) NSString * subscriptionID;                               //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;                   //@synthesize notificationInfo=_notificationInfo - In the implementation block
@property (nonatomic,copy) id saveDatabaseSubscriptionCompletionBlock;              //@synthesize saveDatabaseSubscriptionCompletionBlock=_saveDatabaseSubscriptionCompletionBlock - In the implementation block
-(CKNotificationInfo *)notificationInfo;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(BOOL)validateOperation;
-(id)saveDatabaseSubscriptionCompletionBlock;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(void)setSaveDatabaseSubscriptionCompletionBlock:(id)arg1 ;
-(NSString *)subscriptionID;
@end

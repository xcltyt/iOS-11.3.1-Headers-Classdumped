/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INSearchForMessagesIntentHandling <NSObject>
@optional
-(void)confirmSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSServiceDelegatePrivate <IDSServiceDelegate>
@optional
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)service:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
-(void)service:(id)arg1 token:(id)arg2 time:(double)arg3 error:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7 messageContext:(id)arg8;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 alternateCallbackID:(id)arg4 willSendToDestinations:(id)arg5 skippedDestinations:(id)arg6 registrationPropertyToDestinations:(id)arg7;

@end

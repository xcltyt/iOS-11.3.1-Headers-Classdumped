/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>
@optional
-(void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
-(void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
-(void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;
-(void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;

@end

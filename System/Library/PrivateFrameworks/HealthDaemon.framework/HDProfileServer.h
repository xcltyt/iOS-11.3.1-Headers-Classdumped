/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDProfileServerInterface.h>

@class NSString;

@interface HDProfileServer : HDSubserver <HDProfileServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_getAllProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setDisplayName:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

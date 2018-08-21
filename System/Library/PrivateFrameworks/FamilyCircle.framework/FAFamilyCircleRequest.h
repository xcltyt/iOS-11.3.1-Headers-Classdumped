/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FAFamilyCircleRequestConnectionProvider;
@class NSString;

@interface FAFamilyCircleRequest : NSObject {

	NSString* _usernameOrDSID;
	NSString* _passwordOrToken;
	id<FAFamilyCircleRequestConnectionProvider> _connectionProvider;

}

@property (nonatomic,retain) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (copy) NSString * usernameOrDSID;                                                               //@synthesize usernameOrDSID=_usernameOrDSID - In the implementation block
@property (copy) NSString * passwordOrToken;                                                              //@synthesize passwordOrToken=_passwordOrToken - In the implementation block
-(id)requestOptions;
-(id)init;
-(id)serviceConnection;
-(id)serviceRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 ;
-(NSString *)usernameOrDSID;
-(NSString *)passwordOrToken;
-(void)setUsernameOrDSID:(NSString *)arg1 ;
-(void)setPasswordOrToken:(NSString *)arg1 ;
-(void)setConnectionProvider:(id<FAFamilyCircleRequestConnectionProvider>)arg1 ;
-(id<FAFamilyCircleRequestConnectionProvider>)connectionProvider;
@end

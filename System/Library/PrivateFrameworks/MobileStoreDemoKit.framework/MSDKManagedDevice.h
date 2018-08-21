/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface MSDKManagedDevice : NSObject {

	NSObject*<OS_xpc_object> _connection;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(BOOL)prepare;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)setupConnection;
-(BOOL)isEnrolled;
-(BOOL)isdeviceClassSupported;
-(BOOL)isContentFrozen;
-(BOOL)unenroll:(BOOL)arg1 ;
-(id)getDeviceOptions;
-(id)getStoreID;
-(BOOL)setStoreOpenAt:(long long)arg1 openMinute:(long long)arg2 closeHour:(long long)arg3 closeMinute:(long long)arg4 ;
-(BOOL)setIdleDelay:(long long)arg1 ;
-(id)saveStoreHour:(id)arg1 ;
-(id)saveScreenSaverIdleDelay:(id)arg1 ;
-(id)getScreenSaverConfig;
-(BOOL)saveScreenSaverConfig:(id)arg1 ;
@end

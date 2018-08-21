/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersonNameComponents, NSURL;

@interface CKDBackingAccount : NSObject {

	BOOL _canAuthWithCloudKit;

}

@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) NSPersonNameComponents * fullName; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit;                               //@synthesize canAuthWithCloudKit=_canAuthWithCloudKit - In the implementation block
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
@property (nonatomic,readonly) NSURL * privateMetricsServiceURL; 
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
+(Class)_platformBackingAccountClass;
+(id)accountQueue;
+(BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
+(void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)init;
-(id)_init;
-(NSString *)identifier;
-(NSString *)username;
-(NSString *)dsid;
-(NSPersonNameComponents *)fullName;
-(BOOL)canAuthWithCloudKit;
-(NSString *)serverPreferredPushEnvironment;
-(NSString *)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)privateCloudDBURL;
-(NSURL *)privateShareServiceURL;
-(NSURL *)privateDeviceServiceURL;
-(NSURL *)privateCodeServiceURL;
-(NSURL *)privateMetricsServiceURL;
-(BOOL)canRenew;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)ckAccount;
-(id)parentAppleAccount;
-(id)urlForDataclass:(id)arg1 ;
@end

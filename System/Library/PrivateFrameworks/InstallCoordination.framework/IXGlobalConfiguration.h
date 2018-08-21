/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface IXGlobalConfiguration : NSObject {

	unsigned _uid;
	unsigned _gid;
	NSURL* _mobileHome;
	NSURL* _rootPath;
	NSURL* _systemContainerPath;

}

@property (nonatomic,readonly) unsigned uid;                                     //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) unsigned gid;                                     //@synthesize gid=_gid - In the implementation block
@property (nonatomic,readonly) NSURL * mobileHome;                               //@synthesize mobileHome=_mobileHome - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                                 //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSURL * systemContainerPath;                      //@synthesize systemContainerPath=_systemContainerPath - In the implementation block
@property (nonatomic,readonly) NSURL * oldSupportDirectory; 
@property (nonatomic,readonly) NSURL * dataDirectory; 
@property (nonatomic,readonly) NSURL * promiseStagingRootDirectory; 
@property (nonatomic,readonly) NSURL * frameworkURL; 
@property (nonatomic,readonly) NSURL * userVolumeURL; 
+(id)sharedInstance;
-(NSURL *)dataDirectory;
-(id)init;
-(unsigned)uid;
-(NSURL *)oldSupportDirectory;
-(NSURL *)promiseStagingRootDirectory;
-(NSURL *)systemContainerPath;
-(NSURL *)mobileHome;
-(void)createDirectories;
-(NSURL *)frameworkURL;
-(NSURL *)userVolumeURL;
-(NSURL *)rootPath;
-(unsigned)gid;
@end

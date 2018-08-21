/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBApp : MBContainer

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * bundleDir; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * plugins; 
@property (nonatomic,readonly) NSArray * containers; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isAppUpdating; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
+(BOOL)unzipPlaceholderDomainZipFile:(id)arg1 atDirectory:(id)arg2 ;
-(NSString *)bundleVersion;
-(id)domain;
-(BOOL)isPlaceholder;
-(NSArray *)groups;
-(NSString *)bundleID;
-(BOOL)isSystemApp;
-(NSArray *)containers;
-(NSString *)bundleDir;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(BOOL)isAppUpdating;
-(BOOL)_writeDeviceAppropriateIconToPath:(id)arg1 fromBundlePath:(id)arg2 ;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(void)setBundleDir:(NSString *)arg1 ;
-(NSString *)entitlementsRelativePath;
-(id)placeholderDomainZipWithCache:(id)arg1 ;
-(NSArray *)plugins;
-(NSDictionary *)entitlements;
@end

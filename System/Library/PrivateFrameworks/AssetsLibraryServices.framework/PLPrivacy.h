/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _authStatusFullAccess;
	int _authStatusSaveOnly;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(/*^block*/id)arg2 ;
-(int)_authStatusForScope:(long long)arg1 ;
-(CFStringRef)_TCCForScope:(long long)arg1 ;
-(void)_setAuthStatus:(int)arg1 scope:(long long)arg2 ;
-(void)_setPreflightStatusForScope:(long long)arg1 ;
-(BOOL)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(/*^block*/id)arg3 ;
-(void)photoAccessPowersActive;
-(BOOL)isPhotoLibraryReadAccessAllowed;
-(BOOL)isPhotosTCCAccessAllowed;
-(void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(int)photosTCCAccessStatus;
-(BOOL)isPhotosTCCAccessRestricted;
-(BOOL)isPhotosTCCAccessNotAllowed;
-(BOOL)isPhotoLibrarySharingOrModificationAllowed;
@end

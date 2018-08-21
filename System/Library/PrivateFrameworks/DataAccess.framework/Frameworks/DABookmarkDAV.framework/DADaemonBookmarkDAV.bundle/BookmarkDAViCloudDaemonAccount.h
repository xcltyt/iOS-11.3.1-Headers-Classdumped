/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonBookmarkDAV/BookmarkDAVDaemonAccount.h>

@class NSString;

@interface BookmarkDAViCloudDaemonAccount : BookmarkDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	long long _port;

}
-(void)setHost:(id)arg1 ;
-(id)host;
-(long long)port;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(id)getAppleIDSession;
-(BOOL)shouldCompressRequests;
-(BOOL)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
@end

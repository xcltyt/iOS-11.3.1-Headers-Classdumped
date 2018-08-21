/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDAccessoryBrowserInjectedSettings.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {

	NSObject*<OS_dispatch_queue> queue;

}
-(id)workQueue;
-(id)init;
-(id)createIpAccessoryBrowser;
-(id)createBtleAccessoryBrowser;
-(id)createRelayAccessoryBrowser;
-(id)createAuthServerWithDelegate:(id)arg1 ;
@end

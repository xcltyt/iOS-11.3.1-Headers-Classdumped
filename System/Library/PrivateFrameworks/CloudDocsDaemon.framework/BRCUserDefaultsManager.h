/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue, NSObject;
@class NSURL, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSObject, NSString;

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {

	NSURL* _serverConfigurationURL;
	NSDictionary* _serverConfigurationDict;
	NSMutableDictionary* _userDefaultsCache;
	/*^block*/id _configurationPlistDidUpdateBlock;
	NSOperationQueue* _downloadQueue;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<NSObject> _defaultsDidChangeNotificationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_reset;
-(void)reset;
-(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_prepopulateGlobalUserDefaults;
-(void)_loadServerConfigurationDictionary;
-(void)_setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_parsePlistWithURL:(id)arg1 ;
-(id)defaultsForIdentifier:(id)arg1 ;
-(void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1 ;
-(void)_saveServerConfigurationDictionaryToDB:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

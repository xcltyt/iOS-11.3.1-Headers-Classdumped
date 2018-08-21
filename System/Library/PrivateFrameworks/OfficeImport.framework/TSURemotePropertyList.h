/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSObject, NSDictionary;

@interface TSURemotePropertyList : NSObject {

	NSURL* _remoteURL;
	NSURL* _localURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _propertyList;
	NSObject*<OS_dispatch_queue> _checkQueue;
	NSObject*<OS_dispatch_source> _updateTimer;
	BOOL _didUpdateAtLeastOnce;

}
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(double)timeIntervalUntilNextUpdate;
-(void)checkForUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)URLRequest;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)validateUserDefaultsDownloadURL:(id)arg1 ;
-(id)deserializePropertyListData:(id)arg1 error:(out id*)arg2 ;
-(void)processPropertyList:(id)arg1 ;
-(id)initWithRemoteURL:(id)arg1 localURL:(id)arg2 ;
-(void)updateIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
@end

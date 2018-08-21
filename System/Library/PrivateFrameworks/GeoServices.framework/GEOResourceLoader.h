/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class NSProgress, NSString, NSMutableArray, NSArray, GEOApplicationAuditToken, NSMapTable, GEOPowerAssertion, NSObject, GEOReportedProgress;

@interface GEOResourceLoader : NSObject <NSProgressReporting> {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	long long _numberOfDownloadsInProgress;
	long long _numberOfCopiesInProgress;
	BOOL _canceled;
	BOOL _requiresWiFi;
	NSString* _baseURLString;
	unsigned long long _maxConcurrentLoads;
	NSArray* _resourceInfos;
	NSMutableArray* _loadedResources;
	GEOApplicationAuditToken* _auditToken;
	BOOL _allowResumingPartialDownloads;
	NSMapTable* _inProgressResourceDownloads;
	GEOPowerAssertion* _powerAssertion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;

}

@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requiresWiFi;                                  //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
+(Class)resourceLoadOperationClass;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(BOOL)requiresWiFi;
-(BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(void)_loadResourcesFromDisk;
-(void)_loadNextResourceFromNetwork;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(BOOL)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(BOOL)arg3 error:(id*)arg4 ;
-(void)cancel;
-(void)_cleanup;
-(NSProgress *)progress;
-(GEOApplicationAuditToken *)auditToken;
@end

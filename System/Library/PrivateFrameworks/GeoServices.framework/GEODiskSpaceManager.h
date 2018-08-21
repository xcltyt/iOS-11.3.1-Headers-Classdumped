/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODiskSpaceProvider.h>

@class NSString, NSMutableArray;

@interface GEODiskSpaceManager : NSObject <GEODiskSpaceProvider> {

	NSString* _cacheDeleteID;
	NSMutableArray* _diskSpaceProviders;
	BOOL _freePurgableInProgress;
	double _lastSignificantUpdate;
	double _cachedPurgableTime[4];
	unsigned long long _cachedPurgableSpace[4];

}

@property (copy,readonly) NSString * cacheDeleteID;                 //@synthesize cacheDeleteID=_cacheDeleteID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2 ;
-(unsigned long long)purgableDiskSpaceForUrgency:(int)arg1 ;
-(id)initWithCacheDeleteID:(id)arg1 ;
-(id)_validVolume:(id)arg1 ;
-(void)_registerCacheDeleteCallbacks;
-(void)addDiskSpaceProvider:(id)arg1 ;
-(void)reportSignificantPurgableDiskSpaceUpdate;
-(NSString *)cacheDeleteID;
-(BOOL)shouldIncreaseCacheSizeBy:(unsigned long long)arg1 urgency:(int)arg2 ;
@end

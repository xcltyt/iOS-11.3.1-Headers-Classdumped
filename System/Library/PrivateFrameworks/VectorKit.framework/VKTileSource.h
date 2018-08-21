/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKTileSourceClient;
#import <VectorKit/VectorKit-Structs.h>
@class VKTilePool, VKTileKeyMap, VKTileKeyList, VKSharedResources, NSError, GEOResourceManifestConfiguration, NSLocale, NSString;

@interface VKTileSource : NSObject {

	id<VKTileSourceClient> _client;
	VKTilePool* _tilePool;
	VKTileKeyMap* _pendingLoads;
	VKTileKeyList* _decoding;
	VKTileKeyList* _failedTiles;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _styleManager;
	double _contentScale;
	VKSharedResources* _sharedResources;
	int loadingTiles;
	NSError* _recentError;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	NSString* _tileLoaderClientIdentifier;
	BOOL _preloadOnly;
	BOOL _requireWiFi;
	BOOL _originOverridden;
	unsigned char _originRequested;
	long long _mapType;
	unsigned char _targetDisplay;
	shared_ptr<md::TaskContext>* _taskContext;

}

@property (assign,nonatomic) id<VKTileSourceClient> client;                                                   //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager;              //@synthesize styleManager=_styleManager - In the implementation block
@property (nonatomic,retain) VKSharedResources * sharedResources;                                             //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) double contentScale;                                                             //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) BOOL preloadOnly;                                                                //@synthesize preloadOnly=_preloadOnly - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                                                //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,readonly) unsigned char originRequested;                                                 //@synthesize originRequested=_originRequested - In the implementation block
@property (nonatomic,readonly) BOOL originOverridden;                                                         //@synthesize originOverridden=_originOverridden - In the implementation block
@property (assign,nonatomic) long long mapType;                                                               //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) unsigned char targetDisplay;                                                     //@synthesize targetDisplay=_targetDisplay - In the implementation block
@property (nonatomic,readonly) long long tileSize; 
@property (nonatomic,readonly) long long minimumZoomLevel; 
@property (nonatomic,readonly) long long maximumZoomLevel; 
@property (nonatomic,readonly) long long maximumZoomLevelWithoutOverride; 
@property (nonatomic,readonly) BOOL minimumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) BOOL maximumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) Device* device; 
@property (nonatomic,readonly) long long zEquivalenceClass; 
@property (nonatomic,readonly) unsigned minimumDownloadZoomLevel; 
@property (nonatomic,readonly) unsigned maximumDownloadZoomLevel; 
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(void)setMapType:(long long)arg1 ;
-(long long)mapType;
-(BOOL)requireWiFi;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)dealloc;
-(long long)tileSize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(id)initWithTaskContext:(shared_ptr<md::TaskContext>*)arg1 ;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(VKSharedResources *)sharedResources;
-(long long)minimumZoomLevel;
-(long long)maximumZoomLevel;
-(void)setSharedResources:(VKSharedResources *)arg1 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(id)_extraInfoForPendingSourceKey:(const VKTileKey*)arg1 ;
-(BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(void)performDownload:(const GEOTileKey*)arg1 isPrefetch:(BOOL)arg2 ;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(VKTileKey)sourceKeyForDownloadKey:(const GEOTileKey*)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(unsigned)minimumDownloadZoomLevel;
-(unsigned)maximumDownloadZoomLevel;
-(long long)zEquivalenceClass;
-(id)tileLoader;
-(id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 sharedResources:(id)arg3 taskContext:(shared_ptr<md::TaskContext>*)arg4 ;
-(void)foreachTileInPool:(/*^block*/id)arg1 ;
-(long long)maximumZoomLevelWithoutOverride;
-(VKTileKey)nativeKeyForRenderKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(GEOTileKey)downloadKeyForSourceKey:(const VKTileKey*)arg1 ;
-(void)_fetchedTile:(id)arg1 ;
-(id)tileForSourceKey:(const VKTileKey*)arg1 renderKey:(const VKTileKey*)arg2 ;
-(void)fetchTileForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 isPrefetch:(BOOL)arg3 ;
-(void)fetchTileForKey:(const VKTileKey*)arg1 isPrefetch:(BOOL)arg2 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 ;
-(BOOL)_shouldDecodeTile:(const VKTileKey*)arg1 ;
-(void)failedToDecodeSourceKey:(const VKTileKey*)arg1 ;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(void)didLoadTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(void)decodeData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 origin:(unsigned char)arg4 ;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(void)tileAvailabilityChanged:(id)arg1 ;
-(void)_failedToLoadSourceKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 error:(id)arg3 ;
-(void)didFetchData:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(void)willGoToNetwork;
-(void)didFinishWithNetwork;
-(void)didFailToLoadTileKey:(const GEOTileKey*)arg1 error:(id)arg2 ;
-(void)forceDownload;
-(void)requestOrigin:(unsigned char)arg1 ;
-(BOOL)preloadOnly;
-(void)setPreloadOnly:(BOOL)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(unsigned char)originRequested;
-(BOOL)originOverridden;
-(unsigned char)targetDisplay;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(void)cancelAllDownloads;
-(id<VKTileSourceClient>)client;
-(void)setClient:(id<VKTileSourceClient>)arg1 ;
-(Device*)device;
-(void)clearCaches;
-(void)cancelDownload:(const GEOTileKey*)arg1 ;
@end

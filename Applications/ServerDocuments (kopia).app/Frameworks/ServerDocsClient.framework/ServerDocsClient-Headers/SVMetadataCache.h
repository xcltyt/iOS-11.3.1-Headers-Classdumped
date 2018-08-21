//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DCDocumentManagerDelegate.h"

@class DCDocumentManager, DCService, NSArray, NSDate, NSMutableArray, NSOperationQueue, SVMetadataItem;

@interface SVMetadataCache : NSObject <DCDocumentManagerDelegate>
{
    _Bool _enableWriteOnlyFolders;
    _Bool _firstUpdate;
    NSArray *_validTypes;
    long long _sortOrder;
    SVMetadataItem *_directoryItem;
    DCService *_server;
    NSDate *_lastSnapshotDate;
    NSMutableArray *_metadataItems;
    NSOperationQueue *_thumbnailOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *thumbnailOperationQueue; // @synthesize thumbnailOperationQueue=_thumbnailOperationQueue;
@property(readonly, nonatomic) NSMutableArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
@property(retain, nonatomic) DCService *server; // @synthesize server=_server;
@property(retain, nonatomic) SVMetadataItem *directoryItem; // @synthesize directoryItem=_directoryItem;
@property(readonly, nonatomic) _Bool firstUpdate; // @synthesize firstUpdate=_firstUpdate;
@property(nonatomic) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) _Bool enableWriteOnlyFolders; // @synthesize enableWriteOnlyFolders=_enableWriteOnlyFolders;
@property(copy, nonatomic) NSArray *validTypes; // @synthesize validTypes=_validTypes;
- (void).cxx_destruct;
- (void)uploadDidFail:(id)arg1;
- (void)documentManager:(id)arg1 didUpdateThumbnailOfFileAtPath:(id)arg2 url:(id)arg3;
- (void)documentManager:(id)arg1 didStartUploadingItemAtPath:(id)arg2 upload:(id)arg3;
- (void)documentManager:(id)arg1 didStartDownloadingItemAtPath:(id)arg2 downloadTask:(id)arg3;
- (void)documentManager:(id)arg1 didUpdateContentsOfFileAtPath:(id)arg2;
- (void)documentManager:(id)arg1 didUpdateConnectionStatus:(_Bool)arg2;
- (void)documentManager:(id)arg1 didFailToUpdateItemAtPath:(id)arg2 error:(id)arg3;
- (void)documentManager:(id)arg1 didUpdateAttributesOfItemAtPath:(id)arg2 attributes:(id)arg3;
- (void)documentManager:(id)arg1 didUpdateContentsOfDirectoryAtPath:(id)arg2 contents:(id)arg3;
- (void)cancelAllThumbnailRequests;
- (void)thumbnailForItem:(id)arg1 size:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateMetadataItemsWithNewContents:(id)arg1;
- (void)processNewMetadataItemsWithOldSnapshot:(id)arg1;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2;
- (void)cancelDownloadForItem:(id)arg1;
- (void)contentsOfItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDirectoryContents:(CDUnknownBlockType)arg1;
- (void)stopMonitoringChanges;
- (void)startMonitoringChanges;
- (void)sortMetadataItems;
- (void)updateEnabledStateForItems;
- (id)directoryPath;
- (id)allItems;
- (id)itemsAtIndexPaths:(id)arg1;
- (id)itemAtPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathOfItem:(id)arg1;
@property(readonly, nonatomic) _Bool hasLoadedContents;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) DCDocumentManager *documentManager;
- (void)dealloc;
- (id)initWithServer:(id)arg1 directoryItem:(id)arg2;

@end

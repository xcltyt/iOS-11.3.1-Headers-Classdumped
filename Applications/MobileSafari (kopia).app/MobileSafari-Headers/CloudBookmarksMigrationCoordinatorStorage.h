//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudBookmarksMigrationCoordinatorStorage.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CloudBookmarksMigrationCoordinatorStorage : NSObject <WBSCloudBookmarksMigrationCoordinatorStorage>
{
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSURL *_directoryURL;
}

@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
@property(nonatomic) _Bool migrationReadinessDataInvalidated;
- (id)_migrationReadinessDeciderURL;
@property(copy, nonatomic) NSDictionary *migrationReadinessDeciderDictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *migrationRampEvaluatorDictionaryRepresentation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


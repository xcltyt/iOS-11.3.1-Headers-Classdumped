//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "AUSongMediaItem-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"
#import "MTLManagedObjectSerializing-Protocol.h"

@class NSData, NSDate, NSDictionary, NSIndexPath, NSNumber, NSString, NSURL, NSURLSessionDownloadTask;

@interface AUAudikoRingtone : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing, AUSongMediaItem>
{
    _Bool _isRingtoneDeleted;
    _Bool _createdByApp;
    _Bool _isUserRingtone;
    _Bool _isPlaying;
    _Bool _downloadingInProcess;
    _Bool _isSearched;
    _Bool _isCollectionRingtone;
    float _playbackPersents;
    NSNumber *_item_id;
    NSNumber *_song_id;
    NSString *_title;
    NSString *_artist;
    NSNumber *_filesize;
    NSNumber *_duration;
    NSString *_imagePath;
    NSString *_urlToCloudAudio;
    NSURL *_assetURL;
    NSString *_pathToLocalAudio;
    NSString *_pathToCachedAudio;
    NSString *_localAudioFileName;
    NSDate *_creationTimeStamp;
    NSNumber *_trackLength;
    NSNumber *_ringtoneLength;
    NSNumber *_startPosition;
    NSString *_shortLinkURL;
    NSURLSessionDownloadTask *_downloadingOperation;
    NSNumber *_collectionID;
    NSIndexPath *_indexPath;
    NSString *_localDownloadedAudioFileName;
    NSString *_pathToDownloadedAudio;
}

+ (id)managedObjectEntityName;
+ (id)managedObjectKeysByPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *pathToDownloadedAudio; // @synthesize pathToDownloadedAudio=_pathToDownloadedAudio;
@property(retain, nonatomic) NSString *localDownloadedAudioFileName; // @synthesize localDownloadedAudioFileName=_localDownloadedAudioFileName;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isCollectionRingtone; // @synthesize isCollectionRingtone=_isCollectionRingtone;
@property(retain, nonatomic) NSNumber *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadingOperation; // @synthesize downloadingOperation=_downloadingOperation;
@property(nonatomic) _Bool isSearched; // @synthesize isSearched=_isSearched;
@property(nonatomic) _Bool downloadingInProcess; // @synthesize downloadingInProcess=_downloadingInProcess;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) float playbackPersents; // @synthesize playbackPersents=_playbackPersents;
@property(nonatomic) _Bool isUserRingtone; // @synthesize isUserRingtone=_isUserRingtone;
@property(nonatomic) _Bool createdByApp; // @synthesize createdByApp=_createdByApp;
@property(nonatomic) _Bool isRingtoneDeleted; // @synthesize isRingtoneDeleted=_isRingtoneDeleted;
@property(retain, nonatomic) NSString *shortLinkURL; // @synthesize shortLinkURL=_shortLinkURL;
@property(retain, nonatomic) NSNumber *startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) NSNumber *ringtoneLength; // @synthesize ringtoneLength=_ringtoneLength;
@property(retain, nonatomic) NSNumber *trackLength; // @synthesize trackLength=_trackLength;
@property(retain, nonatomic) NSDate *creationTimeStamp; // @synthesize creationTimeStamp=_creationTimeStamp;
@property(retain, nonatomic) NSString *localAudioFileName; // @synthesize localAudioFileName=_localAudioFileName;
@property(retain, nonatomic) NSString *pathToCachedAudio; // @synthesize pathToCachedAudio=_pathToCachedAudio;
@property(retain, nonatomic) NSString *pathToLocalAudio; // @synthesize pathToLocalAudio=_pathToLocalAudio;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *urlToCloudAudio; // @synthesize urlToCloudAudio=_urlToCloudAudio;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *filesize; // @synthesize filesize=_filesize;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *song_id; // @synthesize song_id=_song_id;
@property(retain, nonatomic) NSNumber *item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)urlToImage;
@property(readonly, nonatomic) NSString *ringtoneChecksum;
@property(readonly, nonatomic) NSData *cachedRingtoneData;
@property(readonly, nonatomic) NSData *ringtoneData;
- (_Bool)cachedFileExist;
- (_Bool)localFileExist;
- (void)fetchSongImage:(CDUnknownBlockType)arg1;
- (void)deleteAudioFiles;
- (void)downloadFailed;
- (_Bool)isLocalFileExist;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) Class superclass;

@end


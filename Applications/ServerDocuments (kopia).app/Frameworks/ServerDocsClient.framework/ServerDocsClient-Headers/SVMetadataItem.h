//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSNumber, NSString, NSURL, NSURLSessionDownloadTask;

@interface SVMetadataItem : NSObject
{
    _Bool _isDirectory;
    _Bool _isPackage;
    _Bool _hasHiddenExtension;
    _Bool _isReadable;
    _Bool _isWritable;
    _Bool _needsUpload;
    _Bool _enabled;
    _Bool _shouldRefresh;
    NSString *_filePath;
    NSURL *_fileURL;
    NSString *_name;
    NSDate *_dateCreated;
    NSDate *_contentDateModified;
    NSDate *_attributesDateModified;
    NSString *_typeIdentifier;
    NSString *_localizedTypeDescription;
    NSNumber *_fileSize;
    NSNumber *_numberOfItems;
    NSURL *_thumbnailURL;
    NSData *_thumbnailVersionIdentifier;
    NSString *_lastModifiedByUser;
    NSString *_lastModifiedByDevice;
    long long _numberOfUploadRetries;
    long long _type;
    NSURLSessionDownloadTask *_downloadTask;
}

@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) _Bool shouldRefresh; // @synthesize shouldRefresh=_shouldRefresh;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long numberOfUploadRetries; // @synthesize numberOfUploadRetries=_numberOfUploadRetries;
@property(readonly, nonatomic) _Bool needsUpload; // @synthesize needsUpload=_needsUpload;
@property(readonly, nonatomic) NSString *lastModifiedByDevice; // @synthesize lastModifiedByDevice=_lastModifiedByDevice;
@property(readonly, nonatomic) NSString *lastModifiedByUser; // @synthesize lastModifiedByUser=_lastModifiedByUser;
@property(readonly, nonatomic) _Bool isWritable; // @synthesize isWritable=_isWritable;
@property(readonly, nonatomic) _Bool isReadable; // @synthesize isReadable=_isReadable;
@property(retain, nonatomic) NSData *thumbnailVersionIdentifier; // @synthesize thumbnailVersionIdentifier=_thumbnailVersionIdentifier;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) _Bool hasHiddenExtension; // @synthesize hasHiddenExtension=_hasHiddenExtension;
@property(readonly, nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(readonly, nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(readonly, nonatomic) NSNumber *numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *localizedTypeDescription; // @synthesize localizedTypeDescription=_localizedTypeDescription;
@property(readonly, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly, nonatomic) NSDate *attributesDateModified; // @synthesize attributesDateModified=_attributesDateModified;
@property(readonly, nonatomic) NSDate *contentDateModified; // @synthesize contentDateModified=_contentDateModified;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *friendlyNumberOfItemsInDirectory;
@property(readonly, nonatomic) NSString *friendlyFileSize;
@property(readonly, nonatomic) NSString *friendlyWherePath;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) NSDate *sortDate;
- (_Bool)hasThumbnail;
@property(readonly, nonatomic) _Bool isAnImage;
- (id)badgeImageForSize:(double)arg1;
@property(readonly, nonatomic) _Bool needsToFetchThumbnailURL;
- (id)thumbnailWithSize:(double)arg1;
@property(readonly, nonatomic) double downloadProgress;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isDropBox;
- (id)initWithParentDirectoryPath:(id)arg1 sourceURL:(id)arg2;
- (void)updateFromAttributesDictionary:(id)arg1;
- (id)initWithParentDirectoryPath:(id)arg1 attributes:(id)arg2;

@end

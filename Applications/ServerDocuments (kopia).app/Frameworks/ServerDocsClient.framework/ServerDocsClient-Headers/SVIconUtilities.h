//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface SVIconUtilities : NSObject
{
    NSCache *_iconCache;
}

+ (id)_suffixForSize:(double)arg1;
+ (id)_createServerFolderIconForSize:(double)arg1;
+ (id)_createSharepointIconForSize:(double)arg1;
+ (id)_createPersonalFolderIconForSize:(double)arg1;
+ (id)_createBadgedFolderIconWithImage:(id)arg1 size:(double)arg2;
+ (id)_createFolderIconForSize:(double)arg1;
+ (id)_createIconForFileWithName:(id)arg1 type:(id)arg2 size:(double)arg3;
+ (id)_createThumbnailWithImage:(id)arg1 forSize:(double)arg2;
+ (id)sharedIconUtilities;
@property(retain, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
- (void).cxx_destruct;
- (id)sharepointIconForSize:(double)arg1;
- (id)personalFolderIconForSize:(double)arg1;
- (id)serverFolderIconForSize:(double)arg1;
- (id)folderIconForSize:(double)arg1;
- (id)iconForFileWithName:(id)arg1 type:(id)arg2 size:(double)arg3;
- (id)thumbnailForLocalFileAtURL:(id)arg1 size:(double)arg2;
- (id)thumbnailForFileAtPath:(id)arg1 thumbnailURL:(id)arg2 versionIdentifier:(id)arg3 size:(double)arg4;
- (id)cachedThumbnailForFileAtPath:(id)arg1 versionIdentifier:(id)arg2 size:(double)arg3;
- (id)_cachedIconForKey:(id)arg1 withIconCreationBlock:(CDUnknownBlockType)arg2;
- (void)clearCache;

@end

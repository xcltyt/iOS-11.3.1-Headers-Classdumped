//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ZipFile : NSObject
{
    NSString *_fileName;
    int _mode;
    void *_zipFile;
    void *_unzFile;
}

- (void)close;
- (id)readCurrentFileInZipWithPassword:(id)arg1;
- (id)readCurrentFileInZip;
- (id)getCurrentFileInZipInfo;
- (_Bool)locateFileInZip:(id)arg1;
- (_Bool)goToNextFileInZip;
- (void)goToFirstFileInZip;
- (id)listFileInZipInfos;
- (unsigned long long)numFilesInZip;
- (id)writeFileInZipWithName:(id)arg1 fileDate:(id)arg2 compressionLevel:(int)arg3 password:(id)arg4 crc32:(unsigned long long)arg5;
- (id)writeFileInZipWithName:(id)arg1 fileDate:(id)arg2 compressionLevel:(int)arg3;
- (id)writeFileInZipWithName:(id)arg1 compressionLevel:(int)arg2;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 mode:(int)arg2;

@end


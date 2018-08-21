/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPDirectoryPackage;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {

	AQ _cachedEncodedLength;
	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	unsigned char _packageIdentifier;
	BOOL _isMissingData;
	BOOL _gilligan_isRemote;
	TSPDirectoryPackage* _package;

}

@property (nonatomic,__weak,readonly) TSPDirectoryPackage * package;              //@synthesize package=_package - In the implementation block
-(id)decryptionInfo;
-(BOOL)gilligan_isRemote;
-(BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3 ;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(id)init;
-(unsigned long long)length;
-(id)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(unsigned char)packageIdentifier;
-(unsigned long long)encodedLength;
-(BOOL)isInPackage:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
-(TSPDirectoryPackage *)package;
@end

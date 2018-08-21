/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject {

	id _internal;
	BOOL _ignoreRead;

}

@property (nonatomic,retain) ALAssetRepresentationPrivate * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign) BOOL ignoreRead;                                                //@synthesize ignoreRead=_ignoreRead - In the implementation block
+(void)_enableImageDataUsesMap;
-(float)scale;
-(long long)size;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(id)url;
-(long long)orientation;
-(id)UTI;
-(CGSize)dimensions;
-(CGImageRef)fullResolutionImage;
-(id)filename;
-(unsigned long long)getBytes:(char*)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4 ;
-(CGImageRef)fullScreenImage;
-(id)metadata;
-(int)_fileDescriptor;
-(id)_imageData;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 format:(int)arg2 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 ;
-(CGImageRef)_largeDisplayableImageForFormatID:(int)arg1 ;
-(void)setIgnoreRead:(BOOL)arg1 ;
-(CGImageRef)zoomableDisplayImage;
-(BOOL)ignoreRead;
-(ALAssetRepresentationPrivate *)internal;
-(void)setInternal:(ALAssetRepresentationPrivate *)arg1 ;
@end

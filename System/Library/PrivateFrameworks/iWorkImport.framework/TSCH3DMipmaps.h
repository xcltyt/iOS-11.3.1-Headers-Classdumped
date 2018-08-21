/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSCH3DMipmaps : NSObject {

	int mWidth;
	int mHeight;
	unsigned long long mComponents;
	NSData* mData;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) unsigned long long components; 
@property (nonatomic,readonly) NSData * data; 
+(CGSize)optimizedMipmapLevel0Size;
+(CGSize)mipmapSizeForTexturableSize:(CGSize)arg1 ;
+(id)mipmapNameFromImageName:(id)arg1 ;
+(id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
+(id)mipmapsFromData:(id)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
-(id)description;
-(NSData *)data;
-(int)height;
-(int)width;
-(BOOL)valid;
-(unsigned long long)components;
-(id)initFromData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
@end

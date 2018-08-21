/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>

@class NUPixelFormat, NSString;

@interface NUMutableBufferAdapter : NSObject <NUMutableBuffer> {

	SCD_Struct_NU5 _size;
	NUPixelFormat* _format;
	long long _rowBytes;
	void* _mutableBytes;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU5 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) void* mutableBytes; 
-(id)init;
-(SCD_Struct_NU5)size;
-(void)invalidate;
-(const void*)bytes;
-(NUPixelFormat *)format;
-(void*)mutableBytes;
-(const void*)bytesAtPoint:(SCD_Struct_NU5)arg1 ;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU5)arg1 ;
-(long long)rowBytes;
-(id)initWithMutableBuffer:(id)arg1 ;
-(id)newRenderDestination;
-(id)initWithSize:(SCD_Struct_NU5)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void*)arg4 ;
@end

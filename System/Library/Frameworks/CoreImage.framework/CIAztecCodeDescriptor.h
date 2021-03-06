/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	BOOL isCompact;
	long long layerCount;
	long long dataCodewordCount;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) BOOL isCompact; 
@property (readonly) long long layerCount; 
@property (readonly) long long dataCodewordCount; 
+(id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4 ;
+(BOOL)supportsSecureCoding;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4 ;
-(long long)dataCodewordCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCompact;
-(long long)layerCount;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUImage.h>

@interface TSUCGImage : TSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(double)scale;
-(CGSize)size;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end


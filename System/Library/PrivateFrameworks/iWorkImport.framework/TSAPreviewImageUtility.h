/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSAPreviewImageUtility : NSObject
+(id)scaleImage:(CGImageRef)arg1 toSize:(CGSize)arg2 scale:(double)arg3 ;
+(BOOL)imageIsOpaque:(CGImageRef)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 image:(CGImageRef)arg3 imageSize:(CGSize)arg4 scaledSize:(CGSize)arg5 scale:(double)arg6 flip:(BOOL)arg7 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 ;
@end

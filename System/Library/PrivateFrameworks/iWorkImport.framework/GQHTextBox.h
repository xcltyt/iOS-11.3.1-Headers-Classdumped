/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHParagraphStyle.h>

@interface GQHTextBox : GQHParagraphStyle
+(int)handleLayoutStorage:(id)arg1 state:(id)arg2 ;
+(void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 ;
+(void)createExternalWrapSandbagStyles:(id)arg1 ;
+(BOOL)outputWrapSandbagsForFrame:(CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 isPageFrame:(BOOL)arg5 ;
+(void)mapLayout:(id)arg1 style:(id)arg2 state:(id)arg3 ;
+(void)mapScaledImageFill:(id)arg1 style:(id)arg2 size:(CGSize)arg3 ;
+(BOOL)styleNeedsImageFillMapping:(id)arg1 ;
+(int)outputInnerSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3 ;
+(int)outputWrapSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3 ;
+(void)outputSandbag:(id)arg1 state:(id)arg2 ;
+(int)handleShapeText:(id)arg1 boundsRect:(CGRect)arg2 floating:(BOOL)arg3 state:(id)arg4 ;
+(int)outputWrapSandbagsForFrame:(CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 ;
+(int)outputInnerSandbagsForFrame:(CGRect)arg1 drawable:(id)arg2 state:(id)arg3 ;
+(const char*)name;
@end

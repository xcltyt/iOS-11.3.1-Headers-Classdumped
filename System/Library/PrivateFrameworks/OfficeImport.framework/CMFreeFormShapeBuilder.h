/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {

	OADPath* _path;
	CGSize _space;

}
-(void)setPath:(id)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setSpace:(CGSize)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(CGPoint)_renderPathElement:(id)arg1 withTransform:(CGAffineTransform)arg2 inPath:(CGPathRef)arg3 ;
@end

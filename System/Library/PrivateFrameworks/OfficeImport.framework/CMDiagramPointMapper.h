/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class ODDPoint, CMDrawingContext, OADOrientedBounds, NSString;

@interface CMDiagramPointMapper : CMMapper {

	ODDPoint* mPoint;
	CMDrawingContext* mDrawingContext;
	OADOrientedBounds* mOrientedBounds;
	NSString* mPresentationName;

}
-(id)fill;
-(id)stroke;
-(id)shapeStyle;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)diagram;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)transformPresentationName;
-(id)transformForPresentationWithName:(id)arg1 ;
-(id)plainText;
-(float)defaultFontSize;
-(void)setPresentationName:(id)arg1 ;
-(void)applyDiagramStyleToShapeProperties;
-(void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(BOOL)arg3 includeChildren:(BOOL)arg4 withState:(id)arg5 ;
-(void)renderShapeAsBackgroundInBounds:(id)arg1 ;
-(void)mapStyledRectangle:(CGRect)arg1 at:(id)arg2 withState:(id)arg3 ;
-(void)mapChlidrenAt:(id)arg1 withState:(id)arg2 ;
-(id)presentationName;
-(id)presentationWithName:(id)arg1 ;
-(id)baseTextListStyleWithBounds:(id)arg1 isCentered:(BOOL)arg2 ;
-(void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
@end

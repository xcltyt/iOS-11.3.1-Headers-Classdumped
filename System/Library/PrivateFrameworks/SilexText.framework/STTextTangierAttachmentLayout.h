/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexText/SilexText-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface STTextTangierAttachmentLayout : TSDDrawableLayout {

	TSDWrapPolygon* _polygon;

}

@property (nonatomic,retain) TSDWrapPolygon * polygon;              //@synthesize polygon=_polygon - In the implementation block
-(void)validate;
-(void)fixTransformFromInterimPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(id)wrapPolygon;
-(TSDWrapPolygon *)polygon;
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(void)storeActualPosition;
@end

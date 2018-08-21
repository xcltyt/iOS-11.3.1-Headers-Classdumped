/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject {

	TSDStroke* mHorizontalStroke;
	TSDStroke* mVerticalStroke;
	TSDStroke* mExteriorStroke;
	unsigned mVisibleMask;

}

@property (nonatomic,retain) TSDStroke * horizontalStroke; 
@property (nonatomic,retain) TSDStroke * verticalStroke; 
@property (nonatomic,retain) TSDStroke * exteriorStroke; 
@property (assign,nonatomic) unsigned mask; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMask:(unsigned)arg1 ;
-(unsigned)mask;
-(id)initWithMask:(unsigned)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4 ;
-(TSDStroke *)horizontalStroke;
-(TSDStroke *)verticalStroke;
-(TSDStroke *)exteriorStroke;
-(void)setHorizontalStroke:(TSDStroke *)arg1 ;
-(void)setVerticalStroke:(TSDStroke *)arg1 ;
-(void)setExteriorStroke:(TSDStroke *)arg1 ;
@end

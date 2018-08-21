/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray;

@interface _PGPlaybackProgressIndicatorRangesView : UIView {

	UIColor* _rangeColor;
	NSArray* _ranges;

}

@property (nonatomic,retain) UIColor * rangeColor;              //@synthesize rangeColor=_rangeColor - In the implementation block
@property (nonatomic,retain) NSArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setRangeColor:(UIColor *)arg1 ;
-(UIColor *)rangeColor;
-(void)setRanges:(NSArray *)arg1 ;
-(NSArray *)ranges;
@end

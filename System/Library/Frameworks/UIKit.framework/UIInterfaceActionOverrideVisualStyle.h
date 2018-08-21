/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionSeparatorAttributes, UIInterfaceActionHighlightAttributes;

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {

	double _customSelectionHighlightContinuousCornerRadius;
	UIInterfaceActionSeparatorAttributes* _customSeparatorAttributes;
	UIInterfaceActionHighlightAttributes* _customActionHighlightAttributes;
	/*^block*/id _customTitleLabelFontProviderForViewState;

}

@property (assign) double customSelectionHighlightContinuousCornerRadius;                                         //@synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius - In the implementation block
@property (nonatomic,retain) UIInterfaceActionSeparatorAttributes * customSeparatorAttributes;                    //@synthesize customSeparatorAttributes=_customSeparatorAttributes - In the implementation block
@property (nonatomic,retain) UIInterfaceActionHighlightAttributes * customActionHighlightAttributes;              //@synthesize customActionHighlightAttributes=_customActionHighlightAttributes - In the implementation block
@property (nonatomic,copy) id customTitleLabelFontProviderForViewState;                                           //@synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState - In the implementation block
+(id)styleOverride;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIInterfaceActionSeparatorAttributes *)customSeparatorAttributes;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(UIInterfaceActionHighlightAttributes *)customActionHighlightAttributes;
-(double)customSelectionHighlightContinuousCornerRadius;
-(void)setCustomSelectionHighlightContinuousCornerRadius:(double)arg1 ;
-(void)setCustomSeparatorAttributes:(UIInterfaceActionSeparatorAttributes *)arg1 ;
-(void)setCustomActionHighlightAttributes:(UIInterfaceActionHighlightAttributes *)arg1 ;
-(id)customTitleLabelFontProviderForViewState;
-(void)setCustomTitleLabelFontProviderForViewState:(id)arg1 ;
@end

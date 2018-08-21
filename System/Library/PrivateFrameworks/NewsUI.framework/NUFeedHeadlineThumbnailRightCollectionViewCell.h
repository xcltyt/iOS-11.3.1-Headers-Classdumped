/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUFeedHeadlineCollectionViewCell.h>

@class NUCanvas;

@interface NUFeedHeadlineThumbnailRightCollectionViewCell : NUFeedHeadlineCollectionViewCell {

	NUCanvas* _canvas;

}

@property (nonatomic,readonly) NUCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUCanvas *)canvas;
-(id)buildCanvas;
@end

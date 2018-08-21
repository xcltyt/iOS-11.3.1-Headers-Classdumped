/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {

	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;
	BOOL _needsURLPlaceholderImage;

}

@property (assign,nonatomic) BOOL needsURLPlaceholderImage;              //@synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)needsURLPlaceholderImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setNeedsURLPlaceholderImage:(BOOL)arg1 ;
@end

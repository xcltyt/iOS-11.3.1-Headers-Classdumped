/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPTextStyleable.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class UILabel, LPImageView, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	UILabel* _textView;
	UIEdgeInsets _contentInset;
	LPImageView* _glyphView;
	LPTextViewStyle* _style;

}

@property (nonatomic,retain,readonly) LPTextViewStyle * style; 
-(id)init;
-(double)ascender;
-(double)descender;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(LPTextViewStyle *)style;
-(UIEdgeInsets)_effectiveContentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(double)firstLineLeading;
-(id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2 ;
@end

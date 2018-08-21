/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSURL, UILabel, UIImageView;

@interface NUArticleExcerptReadMoreButton : UIButton {

	unsigned long long _excerptLenthType;
	NSURL* _domainURL;
	UILabel* _readStoryLabel;
	UILabel* _domainLabel;
	UIImageView* _arrowImageView;

}

@property (nonatomic,readonly) UILabel * readStoryLabel;                       //@synthesize readStoryLabel=_readStoryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * domainLabel;                          //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowImageView;                   //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (assign,nonatomic) unsigned long long excerptLenthType;              //@synthesize excerptLenthType=_excerptLenthType - In the implementation block
@property (nonatomic,retain) NSURL * domainURL;                                //@synthesize domainURL=_domainURL - In the implementation block
+(double)readMoreButtonHeight;
+(id)arrowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setExcerptLenthType:(unsigned long long)arg1 ;
-(void)setDomainURL:(NSURL *)arg1 ;
-(UILabel *)readStoryLabel;
-(UILabel *)domainLabel;
-(UIImageView *)arrowImageView;
-(unsigned long long)excerptLenthType;
-(NSURL *)domainURL;
@end

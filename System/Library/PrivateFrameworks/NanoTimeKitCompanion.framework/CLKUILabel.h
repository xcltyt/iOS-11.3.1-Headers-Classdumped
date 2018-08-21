/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString, NSAttributedString;


@protocol CLKUILabel <NSObject>
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@required
-(void)setTextAlignment:(long long)arg1;
-(void)setAttributedText:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setTextColor:(id)arg1;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(long long)textAlignment;
-(double)_lastLineBaseline;
-(UIEdgeInsets)opticalInsets;

@end

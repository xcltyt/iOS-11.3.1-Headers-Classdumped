/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXTextStyle.h>

@class SXDropCapStyle, SXTextStyle;

@interface SXComponentTextStyle : SXTextStyle

@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) long long lineHeight; 
@property (nonatomic,readonly) double relativeLineHeight; 
@property (nonatomic,readonly) long long exactLineHeight; 
@property (nonatomic,readonly) SXDropCapStyle * dropCapStyle; 
@property (nonatomic,readonly) long long hyphenation; 
@property (nonatomic,readonly) SXTextStyle * linkStyle; 
@property (nonatomic,readonly) long long paragraphSpacingBefore; 
@property (nonatomic,readonly) long long paragraphSpacingAfter; 
@property (nonatomic,readonly) long long firstLineIndent; 
@property (nonatomic,readonly) BOOL hangingPunctuation; 
-(BOOL)hangingPunctuation;
-(long long)firstLineIndent;
-(long long)paragraphSpacingAfter;
-(long long)paragraphSpacingBefore;
-(SXTextStyle *)linkStyle;
-(long long)hyphenation;
-(SXDropCapStyle *)dropCapStyle;
-(long long)exactLineHeight;
-(double)relativeLineHeight;
-(long long)lineHeight;
-(long long)textAlignment;
-(long long)textAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)lineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)exactLineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(double)relativeLineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)hyphenationWithValue:(id)arg1 withType:(int)arg2 ;
@end

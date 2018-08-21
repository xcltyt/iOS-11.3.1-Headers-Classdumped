/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter {

	AVTimeFormatterInternal* _internal;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double formatTemplate; 
@property (assign,getter=isFullWidth,nonatomic) BOOL fullWidth; 
-(double)formatTemplate;
-(BOOL)isFullWidth;
-(id)cachedDateFormatterFormat;
-(id)cachedDateFormatterTemplate;
-(id)numberFormatterWithOneMinimumIntegerDigits;
-(id)numberFormatterWithTwoMinimumIntegerDigits;
-(void)setFormatTemplate:(double)arg1 ;
-(void)setCachedDateFormatterFormat:(id)arg1 ;
-(void)setCachedDateFormatterTemplate:(id)arg1 ;
-(void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1 ;
-(void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1 ;
-(id)stringFromCMTime:(SCD_Struct_AV2)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromSeconds:(double)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(void)setFullWidth:(BOOL)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)finalize;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(BOOL)isRightToLeft;
@end

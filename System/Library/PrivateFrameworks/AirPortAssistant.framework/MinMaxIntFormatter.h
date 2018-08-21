/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter {

	long long _minimum;
	long long _maximum;

}
+(id)formatterForMin:(long long)arg1 max:(long long)arg2 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 ;
-(long long)minimum;
-(void)setMinimum:(long long)arg1 ;
-(long long)maximum;
-(void)setMaximum:(long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableDictionary;

@interface SXBackgroundControl : UIControl {

	NSMutableDictionary* _backgroundColors;

}

@property (nonatomic,retain) NSMutableDictionary * backgroundColors;              //@synthesize backgroundColors=_backgroundColors - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)seperatedControlStatesForControlState:(unsigned long long)arg1 ;
-(NSMutableDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSMutableDictionary *)arg1 ;
@end

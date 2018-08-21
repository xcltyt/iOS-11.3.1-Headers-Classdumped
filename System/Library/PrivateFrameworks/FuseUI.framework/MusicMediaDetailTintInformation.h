/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MusicMediaDetailTintInformation : NSObject <NSCopying> {

	UIColor* _separatorColor;
	BOOL _backgroundColorLight;
	UIColor* _actionableColor;
	UIColor* _backgroundColor;
	UIColor* _primaryTextColor;

}

@property (nonatomic,readonly) UIColor * actionableColor;                                            //@synthesize actionableColor=_actionableColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (getter=isBackgroundColorLight,nonatomic,readonly) BOOL backgroundColorLight;              //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                                           //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * separatorColor; 
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)separatorColor;
-(BOOL)isBackgroundColorLight;
-(UIColor *)primaryTextColor;
-(UIColor *)actionableColor;
-(void)configureJSEventDictionary:(id)arg1 ;
-(id)initWithArtworkColorAnalysis:(id)arg1 ;
@end

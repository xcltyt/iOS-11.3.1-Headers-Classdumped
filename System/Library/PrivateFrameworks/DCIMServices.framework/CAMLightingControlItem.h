/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CAMLightingControlItem : NSObject {

	long long _lightingType;
	NSString* _displayName;
	UIImage* _displayImage;
	UIImage* _displayShadowImage;
	UIImage* _displayOutlineImage;
	UIImage* _selectionBackgroundImage;

}

@property (nonatomic,readonly) long long lightingType;                          //@synthesize lightingType=_lightingType - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * displayImage;                          //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayShadowImage;                    //@synthesize displayShadowImage=_displayShadowImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayOutlineImage;                   //@synthesize displayOutlineImage=_displayOutlineImage - In the implementation block
@property (nonatomic,readonly) UIImage * selectionBackgroundImage;              //@synthesize selectionBackgroundImage=_selectionBackgroundImage - In the implementation block
+(id)_defaultOutlineImage;
-(id)initWithType:(long long)arg1 ;
-(NSString *)displayName;
-(UIImage *)displayImage;
-(UIImage *)displayShadowImage;
-(UIImage *)displayOutlineImage;
-(UIImage *)selectionBackgroundImage;
-(long long)lightingType;
@end

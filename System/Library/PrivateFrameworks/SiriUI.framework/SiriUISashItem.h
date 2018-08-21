/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, UIColor, NSArray;

@interface SiriUISashItem : NSObject {

	BOOL _canPunchout;
	BOOL _hidden;
	BOOL _isDefault;
	NSString* _title;
	UIImage* _image;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	NSString* _applicationBundleIdentifier;
	NSArray* _commands;

}

@property (assign,setter=_setDefault:,nonatomic) BOOL isDefault;                         //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canPunchout;                                         //@synthesize canPunchout=_canPunchout - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                           //@synthesize commands=_commands - In the implementation block
+(id)_languageCode;
+(id)defaultSashItem;
+(void)_setLanguageCode:(id)arg1 ;
-(BOOL)isDefault;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isHidden;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(UIColor *)textColor;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 ;
-(BOOL)canPunchout;
-(id)initWithApplicationBundleIdentifier:(id)arg1 ;
-(void)_setDefault:(BOOL)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
@end

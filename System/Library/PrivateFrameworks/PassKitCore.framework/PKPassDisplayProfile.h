/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDisplayProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying> {

	BOOL _tallCode;
	BOOL _hasBackgroundImage;
	BOOL _hasStripImage;
	long long _passStyle;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _manifestHash;

}

@property (assign,nonatomic) long long passStyle;                      //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                     //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                     //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                    //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) BOOL tallCode;                            //@synthesize tallCode=_tallCode - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundImage;                  //@synthesize hasBackgroundImage=_hasBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL hasStripImage;                       //@synthesize hasStripImage=_hasStripImage - In the implementation block
@property (nonatomic,readonly) BOOL showsBackgroundImage; 
@property (nonatomic,readonly) BOOL showsStripImage; 
@property (nonatomic,readonly) long long layoutMode; 
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(PKColor *)foregroundColor;
-(void)setLabelColor:(PKColor *)arg1 ;
-(PKColor *)labelColor;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setPassStyle:(long long)arg1 ;
-(void)setStripColor:(PKColor *)arg1 ;
-(void)setTallCode:(BOOL)arg1 ;
-(BOOL)tallCode;
-(BOOL)hasBackgroundImage;
-(void)setHasBackgroundImage:(BOOL)arg1 ;
-(BOOL)hasStripImage;
-(void)setHasStripImage:(BOOL)arg1 ;
-(long long)layoutMode;
-(long long)passStyle;
-(BOOL)showsStripImage;
-(BOOL)showsBackgroundImage;
-(PKColor *)stripColor;
-(NSData *)manifestHash;
@end

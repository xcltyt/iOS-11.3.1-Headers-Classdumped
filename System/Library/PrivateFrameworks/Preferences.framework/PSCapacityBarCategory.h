/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying> {

	unsigned long long _bytes;
	NSString* _identifier;
	NSString* _title;
	UIColor* _color;

}

@property (assign) unsigned long long bytes;              //@synthesize bytes=_bytes - In the implementation block
@property (retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4 ;
-(void)setBytes:(unsigned long long)arg1 ;
@end

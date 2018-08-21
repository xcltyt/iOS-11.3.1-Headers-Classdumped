/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	OADColor* mBgColor;
	OADPattern* mPattern;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)pattern;
-(void)setParent:(id)arg1 ;
-(void)setPattern:(id)arg1 ;
-(void)setFgColor:(id)arg1 ;
-(void)setBgColor:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)isFgColorOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isPatternOverridden;
-(id)fgColor;
-(id)bgColor;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

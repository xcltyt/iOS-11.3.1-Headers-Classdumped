/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _localizedCountryName;
	NSString* _dialingPrefix;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * countryName;                       //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                     //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
+(id)countryInfoWithDictionary:(id)arg1 ;
+(void)_loadCountriesIfNeeded;
+(id)allCountries;
+(id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(NSString *)localizedCountryName;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
@end

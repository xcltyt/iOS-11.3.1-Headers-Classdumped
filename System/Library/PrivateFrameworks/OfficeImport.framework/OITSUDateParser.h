/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray, OITSULocale;

@interface OITSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	OITSULocale* mLocale;
	BOOL mIsJapaneseLocale;
	CFDateFormatterRef mSpecialCaseFormatter;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(id)initWithLocale:(id)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(id)formatStringsDictionary;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

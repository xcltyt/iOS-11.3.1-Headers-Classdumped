/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(id)fontForScript:(id)arg1 ;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(id)scripts;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
@end

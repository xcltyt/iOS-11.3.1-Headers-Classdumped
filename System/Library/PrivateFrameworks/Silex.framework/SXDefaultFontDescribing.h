/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXTextStyleFontDescribing.h>

@protocol SXTextStyleFontAttributes;
@class NSString;

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing> {

	id<SXTextStyleFontAttributes> _fontAttributes;
	NSString* _fontName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName;                                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
-(id)init;
-(NSString *)fontName;
-(id<SXTextStyleFontAttributes>)fontAttributes;
@end

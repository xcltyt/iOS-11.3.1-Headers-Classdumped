/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class NSString;

@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {

	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriPrefix;
	CFStringRef mUuidStr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(BOOL)arg2 ;
-(BOOL)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(CFDataRef)mainHtmlData;
-(void)setUriPrefix:(CFStringRef)arg1 ;
-(CFDictionaryRef)createOutputDictionary;
-(id)init;
-(void)dealloc;
-(CFDictionaryRef)attachments;
-(void)setDocumentSize:(CGSize)arg1 ;
@end

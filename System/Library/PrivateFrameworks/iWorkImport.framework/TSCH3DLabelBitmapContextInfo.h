/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying> {

	BOOL mIsPrinting;
	BOOL mIsPDF;
	BOOL mHasSuppressedBackgrounds;

}

@property (nonatomic,readonly) BOOL isPDF; 
@property (nonatomic,readonly) BOOL isPrinting; 
@property (nonatomic,readonly) BOOL hasSuppressedBackgrounds; 
+(id)contextInfoForScene:(id)arg1 ;
+(id)contextInfoWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
+(void)setIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 forScene:(id)arg4 ;
+(id)context;
-(BOOL)hasSuppressedBackgrounds;
-(void)setTSDCGContextInfoForCGContext:(CGContextRef)arg1 ;
-(id)initWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPrinting;
-(BOOL)isPDF;
@end

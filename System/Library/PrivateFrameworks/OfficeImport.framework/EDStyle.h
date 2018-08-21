/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, EDProtection, EDContentFormat, EDFont, EDFill, EDAlignmentInfo, EDBorders, NSString;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mParentIndex;
	unsigned long long mContentFormatId;
	unsigned long long mFontIndex;
	unsigned long long mFillIndex;
	unsigned long long mAlignmentInfoIndex;
	unsigned long long mBordersIndex;
	EDProtection* mProtection;
	unsigned long long mIndex;
	BOOL mContentFormatOverridden;
	BOOL mContentFormatApplied;
	BOOL mFontOverridden;
	BOOL mFontApplied;
	BOOL mFillOverridden;
	BOOL mFillApplied;
	BOOL mAlignmentInfoOverridden;
	BOOL mAlignmentInfoApplied;
	BOOL mBordersOverridden;
	BOOL mBordersApplied;
	BOOL mProtectionOverridden;
	BOOL mProtectionApplied;
	BOOL mDoNotModify;

}

@property (getter=isContentFormatOverridden) BOOL contentFormatOverridden; 
@property (getter=isContentFormatApplied) BOOL contentFormatApplied; 
@property (retain) EDContentFormat * contentFormat; 
@property (getter=isFontOverridden) BOOL fontOverridden; 
@property (getter=isFontApplied) BOOL fontApplied; 
@property (retain) EDFont * font; 
@property (getter=isFillOverridden) BOOL fillOverridden; 
@property (getter=isFillApplied) BOOL fillApplied; 
@property (retain) EDFill * fill; 
@property (getter=isAlignmentInfoOverridden) BOOL alignmentInfoOverridden; 
@property (getter=isAlignmentInfoApplied) BOOL alignmentInfoApplied; 
@property (retain) EDAlignmentInfo * alignmentInfo; 
@property (getter=isBordersOverridden) BOOL bordersOverridden; 
@property (getter=isBordersApplied) BOOL bordersApplied; 
@property (retain) EDBorders * borders; 
@property (getter=isProtectionOverridden) BOOL protectionOverridden; 
@property (getter=isProtectionApplied) BOOL protectionApplied; 
@property (retain) EDProtection * protection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleWithResources:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setFont:(EDFont *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EDFill *)fill;
-(EDFont *)font;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(void)setFill:(EDFill *)arg1 ;
-(BOOL)isFontOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isAlignmentInfoOverridden;
-(EDAlignmentInfo *)alignmentInfo;
-(BOOL)isContentFormatApplied;
-(unsigned long long)contentFormatId;
-(EDContentFormat *)contentFormat;
-(BOOL)isBordersOverridden;
-(EDBorders *)borders;
-(unsigned long long)fillIndex;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)fontIndex;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setParentIndex:(unsigned long long)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
-(void)setBorders:(EDBorders *)arg1 ;
-(void)setProtection:(EDProtection *)arg1 ;
-(void)setFontOverridden:(BOOL)arg1 ;
-(void)setAlignmentInfoOverridden:(BOOL)arg1 ;
-(void)setBordersOverridden:(BOOL)arg1 ;
-(void)setFillOverridden:(BOOL)arg1 ;
-(void)setProtectionOverridden:(BOOL)arg1 ;
-(void)setContentFormatOverridden:(BOOL)arg1 ;
-(EDProtection *)protection;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEquivalentToStyle:(id)arg1 ;
-(BOOL)isEqualToStyle:(id)arg1 ;
-(BOOL)isContentFormatOverridden;
-(BOOL)isCenterAcrossAligned;
-(BOOL)isProtectionOverridden;
-(BOOL)isFontApplied;
-(BOOL)isFillApplied;
-(BOOL)isAlignmentInfoApplied;
-(BOOL)isBordersApplied;
-(BOOL)isProtectionApplied;
-(unsigned long long)parentIndex;
-(unsigned long long)bordersIndex;
-(unsigned long long)alignmentInfoIndex;
-(void)setAlignmentInfoIndex:(unsigned long long)arg1 ;
-(void)setFontApplied:(BOOL)arg1 ;
-(void)setBordersIndex:(unsigned long long)arg1 ;
-(void)setBordersApplied:(BOOL)arg1 ;
-(void)setFillIndex:(unsigned long long)arg1 ;
-(void)setFillApplied:(BOOL)arg1 ;
-(void)setContentFormatApplied:(BOOL)arg1 ;
-(void)setProtectionApplied:(BOOL)arg1 ;
-(void)setAlignmentInfoApplied:(BOOL)arg1 ;
@end

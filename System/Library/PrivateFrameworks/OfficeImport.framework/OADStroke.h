/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor, OADFill, OADDash, OADLineJoin, OADLineEnd;

@interface OADStroke : OADProperties <NSCopying> {

	OADColor* mColor;
	OADFill* mFill;
	OADDash* mDash;
	OADLineJoin* mJoin;
	OADLineEnd* mHead;
	OADLineEnd* mTail;
	float mWidth;
	unsigned char mCap;
	unsigned char mCompoundType;
	int mPenAlignment;
	unsigned mIsColorOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsCapOverridden : 1;
	unsigned mIsCompoundTypeOverridden : 1;
	unsigned mIsPenAlignmentOverridden : 1;

}

@property (nonatomic,retain) OADLineEnd * head; 
@property (nonatomic,retain) OADLineEnd * tail; 
+(id)defaultProperties;
+(id)blackStroke;
+(id)nullStroke;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fill;
-(id)color;
-(void)setColor:(id)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(unsigned char)compoundType;
-(void)setParent:(id)arg1 ;
-(unsigned char)cap;
-(id)join;
-(void)setCap:(unsigned char)arg1 ;
-(void)setJoin:(id)arg1 ;
-(void)setFill:(id)arg1 ;
-(BOOL)isWidthOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isDashOverridden;
-(id)dash;
-(BOOL)isCompoundTypeOverridden;
-(OADLineEnd *)head;
-(OADLineEnd *)tail;
-(void)setCompoundType:(unsigned char)arg1 ;
-(void)setPenAlignment:(int)arg1 ;
-(void)setDash:(id)arg1 ;
-(void)setTail:(OADLineEnd *)arg1 ;
-(void)setHead:(OADLineEnd *)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)isCapOverridden;
-(id)initWithDefaults;
-(BOOL)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(BOOL)isJoinOverridden;
-(BOOL)isPenAlignmentOverridden;
-(BOOL)isHeadOverridden;
-(BOOL)isTailOverridden;
-(int)penAlignment;
@end

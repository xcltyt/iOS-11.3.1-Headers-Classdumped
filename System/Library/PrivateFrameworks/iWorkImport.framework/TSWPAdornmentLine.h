/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSKCGColorProvider;
@interface TSWPAdornmentLine : NSObject <NSCopying> {

	BOOL _isWhitespace;
	BOOL _allowAntialiasing;
	int _underline;
	int _adornmentLocation;
	CGColorRef _color;
	double _length;
	double _thickness;
	unsigned long long _lineCount;
	double _underlineAdjustment;
	id<TSKCGColorProvider> _colorProvider;
	CGPoint _start;

}

@property (nonatomic,readonly) CGPoint start;                                     //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double length;                                     //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) CGColorRef color;                                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double thickness;                                  //@synthesize thickness=_thickness - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCount;                      //@synthesize lineCount=_lineCount - In the implementation block
@property (nonatomic,readonly) int underline;                                     //@synthesize underline=_underline - In the implementation block
@property (nonatomic,readonly) int adornmentLocation;                             //@synthesize adornmentLocation=_adornmentLocation - In the implementation block
@property (nonatomic,readonly) double underlineAdjustment;                        //@synthesize underlineAdjustment=_underlineAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL isWhitespace;                                 //@synthesize isWhitespace=_isWhitespace - In the implementation block
@property (nonatomic,readonly) BOOL allowAntialiasing;                            //@synthesize allowAntialiasing=_allowAntialiasing - In the implementation block
@property (nonatomic,readonly) id<TSKCGColorProvider> colorProvider;              //@synthesize colorProvider=_colorProvider - In the implementation block
-(BOOL)allowAntialiasing;
-(id)copyWithColor:(CGColorRef)arg1 ;
-(id)initWithStart:(CGPoint)arg1 length:(double)arg2 color:(CGColorRef)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 isWhitespace:(BOOL)arg9 colorProvider:(id)arg10 allowAntialiasing:(BOOL)arg11 ;
-(double)underlineAdjustment;
-(id)initWithStart:(CGPoint)arg1 length:(double)arg2 color:(CGColorRef)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 ;
-(int)adornmentLocation;
-(void)dealloc;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)color;
-(CGPoint)start;
-(void)setStart:(CGPoint)arg1 ;
-(double)thickness;
-(id<TSKCGColorProvider>)colorProvider;
-(BOOL)isWhitespace;
-(unsigned long long)lineCount;
-(int)underline;
-(BOOL)merge:(id)arg1 ;
@end

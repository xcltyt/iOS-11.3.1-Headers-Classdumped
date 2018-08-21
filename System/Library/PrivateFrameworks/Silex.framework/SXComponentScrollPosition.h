/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition {

	NSString* _componentIdentifier;
	double _relativePageOffset;
	double _canvasWidth;

}

@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) double relativePageOffset;                   //@synthesize relativePageOffset=_relativePageOffset - In the implementation block
@property (assign,nonatomic) double canvasWidth;                          //@synthesize canvasWidth=_canvasWidth - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setRelativePageOffset:(double)arg1 ;
-(void)setCanvasWidth:(double)arg1 ;
-(double)canvasWidth;
-(double)relativePageOffset;
@end

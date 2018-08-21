/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSDBezierPath* mBezierPath;

}

@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) TSDBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)dealloc;
-(TSDBezierPath *)bezierPath;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setBezierPath:(TSDBezierPath *)arg1 ;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
@end

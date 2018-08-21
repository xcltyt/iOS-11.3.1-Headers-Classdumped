/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/ReplayKitModule.bundle/ReplayKitModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding> {

	double _clipDuration;
	NSDictionary* _videoCompressionProperties;

}

@property (assign,nonatomic) double clipDuration;                                    //@synthesize clipDuration=_clipDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * videoCompressionProperties;              //@synthesize videoCompressionProperties=_videoCompressionProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)videoCompressionProperties;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)clipDuration;
-(void)setClipDuration:(double)arg1 ;
-(void)setVideoCompressionProperties:(NSDictionary *)arg1 ;
@end

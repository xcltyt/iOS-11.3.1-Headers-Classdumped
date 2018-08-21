/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	UIEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;

}
-(id)init;
-(void)layoutSublayers;
-(id)initWithTraitCollection:(id)arg1 opaque:(BOOL)arg2 ;
-(CGRect)textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged {

	BOOL _shouldIgnoreTextInputEditor;

}

@property (assign,nonatomic) BOOL shouldIgnoreTextInputEditor;              //@synthesize shouldIgnoreTextInputEditor=_shouldIgnoreTextInputEditor - In the implementation block
+(id)sharedRangedMagnifier;
-(void)dealloc;
-(double)currentOffset;
-(void)remove;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(void)updateFrame;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(id)underlayImageName;
-(id)overlayImageName;
-(id)maskImageName;
-(id)initWithDefaultFrame;
-(void)setShouldIgnoreTextInputEditor:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTextInputEditor;
@end

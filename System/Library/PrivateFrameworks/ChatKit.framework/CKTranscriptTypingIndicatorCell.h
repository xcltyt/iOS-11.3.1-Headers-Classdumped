/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)startPulseAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(CKTypingView *)typingView;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
@end

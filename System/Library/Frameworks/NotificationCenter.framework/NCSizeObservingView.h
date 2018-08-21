/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;
@interface NCSizeObservingView : UIView {

	BOOL _delegateInterestedInSizeChanges;
	id<NCSizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id<NCSizeObservingViewDelegate>)delegate;
-(void)setDelegate:(id<NCSizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
@end

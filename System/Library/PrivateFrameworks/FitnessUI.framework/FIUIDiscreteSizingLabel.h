/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;
@interface FIUIDiscreteSizingLabel : UILabel {

	id<FIUIDiscreteSizingLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIUIDiscreteSizingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FIUIDiscreteSizingLabelDelegate>)delegate;
-(void)setDelegate:(id<FIUIDiscreteSizingLabelDelegate>)arg1 ;
-(void)setText:(id)arg1 ;
@end

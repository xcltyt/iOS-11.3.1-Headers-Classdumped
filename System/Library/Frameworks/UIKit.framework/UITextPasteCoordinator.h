/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;
@class NSMutableArray, NSObject;

@interface UITextPasteCoordinator : NSObject {

	NSMutableArray* _items;
	NSObject*<OS_dispatch_group> _wait;
	id<UITextPasteCoordinatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<UITextPasteCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UITextPasteCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(BOOL)performBlockingWait:(double)arg1 ;
-(void)_determineFinished;
-(void)_finish;
-(void)setResult:(id)arg1 forItem:(id)arg2 ;
@end

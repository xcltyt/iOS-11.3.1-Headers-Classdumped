/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITextRange, NSAttributedString;


@protocol UITextPasteSession <NSObject>
@property (nonatomic,readonly) UITextRange * range; 
@property (getter=isPastingBlocked,nonatomic,readonly) BOOL pastingBlocked; 
@property (nonatomic,readonly) NSAttributedString * pasteResult; 
@property (assign,nonatomic,__weak) id<UITextPasteSessionDelegate> delegate; 
@required
-(id<UITextPasteSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UITextRange *)range;
-(BOOL)isPastingBlocked;
-(NSAttributedString *)pasteResult;
-(void)pasteWithAnimator:(id)arg1;
-(id)positionedPasteResult;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UITextRange, NSAttributedString;


@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property (nonatomic,readonly) NSArray * sourceRanges; 
@property (nonatomic,readonly) UITextRange * targetRange; 
@property (nonatomic,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(unsigned long long)operation;
-(NSAttributedString *)text;
-(UITextRange *)targetRange;
-(NSArray *)sourceRanges;

@end

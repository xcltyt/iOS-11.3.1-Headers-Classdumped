/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITraitCollection, UIColor;


@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>
@property (retain) UITraitCollection * traitCollection; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
@property (readonly) UIView*<UIActionSheetPresentationControllerDismissActionView> dismissActionView; 
@required
-(double)cornerRadius;
-(UITraitCollection *)traitCollection;
-(UIEdgeInsets)contentInsets;
-(void)setTraitCollection:(id)arg1;
-(UIView*<UIActionSheetPresentationControllerDismissActionView>)dismissActionView;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;

@end

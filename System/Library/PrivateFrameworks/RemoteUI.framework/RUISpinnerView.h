/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class UIView, UIActivityIndicatorView, UILabel, RUIHeaderView, RemoteUISectionFooter, RUIObjectModel, UIColor, RUIHeaderElement, RUIFooterElement;

@interface RUISpinnerView : RUIElement {

	UIView* _view;
	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	RUIHeaderView* _headerView;
	RemoteUISectionFooter* _footerView;
	RUIObjectModel* _objectModel;
	UIColor* _spinnerColor;
	RUIHeaderElement* _header;
	RUIFooterElement* _footer;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                           //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (nonatomic,retain) RUIHeaderElement * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUIFooterElement * footer;                        //@synthesize footer=_footer - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(RUIHeaderElement *)header;
-(RUIFooterElement *)footer;
-(void)setFooter:(RUIFooterElement *)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)viewDidLayout;
-(RUIObjectModel *)objectModel;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
-(id)spinnerView;
@end

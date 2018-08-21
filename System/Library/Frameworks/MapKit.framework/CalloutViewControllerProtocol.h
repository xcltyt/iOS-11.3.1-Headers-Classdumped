/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol CalloutViewControllerProtocol <NSObject>
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@required
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(id)arg1;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2;
-(void)setLeftView:(id)arg1;
-(void)setRightView:(id)arg1;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(NSString *)calloutSubtitle;
-(void)setCalloutSubtitle:(id)arg1;
-(UIView *)detailView;
-(void)setDetailView:(id)arg1;

@end

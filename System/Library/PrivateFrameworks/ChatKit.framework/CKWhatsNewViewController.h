/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CKWelcomeViewDelegate.h>

@protocol CKWhatsNewViewControllerDelegate;
@class CKWelcomeView, UILabel, NSLayoutConstraint, NSString;

@interface CKWhatsNewViewController : UIViewController <CKWelcomeViewDelegate> {

	id<CKWhatsNewViewControllerDelegate> _delegate;
	unsigned long long _whatsNewLayout;
	CKWelcomeView* _welcomeView;
	UILabel* _bulletPointOneSymbolLabel;
	UILabel* _bulletPointTwoSymbolLabel;
	UILabel* _bulletPointThreeSymbolLabel;
	UILabel* _bulletPointFourSymbolLabel;
	UILabel* _bulletPointOneTextLabel;
	UILabel* _bulletPointTwoTextLabel;
	UILabel* _bulletPointThreeTextLabel;
	UILabel* _bulletPointFourTextLabel;
	UILabel* _paragraphTextLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _paragraphTextLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _descriptionLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _descriptionLabelLastBaselineAnchorLayoutConstraint;
	double _bulletImageViewHeightAnchorLayoutConstraintConstant;
	double _bulletImageViewWidthAnchorLayoutConstraintConstant;

}

@property (nonatomic,readonly) unsigned long long whatsNewLayout;                                                            //@synthesize whatsNewLayout=_whatsNewLayout - In the implementation block
@property (nonatomic,readonly) CKWelcomeView * welcomeView;                                                                  //@synthesize welcomeView=_welcomeView - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointOneSymbolLabel;                                                          //@synthesize bulletPointOneSymbolLabel=_bulletPointOneSymbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointTwoSymbolLabel;                                                          //@synthesize bulletPointTwoSymbolLabel=_bulletPointTwoSymbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointThreeSymbolLabel;                                                        //@synthesize bulletPointThreeSymbolLabel=_bulletPointThreeSymbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointFourSymbolLabel;                                                         //@synthesize bulletPointFourSymbolLabel=_bulletPointFourSymbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointOneTextLabel;                                                            //@synthesize bulletPointOneTextLabel=_bulletPointOneTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointTwoTextLabel;                                                            //@synthesize bulletPointTwoTextLabel=_bulletPointTwoTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointThreeTextLabel;                                                          //@synthesize bulletPointThreeTextLabel=_bulletPointThreeTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bulletPointFourTextLabel;                                                           //@synthesize bulletPointFourTextLabel=_bulletPointFourTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * paragraphTextLabel;                                                                 //@synthesize paragraphTextLabel=_paragraphTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint;                //@synthesize bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint;                //@synthesize bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint;              //@synthesize bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint;               //@synthesize bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paragraphTextLabelFirstBaselineAnchorLayoutConstraint;                     //@synthesize paragraphTextLabelFirstBaselineAnchorLayoutConstraint=_paragraphTextLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * descriptionLabelFirstBaselineAnchorLayoutConstraint;                       //@synthesize descriptionLabelFirstBaselineAnchorLayoutConstraint=_descriptionLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * descriptionLabelLastBaselineAnchorLayoutConstraint;                        //@synthesize descriptionLabelLastBaselineAnchorLayoutConstraint=_descriptionLabelLastBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double bulletPointSymbolLeadingAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double bulletPointTextTrailingAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double bulletImageViewHeightAnchorLayoutConstraintConstant;                                   //@synthesize bulletImageViewHeightAnchorLayoutConstraintConstant=_bulletImageViewHeightAnchorLayoutConstraintConstant - In the implementation block
@property (nonatomic,readonly) double bulletImageViewWidthAnchorLayoutConstraintConstant;                                    //@synthesize bulletImageViewWidthAnchorLayoutConstraintConstant=_bulletImageViewWidthAnchorLayoutConstraintConstant - In the implementation block
@property (nonatomic,readonly) double bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double paragraphTextLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double descriptionLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double descriptionLabelLastBaselineAnchorLayoutConstraintConstant; 
@property (assign,nonatomic,__weak) id<CKWhatsNewViewControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKWhatsNewViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKWhatsNewViewControllerDelegate>)arg1 ;
-(long long)type;
-(void)loadView;
-(void)updateConstraints;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKWelcomeView *)welcomeView;
-(unsigned long long)whatsNewLayout;
-(void)layoutForSurf;
-(void)layoutForMOC;
-(void)handleUIDeviceOrientationDidChangeNotification:(id)arg1 ;
-(void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(UILabel *)bulletPointOneSymbolLabel;
-(UILabel *)bulletPointTwoSymbolLabel;
-(UILabel *)bulletPointThreeSymbolLabel;
-(UILabel *)bulletPointFourSymbolLabel;
-(UILabel *)bulletPointOneTextLabel;
-(NSLayoutConstraint *)bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint;
-(double)bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraintConstant;
-(UILabel *)bulletPointTwoTextLabel;
-(NSLayoutConstraint *)bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint;
-(double)bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraintConstant;
-(UILabel *)bulletPointThreeTextLabel;
-(NSLayoutConstraint *)bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint;
-(double)bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraintConstant;
-(UILabel *)bulletPointFourTextLabel;
-(NSLayoutConstraint *)bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint;
-(double)bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraintConstant;
-(UILabel *)paragraphTextLabel;
-(NSLayoutConstraint *)paragraphTextLabelFirstBaselineAnchorLayoutConstraint;
-(double)paragraphTextLabelFirstBaselineAnchorLayoutConstraintConstant;
-(UILabel *)descriptionLabel;
-(NSLayoutConstraint *)descriptionLabelFirstBaselineAnchorLayoutConstraint;
-(double)descriptionLabelFirstBaselineAnchorLayoutConstraintConstant;
-(NSLayoutConstraint *)descriptionLabelLastBaselineAnchorLayoutConstraint;
-(double)descriptionLabelLastBaselineAnchorLayoutConstraintConstant;
-(id)bulletPointSymbolLabel;
-(id)bulletPointTextLabel;
-(double)bulletPointSymbolLeadingAnchorLayoutConstraintConstant;
-(double)bulletPointTextTrailingAnchorLayoutConstraintConstant;
-(void)setBulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParagraphTextLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDescriptionLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDescriptionLabelLastBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)welcomeViewCancelButtonTapped:(id)arg1 ;
-(void)welcomeViewConfirmButtonTapped:(id)arg1 ;
-(double)bulletImageViewHeightAnchorLayoutConstraintConstant;
-(double)bulletImageViewWidthAnchorLayoutConstraintConstant;
-(id)initWithLayout:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSSetupPageViewController.h>

@class NSString, NSArray, UIImage, UIScrollView, UIImageView, UILabel, NSMutableArray, UIView;

@interface BPSAboutDetailViewController : BPSSetupPageViewController {

	NSString* _headerString;
	NSString* _footerString;
	NSArray* _bullets;
	NSArray* _paragraphs;
	NSString* _titleString;
	UIImage* _headerGlyph;
	UIScrollView* _scrollView;
	UIImageView* _headerGlyphImageView;
	UILabel* _headerLabel;
	UILabel* _footerLabel;
	NSMutableArray* _bulletLabels;
	NSMutableArray* _paragraphLabels;
	UIView* _lastViewInContentView;
	/*^block*/id _onDismiss;

}

@property (nonatomic,retain) UIScrollView * scrollView;                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * headerGlyphImageView;              //@synthesize headerGlyphImageView=_headerGlyphImageView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                           //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                           //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletLabels;                   //@synthesize bulletLabels=_bulletLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * paragraphLabels;                //@synthesize paragraphLabels=_paragraphLabels - In the implementation block
@property (nonatomic,retain) UIView * lastViewInContentView;                  //@synthesize lastViewInContentView=_lastViewInContentView - In the implementation block
@property (nonatomic,copy) id onDismiss;                                      //@synthesize onDismiss=_onDismiss - In the implementation block
@property (nonatomic,retain) NSString * headerString;                         //@synthesize headerString=_headerString - In the implementation block
@property (nonatomic,retain) NSString * footerString;                         //@synthesize footerString=_footerString - In the implementation block
@property (nonatomic,retain) NSArray * bullets;                               //@synthesize bullets=_bullets - In the implementation block
@property (nonatomic,retain) NSArray * paragraphs;                            //@synthesize paragraphs=_paragraphs - In the implementation block
@property (nonatomic,retain) NSString * titleString;                          //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) UIImage * headerGlyph;                           //@synthesize headerGlyph=_headerGlyph - In the implementation block
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)paragraphs;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(UIImage *)headerGlyph;
-(NSArray *)bullets;
-(void)presentWithController:(id)arg1 onDismiss:(/*^block*/id)arg2 ;
-(BOOL)contentViewIsInAdjustedScrollView;
-(void)setBullets:(NSArray *)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(void)setHeaderGlyph:(UIImage *)arg1 ;
-(UIImageView *)headerGlyphImageView;
-(void)setHeaderGlyphImageView:(UIImageView *)arg1 ;
-(NSMutableArray *)bulletLabels;
-(void)setBulletLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paragraphLabels;
-(void)setParagraphLabels:(NSMutableArray *)arg1 ;
-(UIView *)lastViewInContentView;
-(void)setLastViewInContentView:(UIView *)arg1 ;
-(id)onDismiss;
-(void)setOnDismiss:(id)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)presentWithController:(id)arg1 ;
-(void)donePressed;
-(NSString *)headerString;
-(NSString *)footerString;
-(void)setHeaderString:(NSString *)arg1 ;
-(void)setFooterString:(NSString *)arg1 ;
@end

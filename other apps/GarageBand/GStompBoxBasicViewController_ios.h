//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPlugInCocoaViewController.h"

@class MAIndexedImageView, MAUIRoundSlider, NSDictionary, UIButton, UIImageView, UILabel;

@interface GStompBoxBasicViewController_ios : GPlugInCocoaViewController
{
    NSDictionary *_stompBoxInfosCache;
    UIImageView *_backgroundImageView;
    UIButton *_onOffButton;
    MAUIRoundSlider *_slider1;
    MAUIRoundSlider *_slider2;
    MAUIRoundSlider *_slider3;
    MAUIRoundSlider *_slider4;
    UIButton *_syncButton;
    UIButton *_genericButton1;
    UIButton *_genericButton2;
    UIButton *_genericButton3;
    UILabel *_genericLabel1;
    UILabel *_genericLabel2;
    UILabel *_genericLabel3;
    UILabel *_genericLabel4;
    UILabel *_genericLabel5;
    UILabel *_genericLabel6;
    UILabel *_genericLabel7;
    UILabel *_genericLabel8;
    UILabel *_genericLabel9;
    UILabel *_genericLabel10;
    UILabel *_genericLabel11;
    UILabel *_nameSubtitle;
    MAIndexedImageView *_onOffIndicatorImageView;
}

+ (id)nibName;
+ (id)editorInfoKey_editorID;
+ (id)editorInfoKey_description;
+ (id)editorInfos;
@property(retain) MAIndexedImageView *onOffIndicatorImageView; // @synthesize onOffIndicatorImageView=_onOffIndicatorImageView;
@property(retain) UILabel *nameSubtitle; // @synthesize nameSubtitle=_nameSubtitle;
@property(retain) UILabel *genericLabel11; // @synthesize genericLabel11=_genericLabel11;
@property(retain) UILabel *genericLabel10; // @synthesize genericLabel10=_genericLabel10;
@property(retain) UILabel *genericLabel9; // @synthesize genericLabel9=_genericLabel9;
@property(retain) UILabel *genericLabel8; // @synthesize genericLabel8=_genericLabel8;
@property(retain) UILabel *genericLabel7; // @synthesize genericLabel7=_genericLabel7;
@property(retain) UILabel *genericLabel6; // @synthesize genericLabel6=_genericLabel6;
@property(retain) UILabel *genericLabel5; // @synthesize genericLabel5=_genericLabel5;
@property(retain) UILabel *genericLabel4; // @synthesize genericLabel4=_genericLabel4;
@property(retain) UILabel *genericLabel3; // @synthesize genericLabel3=_genericLabel3;
@property(retain) UILabel *genericLabel2; // @synthesize genericLabel2=_genericLabel2;
@property(retain) UILabel *genericLabel1; // @synthesize genericLabel1=_genericLabel1;
@property(retain) UIButton *genericButton3; // @synthesize genericButton3=_genericButton3;
@property(retain) UIButton *genericButton2; // @synthesize genericButton2=_genericButton2;
@property(retain) UIButton *genericButton1; // @synthesize genericButton1=_genericButton1;
@property(retain) UIButton *syncButton; // @synthesize syncButton=_syncButton;
@property(retain) MAUIRoundSlider *slider4; // @synthesize slider4=_slider4;
@property(retain) MAUIRoundSlider *slider3; // @synthesize slider3=_slider3;
@property(retain) MAUIRoundSlider *slider2; // @synthesize slider2=_slider2;
@property(retain) MAUIRoundSlider *slider1; // @synthesize slider1=_slider1;
@property(retain) UIButton *onOffButton; // @synthesize onOffButton=_onOffButton;
@property(retain) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)setParameter:(long long)arg1 toPositionValue:(long long)arg2;
- (id)stompBoxInfo;
- (void)_clearStompBoxInfoCache;
- (void)hideLocalizableLabelsForScreenshoting:(id)arg1;
- (void)onViewDidLoad;
- (void)dealloc;
- (id)initWithPlugIn:(struct MADSPUserPlugIn *)arg1 editorID:(id)arg2 communicationChannel:(int)arg3 userData:(void *)arg4;
- (id)localizedName;
- (id)assetMappingID;

@end


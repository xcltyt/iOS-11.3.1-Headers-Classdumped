//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GStompBoxBasicViewController_ios.h"

@class MAUITickMarkSlider;

@interface GStompBoxEchoViewController_ios : GStompBoxBasicViewController_ios
{
    MAUITickMarkSlider *_toneCutSlider;
}

+ (id)nibName;
+ (id)editorInfoKey_editorID;
+ (id)editorInfoKey_description;
@property(retain) MAUITickMarkSlider *toneCutSlider; // @synthesize toneCutSlider=_toneCutSlider;
- (void)setupTickMarkSlider;
- (void)onViewDidLoad;
- (id)localizedName;
- (id)assetMappingID;

@end


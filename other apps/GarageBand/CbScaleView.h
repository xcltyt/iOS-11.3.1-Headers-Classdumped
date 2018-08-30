//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CbScaleBackgroundView, CbScaleDescriptionView, UIImageView, UILabel, UITableView;

@interface CbScaleView : UIView
{
    CbScaleBackgroundView *backgroundView;
    CbScaleDescriptionView *descriptionView;
    struct CGRect normalTableViewFrame;
    UILabel *scaleLabel;
    UIImageView *scaleIcon;
    UITableView *scaleTableView;
    id touchDelegate;
}

@property(nonatomic) id touchDelegate; // @synthesize touchDelegate;
@property(readonly, retain, nonatomic) UITableView *scaleTableView; // @synthesize scaleTableView;
@property(nonatomic) UIImageView *scaleIcon; // @synthesize scaleIcon;
@property(nonatomic) UILabel *scaleLabel; // @synthesize scaleLabel;
- (void).cxx_destruct;
- (void)setAssetSet:(id)arg1;
- (void)handleKeyChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupTableView;

@end


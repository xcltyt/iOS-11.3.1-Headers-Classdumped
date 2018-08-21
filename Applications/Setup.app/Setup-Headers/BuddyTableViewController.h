//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BFFLinkLabelFooterView, BFFPaneHeaderView, NSAttributedString, NSString, UITableView, UIView;

@interface BuddyTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_containerView;
    UITableView *_tableView;
    BFFPaneHeaderView *_headerView;
    NSString *_titleText;
    NSString *_subTitleText;
    NSAttributedString *_attributedSubTitleText;
    BFFLinkLabelFooterView *_footerView;
}

@property(readonly, nonatomic) BFFLinkLabelFooterView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSAttributedString *attributedSubTitleText; // @synthesize attributedSubTitleText=_attributedSubTitleText;
@property(copy, nonatomic) NSString *subTitleText; // @synthesize subTitleText=_subTitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)useScreenFooter;
- (_Bool)useScreenHeader;
- (_Bool)useBottomEdgeInsetForTableView;
- (_Bool)isTitleAlignedByLastBaseline;
- (void)updateHeaderView;
@property(readonly, nonatomic) BFFPaneHeaderView *headerView;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


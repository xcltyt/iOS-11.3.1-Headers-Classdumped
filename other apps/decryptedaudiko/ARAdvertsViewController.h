//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPTableViewAdPlacer, UITableView;

@interface ARAdvertsViewController : UIViewController
{
    UITableView *_tableView;
    MPTableViewAdPlacer *_adPlacer;
}

@property(retain, nonatomic) MPTableViewAdPlacer *adPlacer; // @synthesize adPlacer=_adPlacer;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewDidLoad;

@end

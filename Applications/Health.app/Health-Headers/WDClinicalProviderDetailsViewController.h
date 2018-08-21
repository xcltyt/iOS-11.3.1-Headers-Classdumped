//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "WDUserActivityResponder.h"

@class HKClinicalProvider, HKClinicalProviderSearchResult, NSArray, WDProfile, WDSpinnerView;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <WDUserActivityResponder>
{
    WDProfile *_profile;
    HKClinicalProviderSearchResult *_searchResult;
    long long _fetchesInFlight;
    HKClinicalProvider *_provider;
    NSArray *_connectedGateways;
    NSArray *_unconnectedGateways;
    NSArray *_sections;
    WDSpinnerView *_spinnerView;
}

+ (id)providerCache;
@property(retain, nonatomic) WDSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *unconnectedGateways; // @synthesize unconnectedGateways=_unconnectedGateways;
@property(retain, nonatomic) NSArray *connectedGateways; // @synthesize connectedGateways=_connectedGateways;
@property(retain, nonatomic) HKClinicalProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) long long fetchesInFlight; // @synthesize fetchesInFlight=_fetchesInFlight;
@property(retain, nonatomic) HKClinicalProviderSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_postAWDMetricForStartingSafariSession;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_presentError:(id)arg1;
- (id)_gatewayAtIndexPath:(id)arg1;
- (id)_orderGatewaysForDisplay:(id)arg1;
- (void)_computeSections;
- (void)removeSpinnerIfNecessary;
- (void)_fetchDetailsForSearchResult:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithProfile:(id)arg1 searchResult:(id)arg2;

@end


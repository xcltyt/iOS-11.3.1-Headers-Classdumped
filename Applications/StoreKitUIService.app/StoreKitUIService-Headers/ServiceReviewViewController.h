//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SKUIConfigurationPreloader, SKUIReviewInAppController;

@interface ServiceReviewViewController : UIViewController
{
    SKUIConfigurationPreloader *_configurationPreloader;
    SKUIReviewInAppController *_reviewInAppController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(retain, nonatomic) SKUIReviewInAppController *reviewInAppController; // @synthesize reviewInAppController=_reviewInAppController;
@property(retain, nonatomic) SKUIConfigurationPreloader *configurationPreloader; // @synthesize configurationPreloader=_configurationPreloader;
- (void).cxx_destruct;
- (id)_clientViewControllerProxy;
- (void)_loadDidFailWithError:(id)arg1;
- (id)_iconForApplication:(id)arg1;
- (id)_reviewInAppConfigurationWithParameters:(id)arg1 clientContext:(id)arg2;
- (void)finishImmediately:(id)arg1;
- (void)setupWithParameters:(id)arg1;

@end


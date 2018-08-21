//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSSet;

@interface DataActivationViewController : UINavigationController
{
    _Bool _currentlyPinningInputViews;
    _Bool _shouldPinInputViews;
    NSSet *_popPassthroughViewControllerClasses;
}

@property(nonatomic) _Bool shouldPinInputViews; // @synthesize shouldPinInputViews=_shouldPinInputViews;
@property(copy, nonatomic) NSSet *popPassthroughViewControllerClasses; // @synthesize popPassthroughViewControllerClasses=_popPassthroughViewControllerClasses;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)pinInputViewsIfNeeded;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (_Bool)_shouldAutoPinInputViewsForModalFormSheet;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


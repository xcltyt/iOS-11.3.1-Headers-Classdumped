//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface PHCarPlayGenericViewController : UIViewController
{
    _Bool _respondsToEventsWhileInCall;
}

@property _Bool respondsToEventsWhileInCall; // @synthesize respondsToEventsWhileInCall=_respondsToEventsWhileInCall;
- (void)hardwareControlEventNotification:(id)arg1;
- (_Bool)shouldRespondToHardwareControlEvent;
@property(readonly) _Bool viewIsInAppearedState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


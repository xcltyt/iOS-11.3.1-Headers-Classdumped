//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

#import "UIActivityItemSource.h"
#import "UIActivityItemSubjectSource.h"

@class NSString, SSSScreenshot;

@interface SSSScreenshotItemProvider : UIActivityItemProvider <UIActivityItemSource, UIActivityItemSubjectSource>
{
    SSSScreenshot *_screenshot;
}

@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)item;
- (id)initWithScreenshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


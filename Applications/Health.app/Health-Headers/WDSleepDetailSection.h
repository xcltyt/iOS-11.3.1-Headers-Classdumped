//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface WDSleepDetailSection : NSObject
{
    NSString *_headerText;
    NSAttributedString *_attributedDetailText;
}

+ (id)sectionWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;
+ (id)sectionWithHeaderText:(id)arg1 detailText:(id)arg2;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (id)initWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;
- (id)init;

@end


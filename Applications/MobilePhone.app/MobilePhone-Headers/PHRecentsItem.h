//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString, UIImage;

@interface PHRecentsItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    UIImage *_image;
    NSString *_localizedCount;
    NSString *_localizedSubtitle;
    NSString *_localizedTitle;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedCount; // @synthesize localizedCount=_localizedCount;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;

@end


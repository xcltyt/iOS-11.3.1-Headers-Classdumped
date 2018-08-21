//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebBookmark;

@interface PendingReadingListItem : NSObject
{
    WebBookmark *_bookmark;
    id <ReadingListMetadataProvider> _provider;
}

+ (id)itemWithBookmark:(id)arg1 provider:(id)arg2;
@property(readonly, nonatomic) id <ReadingListMetadataProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;

@end


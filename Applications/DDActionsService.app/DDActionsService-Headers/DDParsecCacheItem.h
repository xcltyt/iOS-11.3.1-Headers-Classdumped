//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFSearchResult;

@interface DDParsecCacheItem : NSObject
{
    id _item;
    SFSearchResult *_result;
    struct CGSize _cardSize;
}

@property struct CGSize cardSize; // @synthesize cardSize=_cardSize;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) id item; // @synthesize item=_item;
- (void).cxx_destruct;

@end


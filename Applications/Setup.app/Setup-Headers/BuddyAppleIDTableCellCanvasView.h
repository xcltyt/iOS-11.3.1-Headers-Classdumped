//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface BuddyAppleIDTableCellCanvasView : UIView
{
    unsigned long long _columnCount;
    NSMutableArray *_serviceInfoArray;
}

@property(readonly, nonatomic) NSMutableArray *serviceInfoArray; // @synthesize serviceInfoArray=_serviceInfoArray;
@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 columnCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MADSPPlugInUserDataObjc-Protocol.h"

@class NSMutableArray, NSString;

@interface MADSPPlugInUserDataObjc_Array : NSObject <MADSPPlugInUserDataObjc>
{
    NSMutableArray *_array;
}

+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithUserData:(void *)arg1;
@property(retain) NSMutableArray *array; // @synthesize array=_array;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)containsValue:(id)arg1;
- (void)appendValue:(id)arg1;
- (void)appendObjectsFromArray:(id)arg1;
- (_Bool)isValid;
- (void *)userData;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithUserData:(void *)arg1;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

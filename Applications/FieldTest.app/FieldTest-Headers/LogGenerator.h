//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LogGenerator : NSObject
{
}

+ (id)generatorFromTechnology:(id)arg1;
+ (void)updateHistoryInState:(id)arg1;
- (id)getSaveContentsFromState:(id)arg1;
- (id)getStartCommand;
- (id)generateLogUsingState:(id)arg1;
- (void)updateState:(id)arg1 withData:(id)arg2;
- (id)init;

@end


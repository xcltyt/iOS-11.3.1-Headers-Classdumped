//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface FMIPEntity : NSManagedObject
{
}

- (void)initalizeTransients;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)prepareForDeletion;
- (void)didSave;
- (void)willSave;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(id)newObjectUUIDForObject:(id)arg1;
-(void)beginIgnoringModificationsForObject:(id)arg1;
-(void)endIgnoringModificationsForObject:(id)arg1;
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
-(BOOL)canSetObjectUUIDForObject:(id)arg1;
-(id)objectUUIDMap;
-(BOOL)isObjectInDocument:(id)arg1;
-(TSPObjectContext *)context;
-(long long)modifyObjectTokenForNewObject;
-(long long)newObjectIdentifier;

@end

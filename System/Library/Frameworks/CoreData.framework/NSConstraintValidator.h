/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel;

@interface NSConstraintValidator : NSObject {

	NSManagedObjectModel* _model;
	id* _cachesByEntity;

}
-(void)registerObjects:(id)arg1 ;
-(id)validateForSave;
-(void)registerObject:(id)arg1 ;
-(id)validateCaches;
-(void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2 ;
-(void)dealloc;
-(void)reset;
-(id)initWithManagedObjectModel:(id)arg1 ;
@end

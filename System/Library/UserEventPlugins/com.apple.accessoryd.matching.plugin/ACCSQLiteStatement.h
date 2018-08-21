/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UserEventPlugins/com.apple.accessoryd.matching.plugin/com.apple.accessoryd.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.accessoryd.matching/com.apple.accessoryd.matching-Structs.h>
@class ACCSQLite, NSString, NSMutableArray;

@interface ACCSQLiteStatement : NSObject {

	ACCSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;
	BOOL _reset;
	NSMutableArray* _temporaryBoundObjects;

}

@property (nonatomic,retain) NSMutableArray * temporaryBoundObjects;                //@synthesize temporaryBoundObjects=_temporaryBoundObjects - In the implementation block
@property (setter=QLite,nonatomic,__weak,readonly) ACCSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                            //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                              //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) BOOL reset;                             //@synthesize reset=_reset - In the implementation block
-(BOOL)step;
-(sqlite3_stmtRef)handle;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)reset;
-(id)allObjects;
-(BOOL)isReset;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(void)finalizeStatement;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValues:(id)arg1 ;
-(id)allObjectsByColumnName;
-(void)resetAfterStepError;
-(void)bindNullAtIndex:(unsigned long long)arg1 ;
-(void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)retainedTemporaryBoundObject:(id)arg1 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(int)columnTypeAtIndex:(unsigned long long)arg1 ;
-(id)blobAtIndex:(unsigned long long)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(ACCSQLite *)SQLite;
-(NSString *)SQL;
-(NSMutableArray *)temporaryBoundObjects;
-(void)setTemporaryBoundObjects:(NSMutableArray *)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnCount;
-(void)setReset:(BOOL)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
@end

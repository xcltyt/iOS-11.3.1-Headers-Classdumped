/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class TSWPStorage, NSArray;

@interface TSWPStorageChildEnumerator : NSEnumerator {

	unsigned _index;
	TSWPStorage* _storage;
	NSArray* _charOffsetArray;

}

@property (nonatomic,retain) TSWPStorage * storage;                  //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSArray * charOffsetArray;              //@synthesize charOffsetArray=_charOffsetArray - In the implementation block
-(NSArray *)charOffsetArray;
-(void)setCharOffsetArray:(NSArray *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)nextObject;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)index;
-(TSWPStorage *)storage;
-(void)setStorage:(TSWPStorage *)arg1 ;
@end

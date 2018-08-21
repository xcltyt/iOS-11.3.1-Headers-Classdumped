/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSKCOIntermediateOperationEnumerator;
@class TSKCOOperationTransformHistory, TSPObject, NSObject;

@interface TSKCOOperationTransformer : NSObject <NSCopying> {

	BOOL _isHigherPriority;
	TSKCOOperationTransformHistory* _history;
	TSPObject* _delegate;
	NSObject*<TSKCOIntermediateOperationEnumerator> _enumerator;

}

@property (assign,nonatomic,__weak) TSPObject * delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasOperations; 
@property (nonatomic,readonly) NSObject*<TSKCOIntermediateOperationEnumerator> enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
-(void)saveToArchiver:(id)arg1 message:(OperationTransformer*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const OperationTransformer*)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 ;
-(id)transformIdPlacementBaseOperation:(id)arg1 ;
-(void)appendOperation:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 ;
-(id)transformReplaceRangeOperation:(id)arg1 ;
-(id)transformOperations:(id)arg1 ;
-(NSObject*<TSKCOIntermediateOperationEnumerator>)enumerator;
-(TSPObject *)delegate;
-(void)setDelegate:(TSPObject *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOperations;
@end

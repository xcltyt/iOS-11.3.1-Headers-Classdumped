/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject {

	TSTExpressionNode* mExpressionNode;
	unsigned long long mParenNestingLevel;
	unsigned long long mArgumentIndex;

}

@property (nonatomic,readonly) TSTExpressionNode * expressionNode; 
@property (nonatomic,readonly) unsigned long long parenNestingLevel; 
@property (nonatomic,readonly) unsigned long long argumentIndex; 
+(id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 ;
+(id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3 ;
-(TSTExpressionNode *)expressionNode;
-(id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3 ;
-(id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 ;
-(unsigned long long)parenNestingLevel;
-(unsigned long long)argumentIndex;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
@end

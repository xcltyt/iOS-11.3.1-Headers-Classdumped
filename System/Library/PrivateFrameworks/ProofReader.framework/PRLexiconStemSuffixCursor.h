/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProofReader/PRLexiconCursor.h>

@class NSString;

@interface PRLexiconStemSuffixCursor : PRLexiconCursor {

	NSString* _stem;
	NSString* _abbreviation;
	unsigned _stemTokenID;
	double _stemProbability;
	double _abbreviationProbability;

}
-(id)initWithLexicon:(id)arg1 stem:(id)arg2 tokenID:(unsigned)arg3 abbreviation:(id)arg4 stemProbability:(double)arg5 ;
-(void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end

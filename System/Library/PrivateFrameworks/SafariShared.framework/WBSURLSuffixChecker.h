/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {

	SCD_Struct_WB72* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)initWithSuffixes:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB74*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
@end

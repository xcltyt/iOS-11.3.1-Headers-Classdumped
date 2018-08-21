/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCharacterSet;

@interface PSITokenizer : NSObject {

	NSCharacterSet* _excludedSingleCharacterSet;
	void* _tokenizer;
	CFStringTokenizerRef _nameTokenizer;

}
-(id)init;
-(void)dealloc;
-(void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(tokenOutput_t*)arg3 ;
-(id)normalizeString:(id)arg1 includeWildcard:(BOOL)arg2 ;
-(void)tokenizePersonName:(id)arg1 tokenOutput:(tokenOutput_t*)arg2 ;
-(id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3 ;
@end

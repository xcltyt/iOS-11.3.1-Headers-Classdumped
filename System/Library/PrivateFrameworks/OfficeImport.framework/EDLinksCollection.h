/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDLinksCollection : NSObject {

	NSMutableArray* mLinks;
	NSMutableArray* mReferences;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)addReference:(id)arg1 ;
-(unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2 ;
-(BOOL)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long*)arg2 lastSheetIndex:(unsigned long long*)arg3 ;
-(unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(unsigned long long)linksCount;
-(unsigned long long)indexOfFirstLinkWithType:(int)arg1 ;
-(unsigned long long)addLink:(id)arg1 ;
-(unsigned long long)referencesCount;
-(id)linkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1 ;
-(unsigned long long)indexOfReference:(id)arg1 ;
-(void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long*)arg2 nameIndex:(unsigned long long*)arg3 ;
@end

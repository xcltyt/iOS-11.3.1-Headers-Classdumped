/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPTextSource <NSObject>
@optional
-(id)substringWithRange:(NSRange)arg1;
-(void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumerateWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1;

@required
-(NSRange*)charRangeRemappedFromStorage:(NSRange)arg1;
-(BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
-(void)updateStorageChangeCount;
-(unsigned long long)length;
-(unsigned long long)changeCount;
-(id)string;
-(unsigned short)characterAtIndex:(unsigned long long)arg1;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
-(NSRange*)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4;
-(unsigned long long)storageLength;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
-(id)attachmentAtCharIndex:(unsigned long long)arg1;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(NSRange*)arg3;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
-(NSRange*)charRangeMappedToStorage:(NSRange)arg1;
-(NSRange*)charRangeMappedFromStorage:(NSRange)arg1;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(id)arg3 hyphenChar:(unsigned*)arg4;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@interface __NSCFAttributedString : NSMutableAttributedString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)length;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(void)appendAttributedString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(BOOL)_tryRetain;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
@end

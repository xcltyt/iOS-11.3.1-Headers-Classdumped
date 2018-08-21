/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression * regularExpression; 
@property (readonly) NSArray * rangeArray; 
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(NSRange)rangeWithName:(id)arg1 ;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
-(NSArray *)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(unsigned long long)resultType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSRegularExpression *)regularExpression;
@end

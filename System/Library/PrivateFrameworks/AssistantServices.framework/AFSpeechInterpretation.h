/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;

}

@property (nonatomic,copy) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)text;
-(long long)confidenceScore;
-(NSArray *)tokens;
-(long long)averageConfidenceScore;
-(long long)confidenceScoreAvg;
-(long long)confidenceScoreMax;
-(long long)confidenceScoreMin;
-(void)setTokens:(NSArray *)arg1 ;
@end

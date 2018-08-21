/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SGQPEmotivePhraseDefinition : NSObject {

	NSString* _pattern;
	NSString* _predictions;
	float _weight;
	unsigned short _phraseId;
	unsigned _matchSent : 1;
	unsigned _matchReceived : 1;
	unsigned _anchoredAtWordBoundaries : 1;
	long long _type;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL matchSent;                  //@synthesize matchSent=_matchSent - In the implementation block
@property (nonatomic,readonly) BOOL matchReceived;              //@synthesize matchReceived=_matchReceived - In the implementation block
+(id)phraseDefinitionFromRawPhrase:(id)arg1 ;
+(void)seedRng:(unsigned long long)arg1 ;
-(id)init;
-(long long)type;
-(id)initWithPattern:(id)arg1 predictions:(id)arg2 type:(long long)arg3 matchSent:(BOOL)arg4 matchReceived:(BOOL)arg5 phraseId:(unsigned long long)arg6 weight:(double)arg7 anchoredAtWordBoundaries:(BOOL)arg8 ;
-(id)randomPrediction;
-(BOOL)existsInString:(id)arg1 wordBoundaries:(id)arg2 ;
-(id)predictionWithScore:(double)arg1 ;
-(BOOL)matchSent;
-(BOOL)matchReceived;
@end

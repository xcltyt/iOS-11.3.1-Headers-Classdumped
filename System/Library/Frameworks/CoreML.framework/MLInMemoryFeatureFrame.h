/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLFeatureFrame.h>

@class NSDictionary;

@interface MLInMemoryFeatureFrame : MLFeatureFrame {

	unsigned long long _sampleCount;
	NSDictionary* _description;
	NSDictionary* _features;

}

@property (nonatomic,retain) NSDictionary * description;              //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSDictionary * features;                 //@synthesize features=_features - In the implementation block
+(id)featureFrameFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)featureFrameFromFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3 ;
+(id)featureFrameFromFeatureDictionary:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)featureCount;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSDictionary *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)sampleCount;
-(void)setDescription:(NSDictionary *)arg1 ;
-(id)featureFrameByAddingFrame:(id)arg1 error:(id*)arg2 ;
-(id)initWithFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 sampleCount:(unsigned long long)arg3 ;
-(id)subsetWithFeaturesNamed:(id)arg1 ;
-(id)sampleAtIndex:(unsigned long long)arg1 ;
-(void)setFeatures:(NSDictionary *)arg1 ;
-(NSDictionary *)features;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CSLFeature : NSObject {

	NSString* _key;
	NSString* _source;
	double _weight;

}

@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * source;              //@synthesize source=_source - In the implementation block
@property (assign) double weight;                            //@synthesize weight=_weight - In the implementation block
-(id)init;
-(NSString *)key;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setKey:(NSString *)arg1 ;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(id)initWithKey:(id)arg1 fromSource:(id)arg2 withWeight:(double)arg3 ;
@end

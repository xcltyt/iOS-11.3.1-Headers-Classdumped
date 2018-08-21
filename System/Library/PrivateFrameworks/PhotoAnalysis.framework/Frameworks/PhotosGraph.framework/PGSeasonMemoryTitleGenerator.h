/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator {

	NSString* _season;
	long long _category;

}

@property (nonatomic,retain) NSString * season;               //@synthesize season=_season - In the implementation block
@property (assign,nonatomic) long long category;              //@synthesize category=_category - In the implementation block
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(NSString *)season;
-(void)setSeason:(NSString *)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)firstAndLastMomentNodes;
-(id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(long long)arg3 ;
@end

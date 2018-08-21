/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PHAsset;

@interface PHRelatedFetchOptions : NSObject {

	BOOL _enableDiversity;
	BOOL _debugInfoEnabled;
	NSArray* _excludedAssetCollections;
	PHAsset* _referenceAsset;
	unsigned long long _fetchLimit;

}

@property (assign,getter=isDebugInfoEnabled,nonatomic) BOOL debugInfoEnabled;              //@synthesize debugInfoEnabled=_debugInfoEnabled - In the implementation block
@property (nonatomic,retain) NSArray * excludedAssetCollections;                           //@synthesize excludedAssetCollections=_excludedAssetCollections - In the implementation block
@property (nonatomic,retain) PHAsset * referenceAsset;                                     //@synthesize referenceAsset=_referenceAsset - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL enableDiversity;                                         //@synthesize enableDiversity=_enableDiversity - In the implementation block
-(NSArray *)excludedAssetCollections;
-(BOOL)isDebugInfoEnabled;
-(void)setDebugInfoEnabled:(BOOL)arg1 ;
-(void)setReferenceAsset:(PHAsset *)arg1 ;
-(BOOL)enableDiversity;
-(void)setEnableDiversity:(BOOL)arg1 ;
-(void)setExcludedAssetCollections:(NSArray *)arg1 ;
-(PHAsset *)referenceAsset;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
@end

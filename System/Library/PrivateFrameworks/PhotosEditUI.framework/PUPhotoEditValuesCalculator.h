/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class PUPhotoEditImageValues, PLPhotoEditModel, NSObject, PLEditSource;

@interface PUPhotoEditValuesCalculator : PXObservable {

	PUPhotoEditImageValues* _currentImageValues;
	PUPhotoEditImageValues* _initialImageValues;
	PLPhotoEditModel* _photoEditModelForCurrentValues;
	NSObject*<OS_dispatch_queue> _computationQueue;
	NSObject*<OS_dispatch_group> _computingValuesGroup;
	PLEditSource* _editSource;
	PLPhotoEditModel* _photoEditModel;

}

@property (nonatomic,retain) PLEditSource * editSource;                      //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) PLPhotoEditModel * photoEditModel;              //@synthesize photoEditModel=_photoEditModel - In the implementation block
@property (nonatomic,readonly) BOOL hasImageValues; 
-(id)init;
-(void)invalidate;
-(PLPhotoEditModel *)photoEditModel;
-(PLEditSource *)editSource;
-(void)setPhotoEditModel:(PLPhotoEditModel *)arg1 ;
-(id)mutableChangeObject;
-(id)autoCropValuesWithAccuracy:(long long)arg1 ;
-(void)setEditSource:(PLEditSource *)arg1 ;
-(BOOL)hasImageValues;
-(id)smartColorStatisticsWithAccuracy:(long long)arg1 ;
-(void)precomputeImageValues;
-(id)portraitValuesWithAccuracy:(long long)arg1 ;
-(void)precomputeImageValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)computeAutoEnhanceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)smartToneStatisticsWithAccuracy:(long long)arg1 ;
-(double)smartToneAutoSuggestion;
-(double)smartColorAutoSuggestion;
-(BOOL)_imageCurrentValuesCacheIsValid;
-(void)_ensureCurrentImageValuesAreComputed;
-(void)_ensureInitialImageValuesAreComputed;
-(void)precomputeImageValuesWithOptionalCompletion:(/*^block*/id)arg1 ;
@end

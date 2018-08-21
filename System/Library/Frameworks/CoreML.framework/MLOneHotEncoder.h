/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLModeling.h>

@class NSOrderedSet, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling> {

	BOOL _ouputSparse;
	BOOL _handleUnknown;
	NSOrderedSet* _featureEncoding;

}

@property (nonatomic,readonly) NSOrderedSet * featureEncoding;                     //@synthesize featureEncoding=_featureEncoding - In the implementation block
@property (nonatomic,readonly) BOOL ouputSparse;                                   //@synthesize ouputSparse=_ouputSparse - In the implementation block
@property (nonatomic,readonly) BOOL handleUnknown;                                 //@synthesize handleUnknown=_handleUnknown - In the implementation block
@property (nonatomic,readonly) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 ;
+(id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 ;
+(id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 ;
-(id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 ;
-(id)encodeFeatureValue:(id)arg1 ;
-(id)encodeFeatureValueIntString:(unsigned long long)arg1 ;
-(BOOL)handleUnknown;
-(id)unknownDenseVector;
-(NSOrderedSet *)featureEncoding;
-(BOOL)ouputSparse;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

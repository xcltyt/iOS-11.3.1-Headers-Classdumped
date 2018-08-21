/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDFHIRResourceDocument, NSNumber, NSError;

@interface HDClinicalIngestionExtractionOperation : HDClinicalIngestionPerAccountOperation {

	HDFHIRResourceDocument* _document;
	NSNumber* _batchSize;
	unsigned long long _countOfExtractedResources;
	unsigned long long _countOfExtractedMedicalRecords;
	unsigned long long _countOfInsertedMedicalRecords;
	unsigned long long _countOfUpdatedMedicalRecords;
	NSError* _extractionError;
	/*^block*/id _unitTest_didCompleteExtractionFromResource;

}

@property (assign,nonatomic) unsigned long long countOfExtractedResources;                   //@synthesize countOfExtractedResources=_countOfExtractedResources - In the implementation block
@property (assign,nonatomic) unsigned long long countOfExtractedMedicalRecords;              //@synthesize countOfExtractedMedicalRecords=_countOfExtractedMedicalRecords - In the implementation block
@property (assign,nonatomic) unsigned long long countOfInsertedMedicalRecords;               //@synthesize countOfInsertedMedicalRecords=_countOfInsertedMedicalRecords - In the implementation block
@property (assign,nonatomic) unsigned long long countOfUpdatedMedicalRecords;                //@synthesize countOfUpdatedMedicalRecords=_countOfUpdatedMedicalRecords - In the implementation block
@property (nonatomic,retain) NSError * extractionError;                                      //@synthesize extractionError=_extractionError - In the implementation block
@property (nonatomic,copy) NSNumber * batchSize;                                             //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id unitTest_didCompleteExtractionFromResource;                    //@synthesize unitTest_didCompleteExtractionFromResource=_unitTest_didCompleteExtractionFromResource - In the implementation block
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 ;
-(unsigned long long)countOfInsertedMedicalRecords;
-(unsigned long long)countOfExtractedResources;
-(NSError *)extractionError;
-(id)_extractionBatchWithRulesVersion:(id)arg1 error:(id*)arg2 ;
-(void)setCountOfExtractedResources:(unsigned long long)arg1 ;
-(void)setCountOfExtractedMedicalRecords:(unsigned long long)arg1 ;
-(void)_handleMedicalRecords:(id)arg1 ;
-(BOOL)_updateAccountLastExtractedRowID:(id)arg1 extractionRulesVersion:(id)arg2 error:(id*)arg3 ;
-(void)setExtractionError:(NSError *)arg1 ;
-(unsigned long long)countOfUpdatedMedicalRecords;
-(void)setUnitTest_didCompleteExtractionFromResource:(id)arg1 ;
-(unsigned long long)countOfExtractedMedicalRecords;
-(id)unitTest_didCompleteExtractionFromResource;
-(void)setCountOfUpdatedMedicalRecords:(unsigned long long)arg1 ;
-(void)setCountOfInsertedMedicalRecords:(unsigned long long)arg1 ;
-(void)main;
-(void)_cancelWithError:(id)arg1 ;
-(NSNumber *)batchSize;
-(void)setBatchSize:(NSNumber *)arg1 ;
-(void)_setDocument:(id)arg1 ;
@end

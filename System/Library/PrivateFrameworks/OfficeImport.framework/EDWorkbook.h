/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class EDResources, NSMutableArray, EDProcessors, ECMappingContext, EDWarnings, EDReference, NSDate, NSString, ESDContainer;

@interface EDWorkbook : OCDDocument {

	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned long long mActiveSheetIndex;
	NSDate* mDateBaseDate;
	int mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	NSMutableArray* mBulletBlips;
	ESDContainer* mEscherDrawingGroup;

}
+(id)impliedColorMap;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)temporaryDirectory;
-(id)warnings;
-(id)fileName;
-(id)sheetAtIndex:(unsigned long long)arg1 ;
-(void)removeWorksheetAtIndex:(unsigned)arg1 ;
-(unsigned long long)sheetCount;
-(id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(id)workbookName;
-(id)processors;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(void)addSheet:(id)arg1 ;
-(void)applyProcessors;
-(void)setTemporaryDirectory:(id)arg1 ;
-(id)initWithFileName:(id)arg1 andStringOptimization:(BOOL)arg2 ;
-(void)setDateBase:(int)arg1 ;
-(void)setVisibleRange:(id)arg1 ;
-(void)setActiveSheetIndex:(unsigned long long)arg1 ;
-(id)mappingContext;
-(id)dateBaseDate;
-(int)dateBase;
-(unsigned long long)indexOfSheet:(id)arg1 ;
-(void)reduceMemoryIfPossible;
-(unsigned)legacyDateBase;
-(id)visibleRange;
-(void)removeSheetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSheetWithName:(id)arg1 ;
-(id)activeSheet;
-(void)setActiveSheet:(id)arg1 ;
-(void)setMappingContext:(id)arg1 ;
-(id)bulletBlips;
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)arg1 ;
-(unsigned long long)activeSheetIndex;
-(void)addOtherResources:(id)arg1 ;
@end

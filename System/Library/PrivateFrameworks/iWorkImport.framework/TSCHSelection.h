/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class TSCHChartDrawableInfo, NSArray, TSCHSelectionPath, TSCHSelectionPathType, NSSet;

@interface TSCHSelection : TSKSelection {

	TSCHChartDrawableInfo* mInfo;
	NSArray* mPaths;

}

@property (nonatomic,retain,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,copy,readonly) NSArray * paths; 
@property (nonatomic,readonly) unsigned long long pathCount; 
@property (nonatomic,copy,readonly) TSCHSelectionPath * firstPath; 
@property (nonatomic,copy,readonly) TSCHSelectionPathType * pathType; 
@property (nonatomic,copy,readonly) NSSet * pathTypes; 
@property (nonatomic,readonly) BOOL returnChartFrameForAutoscroll; 
+(id)selectionWithChartInfo:(id)arg1 paths:(id)arg2 ;
+(id)emptySelectionWithChartInfo:(id)arg1 ;
+(Class)archivedSelectionClass;
-(void)saveToArchive:(ChartSelectionArchive*)arg1 archiver:(id)arg2 ;
-(TSCHChartDrawableInfo *)chartInfo;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 path:(id)arg2 ;
-(id)initFromArchive:(const ChartSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)selectionByAddingPathsFromArray:(id)arg1 ;
-(id)selectionByRemovingPathsFromArray:(id)arg1 ;
-(BOOL)returnChartFrameForAutoscroll;
-(NSSet *)pathTypes;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCHSelectionPath *)firstPath;
-(NSArray *)paths;
-(TSCHSelectionPathType *)pathType;
-(id)initWithPaths:(id)arg1 ;
-(unsigned long long)pathCount;
@end

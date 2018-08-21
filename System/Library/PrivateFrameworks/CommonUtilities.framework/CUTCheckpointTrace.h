/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointRange.h>

@class NSMutableArray;

@interface CUTCheckpointTrace : CUTCheckpointRange {

	NSMutableArray* _mutableCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableCheckpoints;              //@synthesize mutableCheckpoints=_mutableCheckpoints - In the implementation block
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(NSMutableArray *)mutableCheckpoints;
-(id)instantCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)_identifierWithExtraIdentifier:(id)arg1 ;
-(id)instantCheckpointWithName:(id)arg1 ;
-(void)setMutableCheckpoints:(NSMutableArray *)arg1 ;
-(id)description;
-(void)freeze;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)rangeCheckpointWithName:(id)arg1 ;
-(id)appendCheckpoint:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)checkpoints;
@end

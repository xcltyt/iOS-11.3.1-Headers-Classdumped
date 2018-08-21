/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DECItem, _DECLaunchInfo, NSArray, _DECPrediction;

@interface _DECFeedback : NSObject <NSSecureCoding> {

	_DECItem* _itemSelected;
	_DECLaunchInfo* _launchInfo;
	NSArray* _itemsShown;
	_DECPrediction* _prediction;

}

@property (nonatomic,retain) _DECItem * itemSelected;                  //@synthesize itemSelected=_itemSelected - In the implementation block
@property (nonatomic,retain) _DECLaunchInfo * launchInfo;              //@synthesize launchInfo=_launchInfo - In the implementation block
@property (nonatomic,retain) NSArray * itemsShown;                     //@synthesize itemsShown=_itemsShown - In the implementation block
@property (nonatomic,retain) _DECPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)feedbackWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4 ;
-(void)setItemsShown:(NSArray *)arg1 ;
-(void)setItemSelected:(_DECItem *)arg1 ;
-(NSArray *)itemsShown;
-(_DECItem *)itemSelected;
-(void)setPrediction:(_DECPrediction *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(_DECPrediction *)prediction;
-(id)initWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4 ;
-(_DECLaunchInfo *)launchInfo;
-(BOOL)relevantLaunch;
-(id)predictedItemsShown;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictions:(id)arg2 ;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 ;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictionItem:(id)arg2 ;
-(void)setLaunchInfo:(_DECLaunchInfo *)arg1 ;
@end

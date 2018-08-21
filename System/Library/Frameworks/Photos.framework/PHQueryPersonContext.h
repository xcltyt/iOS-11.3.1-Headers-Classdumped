/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {

	PHFetchOptions* _fetchOptions;

}
+(id)subpredicatesForFetchOptions:(id)arg1 ;
+(unsigned long long)peopleHomeUnverifiedFaceCountThreshold;
-(id)initWithFetchOptions:(id)arg1 ;
-(id)personContextNonePredicates;
-(id)personContextPeopleHomePredicate;
-(id)personContextAdditionalPredicate;
-(id)personContextDetailPredicate;
-(id)personContextOneUpPredicate;
-(id)_verifiedPredicate;
-(id)_faceCountPredicateWithMinimum:(unsigned long long)arg1 ;
-(id)_notVerifiedPredicate;
-(id)_verifiedVisiblePredicate;
-(id)_notHiddenTypePredicate;
-(id)subpredicates;
@end

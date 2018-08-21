/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationServerObserverXPCInterface <NSObject>
@required
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
-(void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(id)arg1;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
-(void)currentRoadNameUpdated:(id)arg1;

@end

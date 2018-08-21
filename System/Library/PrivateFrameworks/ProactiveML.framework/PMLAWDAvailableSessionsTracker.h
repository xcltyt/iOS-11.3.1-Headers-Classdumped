/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLAWDBaseTracker.h>

@protocol PMLAWDMetricQueryDelegate;
@class AWDServerConnection;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {

	id<PMLAWDMetricQueryDelegate> _delegate;
	AWDServerConnection* _awdServerConnection;

}
-(id)init;
-(id)initWithAWDConnection:(id)arg1 ;
-(void)reportStatsToAWD;
-(void)setAWDMetricQueryDelegate:(id)arg1 ;
@end

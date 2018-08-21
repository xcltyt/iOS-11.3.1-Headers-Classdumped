/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLTrainingProtocol.h>

@class NSMutableArray, NSArray, NSString;

@interface PMLTrainingMock : NSObject <PMLTrainingProtocol> {

	NSMutableArray* _internalCollectedSessions;
	NSArray* _collectedSessions;

}

@property (readonly) NSArray * collectedSessions;                   //@synthesize collectedSessions=_collectedSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5 ;
-(BOOL)modelServerUpdateWithPayload:(id)arg1 error:(id*)arg2 ;
-(void)clearCollectedSessions;
-(NSArray *)collectedSessions;
-(void)deleteSessionsWithBundleID:(id)arg1 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2 ;
-(void)trainWhile:(/*^block*/id)arg1 ;
-(void)trimDb;
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long alternativeSelectCount; 
@property (assign,nonatomic) long long characterChangeCount; 
@property (nonatomic,copy) NSString * correctionSource; 
@property (nonatomic,copy) NSString * correctionText; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)speechCorrectionStatistics;
+(id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(long long)alternativeSelectCount;
-(void)setAlternativeSelectCount:(long long)arg1 ;
-(long long)characterChangeCount;
-(void)setCharacterChangeCount:(long long)arg1 ;
-(NSString *)correctionSource;
-(void)setCorrectionSource:(NSString *)arg1 ;
-(NSString *)correctionText;
-(void)setCorrectionText:(NSString *)arg1 ;
@end

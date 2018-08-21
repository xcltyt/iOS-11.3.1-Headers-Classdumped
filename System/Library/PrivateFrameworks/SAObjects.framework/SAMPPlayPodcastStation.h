/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPPodcastStation;

@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) BOOL startPlaying; 
@property (nonatomic,retain) SAMPPodcastStation * station; 
+(id)playPodcastStation;
+(id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAMPPodcastStation *)station;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(BOOL)startPlaying;
-(void)setStartPlaying:(BOOL)arg1 ;
-(void)setStation:(SAMPPodcastStation *)arg1 ;
@end

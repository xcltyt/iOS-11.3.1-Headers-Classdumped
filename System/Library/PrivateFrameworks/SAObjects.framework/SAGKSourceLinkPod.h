/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIAppPunchOut;

@interface SAGKSourceLinkPod : SAGKPodView

@property (nonatomic,copy) NSString * linkText; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)sourceLinkPod;
+(id)sourceLinkPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(id)encodedClassName;
-(NSString *)linkText;
-(void)setLinkText:(NSString *)arg1 ;
@end

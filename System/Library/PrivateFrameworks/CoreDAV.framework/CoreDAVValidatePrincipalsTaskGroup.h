/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSMutableSet, NSURL, NSSet, NSString;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSMutableSet* _urlsToExamine;
	NSMutableSet* _principalURLs;
	NSURL* _urlBeingExamined;
	BOOL _authError;

}

@property (nonatomic,retain) NSMutableSet * urlsToExamine;                      //@synthesize urlsToExamine=_urlsToExamine - In the implementation block
@property (nonatomic,retain) NSMutableSet * principalURLs;                      //@synthesize principalURLs=_principalURLs - In the implementation block
@property (nonatomic,retain) NSURL * urlBeingExamined;                          //@synthesize urlBeingExamined=_urlBeingExamined - In the implementation block
@property (nonatomic,readonly) NSSet * resultPrincipalURLs; 
@property (nonatomic,readonly) BOOL didReceiveAuthenticationError;              //@synthesize authError=_authError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)didReceiveAuthenticationError;
-(NSMutableSet *)principalURLs;
-(NSMutableSet *)urlsToExamine;
-(void)setUrlBeingExamined:(NSURL *)arg1 ;
-(NSURL *)urlBeingExamined;
-(void)_fetchNextURL;
-(void)setUrlsToExamine:(NSMutableSet *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3 ;
-(NSSet *)resultPrincipalURLs;
-(void)setPrincipalURLs:(NSMutableSet *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(void)_finishWithError:(id)arg1 ;
@end

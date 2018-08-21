/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentInteraction.h>

@protocol SXWebContentNavigationManager;
@class NSURL, NSString;

@interface SXWebContentURLInteraction : NSObject <SXWebContentInteraction> {

	NSURL* _URL;
	id<SXWebContentNavigationManager> _navigationManager;

}

@property (nonatomic,readonly) id<SXWebContentNavigationManager> navigationManager;              //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(NSURL *)URL;
-(void)perform;
-(id<SXWebContentNavigationManager>)navigationManager;
-(id)initWithURL:(id)arg1 navigationManager:(id)arg2 ;
@end

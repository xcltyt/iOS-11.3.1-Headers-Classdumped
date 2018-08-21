/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandler.h>

@protocol SXWebContentInteraction;
@class NSString;

@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler> {

	id<SXWebContentInteraction> _interaction;

}

@property (nonatomic,readonly) id<SXWebContentInteraction> interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInteraction:(id)arg1 ;
-(id<SXWebContentInteraction>)interaction;
-(void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
@end

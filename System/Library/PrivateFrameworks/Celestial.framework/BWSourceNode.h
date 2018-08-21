/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWSourceNodeErrorDelegate;
@interface BWSourceNode : BWNode {

	id<BWSourceNodeErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (assign,nonatomic) id<BWSourceNodeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
-(void)setErrorDelegate:(id<BWSourceNodeErrorDelegate>)arg1 ;
-(id<BWSourceNodeErrorDelegate>)errorDelegate;
-(OpaqueCMClockRef)clock;
-(id)nodeType;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
@end

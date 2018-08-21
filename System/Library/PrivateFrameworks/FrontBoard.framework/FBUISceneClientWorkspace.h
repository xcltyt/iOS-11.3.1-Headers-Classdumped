/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUISceneClientIdentity;


@protocol FBUISceneClientWorkspace <NSObject>
@property (nonatomic,retain,readonly) id<FBUIProcess> clientProcess; 
@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity; 
@required
-(id<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)clientForSceneIdentifier:(id)arg1;
-(void)beginTransaction;
-(void)endTransaction;

@end

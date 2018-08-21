/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer {

	unsigned _contextID;

}

@property (nonatomic,retain,readonly) CAContext * CAContext; 
@property (nonatomic,readonly) unsigned contextID;                        //@synthesize contextID=_contextID - In the implementation block
+(id)layerWithCAContext:(id)arg1 ;
-(id)_initWithCAContext:(id)arg1 contextID:(unsigned)arg2 level:(double)arg3 ;
-(id)initWithCAContextID:(unsigned)arg1 level:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextID;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithCAContext:(id)arg1 ;
-(CAContext *)CAContext;
@end

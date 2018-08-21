/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {

	NSMutableDictionary* mAssetMap;
	NSString* mAppAssetPath;

}

@property (nonatomic,retain) NSMutableDictionary * assetMap; 
@property (nonatomic,retain) NSString * appAssetPath; 
+(id)quicklookAssetMap;
+(BOOL)hasAppAssets;
+(id)colorForResource:(id)arg1 ;
+(id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)appAssetPath;
-(NSMutableDictionary *)assetMap;
-(void)setAssetMap:(NSMutableDictionary *)arg1 ;
-(void)setAppAssetPath:(NSString *)arg1 ;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

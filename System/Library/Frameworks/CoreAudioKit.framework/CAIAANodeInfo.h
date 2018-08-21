/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(id)init;
-(void)refresh;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
@end

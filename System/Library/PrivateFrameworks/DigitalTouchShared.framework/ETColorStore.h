/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface ETColorStore : NSObject {

	NSMutableArray* _colors;
	unsigned long long _selectedColorIndex;
	BOOL _selectedIndexLoaded;

}

@property (assign,nonatomic) unsigned long long selectedColorIndex; 
@property (nonatomic,readonly) NSArray * colors; 
+(id)defaultStore;
-(id)init;
-(void)dealloc;
-(NSArray *)colors;
-(unsigned long long)selectedColorIndex;
-(void)setSelectedColorIndex:(unsigned long long)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)_colors;
-(void)addDefaultsObserver;
@end

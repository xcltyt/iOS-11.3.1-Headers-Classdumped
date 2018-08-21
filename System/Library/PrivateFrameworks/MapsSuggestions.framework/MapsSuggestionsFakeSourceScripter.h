/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, MapsSuggestionsFakeSourceScripterStep, NSObject, MapsSuggestionsFakeSource, NSString;

@interface MapsSuggestionsFakeSourceScripter : NSObject <MapsSuggestionsObject> {

	NSMutableArray* _steps;
	MapsSuggestionsFakeSourceScripterStep* _previousStep;
	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsFakeSource* _fakeSource;

}

@property (nonatomic,retain) MapsSuggestionsFakeSource * fakeSource;              //@synthesize fakeSource=_fakeSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(MapsSuggestionsFakeSource *)fakeSource;
-(void)setFakeSource:(MapsSuggestionsFakeSource *)arg1 ;
-(id)initWithFakeSource:(id)arg1 ;
-(void)addEntriesToAdd:(NSArray*)arg1 deleteMissing:(BOOL)arg2 ;
-(void)addEntriesToDelete:(NSArray*)arg1 ;
-(void)_sendStep:(id)arg1 ;
-(void)sendNextNow;
-(void)sendNextAfterSeconds:(double)arg1 ;
-(void)resendSameNow;
-(void)resendSameAfterSeconds:(double)arg1 ;
@end

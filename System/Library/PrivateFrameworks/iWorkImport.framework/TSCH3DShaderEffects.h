/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSSet;

@interface TSCH3DShaderEffects : NSObject {

	NSMutableArray* mSections[4];
	NSArray* mCacheList;

}

@property (nonatomic,readonly) NSSet * identifier; 
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)enumerateEffectsUsingBlock:(/*^block*/id)arg1 ;
-(void)resetToArray:(id)arg1 ;
-(void)addEffectOnce:(id)arg1 toSection:(int)arg2 ;
-(void)addEffect:(id)arg1 toSection:(int)arg2 ;
-(void)addEffectsFromArray:(id)arg1 toSection:(int)arg2 ;
-(void)prependEffect:(id)arg1 toSection:(int)arg2 ;
-(void)removeEffect:(id)arg1 fromSection:(int)arg2 ;
-(void)resetCacheList;
-(void)resetSection:(int)arg1 ;
-(void)addEffectsFromArray:(id)arg1 ;
-(void)prependEffect:(id)arg1 ;
-(BOOL)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2 ;
-(void)setEnable:(BOOL)arg1 forSection:(int)arg2 ;
-(BOOL)isSectionEnabled:(int)arg1 ;
-(void)resetSection:(int)arg1 toArray:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSSet *)identifier;
-(void)reset;
-(id)effects;
-(void)addEffect:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CKKnowledgeStore;

@interface CKEntity : NSObject {

	 identifier;
	 store;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) CKKnowledgeStore * store; 
@property (readonly,nonatomic) long long hashValue; 
@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(CKKnowledgeStore *)store;
-(BOOL)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEvent:(id)arg1 knowledgeStore:(id)arg2 ;
-(void)linkBasedOnRulesAfterConnecting:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 knowledgeStore:(id)arg2 ;
-(void)setValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 error:(id*)arg4 ;
-(void)linksTo:(id)arg1 matchType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)linksTo:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
-(long long)hashValue;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _NAUINamedViewConstraints : NSObject {

	NSString* _name;
	NSArray* _constraints;
	id _stalenessToken;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy,readonly) id stalenessToken;              //@synthesize stalenessToken=_stalenessToken - In the implementation block
-(NSString *)name;
-(NSArray *)constraints;
-(id)stalenessToken;
-(id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3 ;
@end

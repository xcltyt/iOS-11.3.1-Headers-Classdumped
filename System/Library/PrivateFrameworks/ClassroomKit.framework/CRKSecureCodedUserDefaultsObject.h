/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject {

	NSSet* _classes;

}

@property (nonatomic,copy,readonly) NSSet * classes;              //@synthesize classes=_classes - In the implementation block
-(void)setValue:(id)arg1 ;
-(id)value;
-(NSSet *)classes;
-(id)initWithKey:(id)arg1 classes:(id)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
-(id)valueWithError:(id*)arg1 ;
-(BOOL)setValue:(id)arg1 error:(id*)arg2 ;
@end

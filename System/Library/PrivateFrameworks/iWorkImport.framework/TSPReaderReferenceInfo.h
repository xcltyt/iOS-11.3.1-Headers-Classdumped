/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPReaderReferenceInfo : NSObject {

	long long _objectIdentifier;
	long long _componentIdentifier;

}

@property (nonatomic,readonly) long long objectIdentifier;                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
+(id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(long long)objectIdentifier;
-(id)init;
-(long long)componentIdentifier;
@end

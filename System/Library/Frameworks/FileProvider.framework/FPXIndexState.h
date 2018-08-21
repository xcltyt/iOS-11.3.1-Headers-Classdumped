/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface FPXIndexState : NSObject {

	NSData* _lastPage;
	NSData* _lastChangeToken;

}

@property (nonatomic,readonly) unsigned long long phase; 
@property (nonatomic,readonly) NSData * lastPage;                        //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,readonly) NSData * lastChangeToken;                 //@synthesize lastChangeToken=_lastChangeToken - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(id)stateWithData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPage:(id)arg1 changeToken:(id)arg2 ;
-(id)initWithChangeToken:(id)arg1 ;
-(NSData *)lastChangeToken;
-(id)init;
-(unsigned long long)phase;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)dataRepresentation;
-(NSData *)lastPage;
@end

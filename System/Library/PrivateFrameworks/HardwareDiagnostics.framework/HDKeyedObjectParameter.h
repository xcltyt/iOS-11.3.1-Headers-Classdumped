/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/HDParameterDescription.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface HDKeyedObjectParameter : NSObject <HDParameterDescription> {

	NSMutableDictionary* _keys;
	BOOL _required;
	NSString* _summary;

}

@property (nonatomic,retain) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (nonatomic,readonly) NSDictionary * keys;                 //@synthesize keys=_keys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(NSString *)summary;
-(BOOL)required;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)keys;
-(void)addKeys:(id)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithSummary:(id)arg1 required:(BOOL)arg2 ;
-(void)addKey:(id)arg1 forName:(id)arg2 ;
@end

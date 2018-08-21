/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)functionWithName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(Object*)CA_copyRenderValue;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(unsigned long long)outputCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)inputCount;
-(id)_initWithName:(int)arg1 ;
@end

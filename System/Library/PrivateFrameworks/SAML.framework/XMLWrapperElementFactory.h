/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperElementFactory : NSObject
+(id)sharedInstance;
+(void)initialize;
+(Class)elementClassByTagName:(id)arg1 ;
+(unsigned long long)elementTypeByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 ;
-(Class)classForXMLNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end


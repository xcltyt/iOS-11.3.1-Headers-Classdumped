/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSMutableDictionary, NSData, XMLWrapperElement, XMLWrapperQuery, NSDictionary;

@interface XMLWrapperDoc : NSObject {

	xmlDoc* _doc;
	xmlNode* _docNode;
	NSMutableDictionary* _namespaces;
	NSData* _xmlData;
	NSData* _schemaData;
	XMLWrapperElement* _documentElement;
	XMLWrapperQuery* _query;

}

@property (nonatomic,retain) NSData * xmlData;                                 //@synthesize xmlData=_xmlData - In the implementation block
@property (nonatomic,retain) NSData * schemaData;                              //@synthesize schemaData=_schemaData - In the implementation block
@property (nonatomic,retain) XMLWrapperElement * documentElement;              //@synthesize documentElement=_documentElement - In the implementation block
@property (nonatomic,retain) XMLWrapperQuery * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSDictionary * namespaces;                      //@synthesize namespaces=_namespaces - In the implementation block
-(void)setQuery:(XMLWrapperQuery *)arg1 ;
-(void)dealloc;
-(XMLWrapperQuery *)query;
-(XMLWrapperElement *)documentElement;
-(xmlNode*)nodePtr;
-(void)setXmlData:(NSData *)arg1 ;
-(NSData *)xmlData;
-(void)setNamespace:(id)arg1 ;
-(NSDictionary *)namespaces;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(NSData *)schemaData;
-(void)setSchemaData:(NSData *)arg1 ;
-(BOOL)createDocument:(id*)arg1 ;
-(id)createDocumentElement:(id*)arg1 ;
-(id)getResultsByXpathQuery:(id)arg1 error:(id*)arg2 ;
-(xmlDoc*)docNode:(id*)arg1 ;
-(BOOL)setXMLDoc:(id*)arg1 ;
-(id)firstResultByXpathQuery:(id)arg1 error:(id*)arg2 ;
-(xmlDoc*)docPtr;
-(void)setDocumentElement:(XMLWrapperElement *)arg1 ;
-(id)xmlString:(id*)arg1 ;
@end

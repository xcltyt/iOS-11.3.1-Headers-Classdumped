/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject {

	NSString* _textureSetID;
	int _seriesIndex;
	int _fillPropertyType;

}

@property (nonatomic,readonly) NSString * textureSetID;                     //@synthesize textureSetID=_textureSetID - In the implementation block
@property (nonatomic,readonly) NSString * textureSetFilename; 
@property (nonatomic,readonly) unsigned long long seriesIndex; 
+(id)instanceWithArchive:(const Chart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3 ;
+(id)instanceWithDEPRECATEDArchive:(const DEPRECATEDChart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3 ;
+(id)identifierWithContentsOfDictionary:(id)arg1 ;
-(void)saveToArchive:(Chart3DFillArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(id)initWithArchive:(const Chart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
-(unsigned long long)countOfSeriesInFillSet;
-(NSString *)textureSetFilename;
-(BOOL)isOnDemandResource;
-(NSString *)textureSetID;
-(id)localDirectoryPath;
-(id)lowResLocalDirectoryPath;
-(id)mipmapLocalDirectoryPath;
-(id)textureOnDemandResourceTag;
-(id)mipmapOnDemandResourceTag;
-(BOOL)isStoredInLocalBundle;
-(id)lowResTextureSetFilename;
-(id)mipmapTextureSetFilename;
-(id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3 ;
-(int)fillPropertyTypeFromName:(id)arg1 ;
-(unsigned long long)seriesIndexFromSageSeriesName:(id)arg1 ;
-(id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3 ;
-(id)p_sageFillPropertyNames;
-(id)p_sageSeriesNames;
-(id)p_plistPath;
-(id)p_plistData;
-(id)p_loadPlist;
-(id)p_getPlist;
-(id)p_version;
-(id)sageFillName;
-(id)sageSeriesName;
-(id)p_sageFillSetList;
-(BOOL)isSageCompatible;
-(id)loadPropertiesDictionary;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(unsigned long long)seriesIndex;
-(void)setSeriesIndex:(unsigned long long)arg1 ;
@end

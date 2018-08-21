/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUEmbedConfigurationLoader.h>

@class SXJSONDictionary, FCAppConfigurationManager, FCFlintResourceManager, FCAsyncOnceOperation, NSString;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader> {

	SXJSONDictionary* _embedConfiguration;
	FCAppConfigurationManager* _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	FCAsyncOnceOperation* _asyncOnceOperation;

}

@property (nonatomic,retain) FCAppConfigurationManager * appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                    //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * asyncOnceOperation;                        //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONDictionary * embedConfiguration;                          //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
-(FCAppConfigurationManager *)appConfigurationManager;
-(void)setAppConfigurationManager:(FCAppConfigurationManager *)arg1 ;
-(FCFlintResourceManager *)flintResourceManager;
-(SXJSONDictionary *)embedConfiguration;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
-(id)loadEmbededConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(id)asyncLoadEmbedConfigurationOnceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

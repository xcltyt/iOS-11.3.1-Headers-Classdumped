/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCAppConfigurationManager, FCFlintResourceManager, NUEmbedConfigurationOperationResult;

@interface NUEmbedConfigurationOperation : FCOperation {

	/*^block*/id _completion;
	FCAppConfigurationManager* _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	NUEmbedConfigurationOperationResult* _result;

}

@property (nonatomic,retain) FCAppConfigurationManager * appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                    //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) NUEmbedConfigurationOperationResult * result;                     //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NUEmbedConfigurationOperationResult *)result;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCAppConfigurationManager *)appConfigurationManager;
-(void)setAppConfigurationManager:(FCAppConfigurationManager *)arg1 ;
-(FCFlintResourceManager *)flintResourceManager;
-(void)setResult:(NUEmbedConfigurationOperationResult *)arg1 ;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

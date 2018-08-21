/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	Class _modelClass;
	NSArray* _identifierSets;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) Class modelClass;                            //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,copy) NSArray * identifierSets;                      //@synthesize identifierSets=_identifierSets - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsModelClass:(Class)arg1 ;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(void)setModelClass:(Class)arg1 ;
-(void)setIdentifierSets:(NSArray *)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(NSArray *)identifierSets;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(Class)modelClass;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _responseHandler;
	vector<long long, std::__1::allocator<long long> >* _persistentIDs;

}

@property (assign,nonatomic) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) vector<long long persistentIDs;                //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,copy) id responseHandler;                              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(vector<long long)persistentIDs;
-(void)setPersistentIDs:(vector<long long)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end

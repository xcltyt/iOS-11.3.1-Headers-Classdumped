/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoder.h>

@class TSPPasteboard, NSMutableDictionary, NSArray, NSString;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder> {

	TSPPasteboard* _pasteboard;
	NSMutableDictionary* _nativeData;
	NSMutableDictionary* _tspData;

}

@property (nonatomic,readonly) NSArray * promisedDataTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3 ;
-(void)loadNativeData;
-(NSArray *)promisedDataTypes;
-(id)init;
-(NSString *)debugDescription;
-(id)dataForIdentifier:(long long)arg1 ;
@end

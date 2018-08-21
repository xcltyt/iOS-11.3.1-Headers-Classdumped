/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReader.h>
#import <iWorkImport/TSPComponentParserDelegate.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate> {

	id<TSUStreamReadChannel> _readChannel;
	struct {
		unsigned isReadingFromDocument : 1;
		unsigned ignoreUnknownContent : 1;
		unsigned ignoreVersionChecking : 1;
		unsigned acceptUnknownDocumentObject : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4 ;
-(BOOL)shouldProceedParsingOnFailure;
-(id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const MessageInfo*)arg2 message:(auto_ptr<google::protobuf::Message>*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >*)arg5 unknownContent:(id)arg6 ;
-(id)unknownObjectUnarchiverArchiveInfo:(const ArchiveInfo*)arg1 stream:(DispatchDataInputStream*)arg2 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 ;
-(id)newUnarchiverWithArchiveInfo:(const ArchiveInfo*)arg1 stream:(DispatchDataInputStream*)arg2 isUnknownObject:(BOOL*)arg3 ;
-(const MessageInfo*)unknownObjectMessageInfo;
-(id)unknownMessageFromMessageInfo:(const MessageInfo*)arg1 stream:(DispatchDataInputStream*)arg2 ;
-(BOOL)componentParser:(id)arg1 didReadArchiveInfo:(const ArchiveInfo*)arg2 stream:(DispatchDataInputStream*)arg3 error:(id*)arg4 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(void)dealloc;
@end

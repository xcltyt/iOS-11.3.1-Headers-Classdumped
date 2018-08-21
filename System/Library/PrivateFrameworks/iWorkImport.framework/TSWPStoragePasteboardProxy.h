/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {

	TSWPStorage* _storage;
	NSRange _range;
	id<TSWPStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) NSRange storageRange;              //@synthesize range=_range - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 range:(NSRange)arg3 styleProvider:(id)arg4 ;
-(NSRange)storageRange;
@end

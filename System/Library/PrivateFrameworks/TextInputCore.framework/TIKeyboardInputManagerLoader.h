/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIKeyboardInputManagerLoaderSyncHelper, NSMutableDictionary, NSXPCConnection, TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerLoader : NSObject {

	TIKeyboardInputManagerLoaderSyncHelper* _helper;
	NSMutableDictionary* _availableInputManagers;
	NSMutableDictionary* _lastUsedDate;
	NSMutableDictionary* _activeInputManagers;
	NSXPCConnection* _interactingConnection;
	TIKeyboardInputManagerBase* _mostRecentlyRequested;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * mostRecentlyRequested;              //@synthesize mostRecentlyRequested=_mostRecentlyRequested - In the implementation block
@property (assign,nonatomic) NSXPCConnection * interactingConnection;                         //@synthesize interactingConnection=_interactingConnection - In the implementation block
+(id)sharedLoader;
-(id)init;
-(void)dealloc;
-(id)activeInputModeIdentifiers;
-(id)resourceInputModes;
-(void)startSyncHelper;
-(id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2 ;
-(void)cacheInputManager:(id)arg1 ;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
-(BOOL)hasActiveInputManagers;
-(NSXPCConnection *)interactingConnection;
-(void)setInteractingConnection:(NSXPCConnection *)arg1 ;
-(TIKeyboardInputManagerBase *)mostRecentlyRequested;
-(void)setMostRecentlyRequested:(TIKeyboardInputManagerBase *)arg1 ;
@end

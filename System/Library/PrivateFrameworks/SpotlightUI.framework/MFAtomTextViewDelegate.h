/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFAtomTextViewDelegate <NSObject>
@optional
-(void)atomTextViewDidChangeSelection:(id)arg1;
-(id)supportedPasteboardTypesForAtomTextView:(id)arg1;
-(id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
-(BOOL)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;

@required
-(id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;

@end

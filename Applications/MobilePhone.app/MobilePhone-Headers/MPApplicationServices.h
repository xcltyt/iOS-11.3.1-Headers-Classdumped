//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHApplicationServices.h"

@class CNContactStore, TPFavoritesController, VMVoicemailManager;

@interface MPApplicationServices : PHApplicationServices
{
    CNContactStore *_suggestedContactStore;
    TPFavoritesController *_favoritesController;
    VMVoicemailManager *_voicemailManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
@property(retain, nonatomic) TPFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
@property(retain, nonatomic) CNContactStore *suggestedContactStore; // @synthesize suggestedContactStore=_suggestedContactStore;
- (void).cxx_destruct;
- (id)init;

@end


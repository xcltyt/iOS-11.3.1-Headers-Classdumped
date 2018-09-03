//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DfLogicModelDelegate-Protocol.h"

@class CbSongCollectionManager, DfDocument, NSError, NSMutableDictionary, NSURL;
@protocol CbSongCollectionManagerDelegate;

@interface CbSongLoader : NSObject <DfLogicModelDelegate>
{
    DfDocument *_song;
    NSError *_error;
    CbSongCollectionManager *_manager;
    id <CbSongCollectionManagerDelegate> _delegate;
    int _operation;
    NSMutableDictionary *_aacMetaData;
    long long _bouncePhase;
    long long _nTotalBouncePhases;
    double _maxProgress;
    long long _bounceBitRate;
    _Bool _showLoopRAMIssueAlertAfterSongLoading;
    unsigned long long _aacSilenceFramesAtStart;
    double _audioExportMaxLength;
    NSURL *_songURL;
}

+ (id)songLoaderWithSongURL:(id)arg1 withDelegate:(id)arg2 collectionManager:(id)arg3 forOperation:(int)arg4;
@property(retain, nonatomic) NSURL *songURL; // @synthesize songURL=_songURL;
@property(nonatomic) double audioExportMaxLength; // @synthesize audioExportMaxLength=_audioExportMaxLength;
@property(nonatomic) unsigned long long aacSilenceFramesAtStart; // @synthesize aacSilenceFramesAtStart=_aacSilenceFramesAtStart;
@property(nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
@property(nonatomic) long long bounceBitRate; // @synthesize bounceBitRate=_bounceBitRate;
@property(retain, nonatomic) NSMutableDictionary *aacMetaData; // @synthesize aacMetaData=_aacMetaData;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(nonatomic) __weak CbSongCollectionManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <CbSongCollectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) DfDocument *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (_Bool)logicModelIsMoveAutomationDataEnabledCallBack;
- (long long)logicModelProgressCallback:(struct _LgProgressBar *)arg1;
- (void)logicModelClockChangeCallBack:(long long)arg1;
- (void)bounceToPath:(id)arg1;
- (void)_waitForAUPluginsToLoadIfNecessary;
- (void)convertSong44;
- (void)finishConversionOnMainThread;
- (void)initializeConversionOnMainThread;
- (void)closeAndReleaseSong;
- (void)openSong;
- (void)importExportedForiOSSongFromLogic;
- (void)_handleAppleLoopCouldNotBeOpened:(id)arg1;
- (void)createNewSong;
- (void)createNewSongWithTouchInstrumentOrGrid:(id)arg1;
- (void)progressUpdate:(id)arg1;
- (id)init;

@end
